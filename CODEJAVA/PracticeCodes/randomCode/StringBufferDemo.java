class StringBufferDemo {
    public static void main(String args[]){
        StringBuffer s1 = new StringBuffer(15);
        String s = new String("java");
        StringBuffer s2 = new StringBuffer(s);
        System.out.println("String s1: " + s1);
        System.out.println("String s2: " + s2);

        //TO DISPLAY LENGTH
        System.out.println("Length of String s1: " + s1.length());
        System.out.println("Length of String s2: " + s2.length());

        //TO DISPLAY CAPACITY
        System.out.println("Capacity of String s1: " + s1.capacity());
        System.out.println("Capacity of String s2: " + s2.capacity());

        //TO SET BUFFER CAPACITY
        s1.ensureCapacity(20);
        System.out.println("Set Buffer Capacity of String s1: " + s1.capacity());

        //TO SET/REPLACE CHARACTER AT GIVEN POSITION
        System.out.println("Replace character at position 1 with A in String s2: " + s2.replace(1,2,"A"));
        
        //TO APPEND STRING
        s2.append(" program");
        System.out.println("Append 'program' at the end of String s2: " + s2);

        //TO APPEND CHARACTER
        // s2.append('A');
        // System.out.println("Append 'A' at the end of String s2: " + s2);
        
        //TO INSERT STRING
        s1.insert(0, "hello");
        System.out.println("Insert 'hello' at the beginning of String s1: " + s1);
        
        //TO REVERSE A STRING
        s1.reverse();
        System.out.println("Reverse the String s1: " + s1);
        
        //TO DELETE A SUBSTRING
        s2.delete(10, 12);
        System.out.println("Delete a substring from position 10 to position 12 in String s2: " + s2);
        
        //TO DELETE CHARACTER AT SPECIFIC INDEX
        s2.deleteCharAt(1);
        System.out.println("Delete a character at position 1 in String s2: " + s2);

        //TO REPLACE SUBSTRING
        s2.replace(0,4,"java hi ");
        System.out.println("Replace a substring from position 0 to position 4 in String s2 with 'java hi': " + s2);
    }
}