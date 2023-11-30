let displayValue = '';

function appendValue(value) {
  displayValue += value;
  document.getElementById('display').value = displayValue;
}

function clearDisplay() {
  displayValue = '';
  document.getElementById('display').value = displayValue;
}

function calculate() {
  try {
    const result = eval(displayValue);
    displayValue = result.toString();
    document.getElementById('display').value = displayValue;
  } catch (error) {
    displayValue = 'Error';
    document.getElementById('display').value = displayValue;
  }
}
