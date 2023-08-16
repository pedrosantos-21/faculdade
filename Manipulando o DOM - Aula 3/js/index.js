const abreLista = document.querySelector("[botao=abrirLista]")

const fechaLista = document.querySelector("[botao=fecharLista]")

abreLista.addEventListener("click", () => {
    manipulaDados("[botao=abrirLista]")
})

fechaLista.addEventListener("click", () => {
    manipulaDados("[botao=fecharLista]")
})

function manipulaDados(operacao) {
    if(operacao === "[botao=abrirLista]") {
        document.querySelector(".lista").style.display = "block"
    } else {
        document.querySelector(".lista").style.display = "none"
    }
}
