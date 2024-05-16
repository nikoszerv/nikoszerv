let counter = 0;    
const arr = ['black', 'white'];
function toggleDarkMode() {
    document.body.style.backgroundColor = arr[counter%arr.length];
    document.body.style.color = arr[(counter+1)%arr.length];
    counter++
}
