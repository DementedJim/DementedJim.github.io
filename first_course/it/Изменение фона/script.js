const body = document.querySelector('body')
const inputs = [].slice.call(document.querySelectorAll('input'));

inputs.forEach(input => input.addEventListener('change', handleUpdate));


function handleUpdate(e) {
  if (this.type === 'color') {
    body.style.setProperty('--body-color', this.value)
  } 
}