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

    