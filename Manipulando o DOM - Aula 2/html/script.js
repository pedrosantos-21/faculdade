const elemento = document.querySelector("#calcular");
const resultado = document.querySelector(".resultado");

function manipulaDados() {
    elemento.addEventListener("click", () => {
        resultado.innerHTML = "fui clicado";
    });
}

// Chama a função manipulaDados para adicionar o ouvinte de clique
manipulaDados();
