#include <iostream>
#include <locale>
using namespace std;

// Teste - numeros pares e impares
int main() {
  // Permite que caracteres especiais sejam plotados
	setlocale(LC_ALL, "Portuguese");

  // Def Var
	int num;

  // Plot - start
	cout << "Entre com um número inteiro: ";
	cin >> num;

  // Calculo com 'resto'
	if (num % 2 == 0)  // Se resto zero, então é par
		cout << "O número é par.\n";
    
	else               // Se resto diferente de zero, então é impar
		cout << "O número é impar.\n";
}
