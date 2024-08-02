// Assume you have a function to fetch FPS data based on CPU, GPU, and game selections
function getEstimatedFPS(cpu, gpu, game) {
  // Modify this function based on how FPS is calculated for different games
  if (game === "Cyberpunk 2077"){
    if (cpu === "AMD Ryzen 9 7950X" && gpu === "AMD Radeon RX 6950 XT") {
        return 46;
    } else if (cpu === "AMD Ryzen 9 7950X" && gpu === "Nvidia RTX 4090") {
        return 80;
    } else if (cpu === "Intel Core i9-14900K" && gpu === "AMD Radeon RX 6950 XT") {
        return 46;
    } else if (cpu === "Intel Core i9-14900K" && gpu === "Nvidia RTX 4090") {
        return 80;
    } else {
        return 0;
    }
  }
  else if (game === "DOOM Eternal") {
    if (cpu === "AMD Ryzen 9 7950X" && gpu === "AMD Radeon RX 6950 XT") {
        return 135;
    } else if (cpu === "AMD Ryzen 9 7950X" && gpu === "Nvidia RTX 4090") {
        return 364;
    } else if (cpu === "Intel Core i9-14900K" && gpu === "AMD Radeon RX 6950 XT") {
        return 135;
    } else if (cpu === "Intel Core i9-14900K" && gpu === "Nvidia RTX 4090") {
        return 364;
    } else {
        return 0;
    }
  }
}

// Retrieve selections from localStorage
var selectedCPU = localStorage.getItem('selectedCPU');
var selectedGPU = localStorage.getItem('selectedGPU');
var selectedGame = localStorage.getItem('selectedGame'); // Retrieve game selection

// Get estimated FPS based on CPU, GPU, and game selections
var estimatedFPS = getEstimatedFPS(selectedCPU, selectedGPU, selectedGame);

// Display the result
document.getElementById("result").innerHTML = `<p>For 4K/2160P: ${estimatedFPS} FPS</p>`;

function goBack() {
  // Redirect back to the home page
  window.location.href = 'home.html';
}
