// let - variavel local  (dentro de funçao)
// var - variavel global (fora de funçao)
// const - variavel constante

// const obj = [
//     {
//         name: 'vinícius',
//         age: 28,
//         contry: 'Brazil'
//     },
//     {
//         name: 'tchurusbig',
//         age: 20,
//         contry: 'Brazil'
//     },
//     {
//             name: 'tchurusbagu',
//             age: 23,
//             contry: 'Brazil'
//     }
// ]

// console.log(obj);
// console.warn('AVISO');
// console.error('ERRO');
// console.table(obj);

// + soma
// - subtração
// * mutiplicação
// / divisão
// ** potenciação
// % resto da divisão

// Operadores de compração 

// > maior que
// < menor que
// >= maior ou igual que
// <=menor ou igual que 
// = atribuição
// == igualdae (valor) (dois igual)
// != diferente (valor)
// === igualdade (valor e tipo)
// !== diferente (valor e tipo)


// var a = 10;
// var b = '10';
// console.log(a == b);


//1. Desenvolva um programa que leia três variáveis (a, b, c) e resolva a expressão: ( a + b ) / c.
// var a = 5;
// var b = 7;
// var c = 9;
// console.log((a + b) / c);

// 2. Desenvolva um programa que leia a velocidade de um carro (km/h) e a distância a ser percorrida (km) por ele. 
//Calcule e apresente na tela, quanto tempo (horas) será necessário para o carro percorrer a distância informada.
// var vel = 100;
// var dist = 50;
// var temp = dist / vel;
// console.log(temp);

//revisão do professor 
// var nome = 'Vinícius';
// var salario = 2100;
// var reajuste = 50;
// var novoSalario = salario + (salario * reajuste / 100);
// console.log(nome + 'novo salário:'  + novoSalario);

// 3. Desenvolva um programa que leia o nome e o salário de uma pessoa, depois leia o valor do índice percentual (%) de reajuste do salário. 
//Calcule e apresente na tela, o valor do novo salário e o nome da pessoa.
// var salario = 2000;
// var porcentual = 10;
// console.log((salario * porcentual / 100)+salario);

// // Data / hora / mes
// var data = new Date();

// var dia = data.getDate();
// var mes = data.getMonth() +1;
// var ano = data.getFullYear();

//var anocompleto = dia + '/' + mes + '/' + ano;

// var anocompleto = `${dia}/${mes}/${ano}`;

// var hora = data.getHours();
// var minuto = data.getMinutes();
// var segundo = data.getSeconds();
// //var horaCompleta = `${hora}:${minuto}`;
// var horaCompleta = `${hora}:${minuto}:${segundo}`;

// console.log(anocompleto, horaCompleta);

//Math.ceil()  (Arredonda pra cima)
// //Math.floor() (Arredonda pra baixo)
// //Math.round() (Arredonda para o número mais proximo)

// var n = '10';
// //Number.parseInt(); - converse para inteiro
// //Number.parseFloat(); - converse para inteiro


// console.log(Math.ceil(10.1));
// console.log(Math.floor(10.9));
// console.log(Math.round(10.7));
// console.log(Number.parseInt(n));
// console.log(Number.parseFloat(n));

//Condicionais - mesma estrutura de C
// if(){

// }else if(){

// }else{

// }

//condição ? true : false; - if ternario

// switch(n){
//     case 1:
//         break;
// //     default:
// for(let i = 0; i < 10; i++){
//     console.log(i);
// }

// while(){

// }

// do {

// // }while()

// var list = 'a b c d e' .split(' ');

// for(let i = 0; i < list.lenght; i++){
//       console.log(list[i]);
// }

// list.forEach(item =>{
//      console.log(item);
//  })

// for(let item of list){
//     console.log(item);
// }

// chamar função
// function nome(){

// }
// nome ();

//1. Desenvolva um programa que leia o preço de um produto e se o preço for maior do que 1000 reais aplique um desconto de 8%. 
//Mostre o preço final.

// function nomes(){
//     var preco = 1544

//     if(preco > 1000){
//         preco = preco * 0.88;
//     }
//     console.log(preco)
// }
// nomes(); 

// //2. Desenvolva um programa que leia o salário de um funcionário e o número de filhos. Se o salário for menor do que 2000 o funcionário receberá um salário família equivalente a 45 reais por filho. 
//  //Apresente o salário final.

// nome();
// function nome(){
//     var salario1 = 1500, salario2 = 1200, salario3 = 2000, filho = 6
   
//     if(salario1 > 2000){

//         salario2 = filho * 45
//         salario1 = salario1 + salario2;
//     }
//         console.log('Seu salário foi alterado')
// }
