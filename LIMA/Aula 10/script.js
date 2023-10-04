// var nome = document.getElementById('nome')
// var resultado = document.getElementById('resultado')

// function buscarElemento(){
//     // let nome = document.getElementById('nome')

//     resultado.innerHTML = nome.value 
// }

//Desenvolva um programa que leia três variáveis (a, b, c) e resolva a expressão: ( a + b ) / c.

function calculo(){
    let a = Number(document.getElementById('a ').value);
    let b = Number(document.getElementById('b ').value);
    let c = Number(document.getElementById('c ').value);

    document.querySelector('#result').innerHTML = `A soma de 'a' + 'b' divido por 'c' é igual a: ${(a + b) /c}`
}

function soma(){
    let velocidade = Number(document.getElementById('vel').value);
    let distancia = Number(document.getElementById('dist').value);

    document.querySelector('#botao').innerHTML = `A soma de 'result = 'distancia' divido por 'velocidade' é igual a: ${distancia / velocidade}`
}

function sooma(){
    let nome = document.getElementById('nome').value;
    let salario = Number(document.getElementById('salario').value);
    let porcentagem = Number(document.getElementById('porcentagem').value);

    document.querySelector('#botaao').innerHTML = `O novo salário ${nome} percentual do reajuste foi de : ${(porcentagem / 100 + 1) *salario}`
}


