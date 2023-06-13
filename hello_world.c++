// OBS: no C++ em todo o final de linha, coloca-se ';'
#include <iostream>  // comando de entrada e saida
using namespace std; // substituir o std::cout (saída) e std::cin (entrada)

main() { // o main engloba todas as funções, abaixo dele, precisa-se colocar a variável ; char: nome ; int: números ; float: n. decimais ; str: cadeia de caracteres

    char name[15]; // o colchete indica a quantidade dos caracteres, ou poderia colocar a variavel "string" que é a própria cadeia de caracteres e não precisa expressar o limite de caracteres
    int idade;

    cout << "Ola mundo!" << endl; // o endl substitui o '\n' para separar as linhas

    cout << "Qual e o seu nome?" << endl;
    cin >> name;
    cout << "Seu nome e " << name << ", prazer meu nome e Caio!" << endl; // para colocar sua variável na frase de resposta, basta fechar as aspas do inicio e inserir " << variavel << " e continuar a outra frase com aspas

    cout << "Qual sua idade?" << endl;
    cin >> idade;
    cout << "Sua idade e " << idade << ", a minha e 18!" << endl;
    cout << "Ate mais <3";

    return 0; // serve para finalizar e zerar todos os algoritmos
}