//BFS
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#define MAX_VERTICES 100

struct Node {
	int data;
	struct Node* next;
};

struct Node* createNode(int data)
{
	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
	newNode->data = data;
	newNode->next = NULL;
	return newNode;
}

void addEdge(struct Node* adjList[], int u, int v)
{
	struct Node* newNode = createNode(v);
	newNode->next = adjList[u];
	adjList[u] = newNode;
}

void bfs(struct Node* adjList[], int vertices, int startNode, int visited[])
{
	int queue[MAX_VERTICES];
	int front = 0, rear = 0;
	struct Node* temp;

	visited[startNode] = 1;
	queue[rear++] = startNode;

	while (front != rear) {
		int currentNode = queue[front++];
		printf("%d ", currentNode);

		temp = adjList[currentNode];
		while (temp != NULL) {
			int neighbor = temp->data;
			if (!visited[neighbor]) {
				visited[neighbor] = 1;
				queue[rear++] = neighbor;
			}
			temp = temp->next;
		}
	}
}

int main()
{        int i;
	 int visited[MAX_VERTICES]={0};
     
	int vertices = 5;

	struct Node* adjList[MAX_VERTICES];

	for (i = 0; i < vertices; ++i)
		adjList[i] = NULL;

	addEdge(adjList, 0, 1);
	addEdge(adjList, 0, 2);
	addEdge(adjList, 1, 3);
	addEdge(adjList, 1, 4);
	addEdge(adjList, 2, 4);

	printf("Breadth First Traversal starting from vertex 0: ");
	bfs(adjList, vertices, 0, visited);
	getch();
	return 0;
}
