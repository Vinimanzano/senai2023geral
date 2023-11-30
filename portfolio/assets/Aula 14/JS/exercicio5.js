function contagem() {
    let saida = document.getElementById('saida')
    let num = Number(document.getElementById('fnum').value)
    saida.innerHTML += `<h2>Contando de 0 até ${num}</h2>`
    let cont = 0
    while (cont <= num) {
        saida.innerHTML += ` ${cont} 👉`
        cont ++
    }
    saida.innerHTML += ` 🏁`
}