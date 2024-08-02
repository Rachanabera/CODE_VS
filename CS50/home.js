function saveSelection() {
  var cpuSelection = document.getElementById("cpuSelect").value;
  var gpuSelection = document.getElementById("gpuSelect").value;
  var gameSelection = document.getElementById("gameSelect").value; // Add game selection

  // Check if any of the selections is still the default placeholder
  if (cpuSelection === "" || gpuSelection === "" || gameSelection === "") {
    alert("Please select CPU, GPU, and Game.");
    return;
}
  
  // Save selections to localStorage
  localStorage.setItem('selectedCPU', cpuSelection);
  localStorage.setItem('selectedGPU', gpuSelection);
  localStorage.setItem('selectedGame', gameSelection); // Save game selection

  // Redirect to the FPS page
  window.location.href = 'fps.html';
}
