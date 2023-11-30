function contar() {
    let saida = document.getElementById('saida')

    saida.innerHTML += `<h2>Contagem Regressiva de 10 a 1</h2>`
    let cont = 10
    while (cont >= 1) {
        saida.innerHTML += ` ${cont} 👉`
        cont -- // Corresponde a cont = cont - 1
    }
    saida.innerHTML += ` 🏁`
}