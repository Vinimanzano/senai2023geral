function contar() {
    let saida = document.getElementById('saida')

    saida.innerHTML += `<h2>Números pares de 1 até 10</h2>`
    let cont = 2
    while (cont <= 10) {
        saida.innerHTML += ` ${cont} 👉`
        cont += 2 // Corresponde a cont = cont + 2
    }
    saida.innerHTML += ` 🏁`
}