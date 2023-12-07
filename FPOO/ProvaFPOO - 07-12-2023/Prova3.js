class Marca{
    constructor(nome){
        this.nome = nome;
    }

    falaMarca(){
        return `Eu sou o carro da marca ${this.nome}`;
    }
}

class Modelo extends Marca {
    constructor(marca,modelo){
        super(marca);
        this.modelo = modelo;
    }

    falarModelo(){
        return `${this.falarMarca()} e sou o modelo ${this.modelo}`;
    }
}

const carros = [
    new Modelo('Fiat', 'FreeMont'),
    new Modelo('Fiat', 'Dodge charger'),
    new Modelo('Ram Brasil', 'Dodge ram'),
    new Modelo('Bentley', 'Bentley'),
    new Modelo('Nissan', 'GTR Skyline'),
]

console.table(carros)