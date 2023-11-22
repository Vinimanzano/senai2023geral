const morseCode = {
    '.-': 'A', '-...': 'B', '-.-.': 'C', '-..': 'D', '.': 'E',
    '..-.': 'F', '--.': 'G', '....': 'H', '..': 'I', '.---': 'J',
    '-.-': 'K', '.-..': 'L', '--': 'M', '-.': 'N', '---': 'O',
    '.--.': 'P', '--.-': 'Q', '.-.': 'R', '...': 'S', '-': 'T',
    '..-': 'U', '...-': 'V', '.--': 'W', '-..-': 'X', '-.--': 'Y',
    '--..': 'Z', '-----': '0', '.----': '1', '..---': '2', '...--': '3',
    '....-': '4', '.....': '5', '-....': '6', '--...': '7', '---..': '8',
    '----.': '9','/': ' '
  };

  // Função para converter código Morse para texto
  function converterMorse() {
    const input = document.getElementById('morseInput').value.trim();
    const resultado = document.getElementById('resultado');

    const textoDecodificado = morseToText(input);
    resultado.textContent = textoDecodificado;
  }

  // Função para converter código Morse para texto
  function morseToText(morse) {
    const palavras = morse.split('/');
    let textoDecodificado = '';

    palavras.forEach(palavra => {
      const letras = palavra.split(' ');
      letras.forEach(letra => {
        textoDecodificado += morseCode[letra] || '';
      });
      textoDecodificado += ' ';
    });

    return textoDecodificado.trim();
  }

    function converterParaMorse() {
      const morseCode = {
        'A': '.-', 'B': '-...', 'C': '-.-.', 'D': '-..', 'E': '.',
        'F': '..-.', 'G': '--.', 'H': '....', 'I': '..', 'J': '.---',
        'K': '-.-', 'L': '.-..', 'M': '--', 'N': '-.', 'O': '---',
        'P': '.--.', 'Q': '--.-', 'R': '.-.', 'S': '...', 'T': '-',
        'U': '..-', 'V': '...-', 'W': '.--', 'X': '-..-', 'Y': '-.--',
        'Z': '--..', '0': '-----', '1': '.----', '2': '..---', '3': '...--',
        '4': '....-', '5': '.....', '6': '-....', '7': '--...', '8': '---..',
        '9': '----.', ' ': '/'
      };

      const texto = document.getElementById('texto').value.toUpperCase();
      let morse = '';

      for (let i = 0; i < texto.length; i++) {
        const char = texto[i];
        if (morseCode[char]) {
          morse += morseCode[char] + ' ';
        } else {
          morse += ' ';
        }
      }

      document.getElementById('morseOutput').textContent = morse;
    }

    