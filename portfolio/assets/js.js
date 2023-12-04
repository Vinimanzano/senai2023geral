// alert("Bem Vindo ao meu Portfolio");

function setCookie(nome, valor, dias){ 
diasms = (new Date()) .getTime() + 1000 * 3600 * 24 * dias; 
dias = new Date(diasms); 
expires = dias.toGMTString(); 
document.cookie = escape(nome) + "=" + escape(valor) + "; expires=" + expires; 
} 

if (!document.cookie){
    setCookie("cookie", "1", 365);
    document.write("<font face='verdana' size='1'>Suas Visitas : 1</font>");
    } else {
    var cont = document.cookie;
    var dividindo = cont.split("=");
    //document.write(dividindo[1]);
    var numero = parseInt(dividindo[1]);
    var soma = numero + 1;
    document.write("<font face='verdana' size='1'>Suas Visitas : " + soma + "</font>");
    setCookie("cookie", soma, 365);
    }


    class MobileNavbar {
        constructor(mobileMenu, navList, navLinks) {
          this.mobileMenu = document.querySelector(mobileMenu);
          this.navList = document.querySelector(navList);
          this.navLinks = document.querySelectorAll(navLinks);
          this.activeClass = "active";
      
          this.handleClick = this.handleClick.bind(this);
        }
      
        animateLinks() {
          this.navLinks.forEach((link, index) => {
            link.style.animation
              ? (link.style.animation = "")
              : (link.style.animation = `navLinkFade 0.5s ease forwards ${
                  index / 7 + 0.3
                }s`);
          });
        }
        handleClick() {
          this.navList.classList.toggle(this.activeClass);
          this.mobileMenu.classList.toggle(this.activeClass);
          this.animateLinks();
        }
      
        addClickEvent() {
          this.mobileMenu.addEventListener("click", this.handleClick);
          
          this.navLinks.forEach(e => {
            e.addEventListener("click", this.handleClick)
          })
        }
      
        init() {
          if (this.mobileMenu) {
            this.addClickEvent();
          }
          return this;
        }
      }
      
      const mobileNavbar = new MobileNavbar(
        ".mobile-menu",
        ".nav-list",
        ".nav-list a",
      );
      mobileNavbar.init();
    

// const nada = document.getElementById('nada');
// var nada = document.getElementById('nada')
// nada.addEventListener ('submit', (e) => {
//     e.preventDefault(); })
// console.log


