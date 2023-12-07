class decoracao{
    constructor(tipo){
        this.tipo = tipo;
    }
}

class livro{
    constructor(titulo){
        this.titulo = titulo;
    }
}

class estante {
    constructor(){
        this.decoracoes = [];
        this.livro = []; 
    }

    addLivro(livro){
        this.livro.push(livro);
    }
    addDecoracoes(decoracoes){
        this.decoracoes.push(decoracoes);
    }
}

const estante1 = new estante()
const estante2 = new estante()
const estante3 = new estante()

estante2.addLivro(new livro('Harry Potter'))
estante2.addLivro(new livro('os peaky blinders'))

estante3.addLivro(new livro('Senhor dos Anéis'))
estante3.addDecoracoes(new decoracao('Mesa de PC'))

estante3.addDecoracoes(new decoracao('Quadro'))
estante3.addDecoracoes(new decoracao('Luminária'))
estante3.addDecoracoes(new decoracao('Humidificador'))

console.log(estante1)
console.log(estante2)
console.log(estante3)