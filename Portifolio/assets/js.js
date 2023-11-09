function typeWrite(elemento){
    const textoArray = elemento.innerHTML.split('');
    elemento.innerHTML = ' ';
    textoArray.forEach(function(letra, i){   
      
    setTimeout(function(){
        elemento.innerHTML += letra;
    }, 75 * i)

  });
}
const titulo = document.querySelector('.titulo-principal');
typeWrite(titulo);

function listener(e) {
  var l = document.createElement("li");
  switch (e.type) {
    case "animationstart":
      l.innerHTML = "Started: elapsed time is " + e.elapsedTime;
      break;
    case "animationend":
      l.innerHTML = "Ended: elapsed time is " + e.elapsedTime;
      break;
    case "animationiteration":
      l.innerHTML = "New loop started at time " + e.elapsedTime;
      break;
  }
  document.getElementById("output").appendChild(l);
}
var e = document.getElementById("watchme");
e.addEventListener("animationstart", listener, false);
e.addEventListener("animationend", listener, false);
e.addEventListener("animationiteration", listener, false);

e.className = "slidein";

jQuery(document).ready(function() {
  // Exibe ou oculta o botão
  jQuery(window).scroll(function() {
      if (jQuery(this).scrollTop() > 200) {
          jQuery('.voltar-ao-topo').fadeIn(200);
      } else {
          jQuery('.voltar-ao-topo').fadeOut(200);
      }
  });
  
  // Faz animação para subir
  jQuery('.voltar-ao-topo').click(function(event) {
      event.preventDefault();
      jQuery('html, body').animate({scrollTop: 0}, 300);
  })
});