class Cliente{
    constructor(nome, cpf, email, telefone){
        this.nome = nome;
        this.cpf = cpf;
        this.email = email;
        this.telefone = telefone;
    }
    getNome(){
        return this.nome;
    }
    setNome(nome){
        this.nome = nome;
    }
    getCpf(){
        return this.cpf;
    }
    setcpf(cpf){
        this.cpf = cpf;
    }
    getEmail(){
        return this.email;
    }
    setEmail(email){
        this.email = email;
    }
    getTelefone(){
        return this.telefone;
    }
    setTelefone(telefone){
        this.telefone = telefone;
    }
    toString(){
        return " Nome: " + this.nome + "\nCPF: " + this.cpf + "\nEmail: " + this.email + "\nTelefone: " + this.telefone;
    }
}

const cliente = [
    new Cliente ('Miguel','123.456.789-10', 'miguel@gmail.com', '13912-123'),
    new Cliente ('Joao','123.456.789-11', 'Joao@gmail.com', '13912-124'),
    new Cliente ('Pedro','123.456.789-12', 'Pedro@gmail.com', '13912-125'),
    new Cliente ('Ezequiel','123.456.789-13', 'Ezequiel@gmail.com', '13912-126'),
    new Cliente ('Nicolas','123.456.789-14', 'Nicolas@gmail.com', '13912-127'),
    new Cliente ('Igor','123.456.789-15', 'Igor@gmail.com', '13912-128'),
    new Cliente ('Carlos','123.456.789-16', 'Carlos@gmail.com', '13912-129'),
    new Cliente ('Vinícius','123.456.789-17', 'Vinicius@gmail.com', '13912-110'),
    new Cliente ('Felipe','123.456.789-18', 'Felipel@gmail.com', '13912-111'),
    new Cliente ('Lucas','123.456.789-19', 'Lucas@gmail.com', '13912-112'),
]

console.table(cliente)