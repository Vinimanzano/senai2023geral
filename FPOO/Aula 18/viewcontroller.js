const formPessoa = document.querySelector('#formPessoa');
const pessoas = [];

formPessoa.addEventListener('submit', (e) => {
    e.preventDefault();
    pessoas.push(new Pagamento(formPessoa.nome.value, formPessoa.salario.value));
    criarCard();
    
})
var contador = 0;
function criarCard(){
    const cards = document.querySelector('.cards');
    let card = document.querySelector('.card');
    cards.innerHTML = ''
    
    pessoas.forEach(pessoa => {
        let cardNew = card.cloneNode(true);
        cardNew.classList.remove('model');
        cardNew.id=(contador=+1);
        cardNew.querySelector("#nomeValor").innerHTML = pessoa.nome;
        cardNew.querySelector("#salarioValor").innerHTML = pessoa.salario;
        cardNew.querySelector("#salarioBase").innerHTML = pessoa.salarioBase;
        cardNew.querySelector("#salarioLiquido").innerHTML = pessoa.salarioLiquido;
        cards.appendChild(cardNew);
    })
}


