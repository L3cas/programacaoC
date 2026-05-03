#include <stdio.h>

    int main() {
        int idade = 21;
        float altura = 1.70;
        double peso = 74.5;
        char nome[20] = "Lucas";
        char jogoFavorito[20] = "Street fighter";

        printf("meu nome é %s\n"
            "tenho %d anos\n "
            "minha altura é %.2f\n"
            "meu peso é %.1f kg\n "
            "Meu jogo favorito é %s.\n ",
            nome, idade, altura, peso, jogoFavorito);
        return 0;

    }