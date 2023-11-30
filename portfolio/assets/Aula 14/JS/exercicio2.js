function contar() {
    let saida = document.getElementById('saida')

    saida.innerHTML += `<h2>Contando de 1 até 10, marcando os pares</h2>`

    let cont = 1
    while (cont <= 10) {
        if (cont % 2 == 0) {
            saida.innerHTML += `<mark><strong> ${cont} </strong></mark>👉`    
        } else {
            saida.innerHTML += ` ${cont} 👉`
        }
        cont ++ // Corresponde a cont = cont + 1
    }
    saida.innerHTML += ` 🏁`
}