#include <iostream>
using namespace std;

//Exemplo de uso de recursividade:
void andar(int posicao) {
    if (posicao == 0) {
        cout << "Voce alcancou a posicao 0 - final." << endl;
        return;
    }

    // Calculo da posição
    cout << "Att de posicao: " << posicao << endl;
    andar(posicao - 1);
}

// Função para plot recursividade
int main() {
    int posicaoAtual;

    cout << "Digite sua posicao atual (Numero): ";
    cin >> posicaoAtual;
    cout << endl;
  
    cout << "Andando..." << endl;
    andar(posicaoAtual);

    return 0;
}
