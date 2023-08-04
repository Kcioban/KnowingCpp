//Inclusão de bibliotecas
#include <iostream>
#include <locale>

//Setup do encurtador STD
using namespace std;

//Função main
int main() {
  
    //Adicionando os caracteres especiais da linguagem
    setlocale(LC_ALL, "portuguese");

    //Setup variaveis
    float num1, num2, resultado;
    char operador;

    //Plot da tela inicial
    cout << "Digite o primeiro valor: ";
    cin >> num1;
    cout << "Digite o operador (+,-,*,/): ";
    cin >> operador;
    cout << "Digite o segundo valor: ";
    cin >> num2;

    //Setup Switch Case
    switch (operador) {
        case '+':
            resultado = num1 + num2;
            break;
        case '-':
            resultado = num1 - num2;
            break;
        case '*':
            resultado = num1 * num2;
            break;
        case '/':
            resultado = num1 / num2;
            break;
        default:
            cout << "Operador inv�lido" << endl;
            return 1;
    }

    //Plot resultado
    cout << num1 << " " << operador << " " << num2 << " = " << resultado << endl;

    return 0;
}
