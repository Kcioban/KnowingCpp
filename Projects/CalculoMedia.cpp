#include <iostream>
#include <locale>

using namespace std;

// Constante para o valor da aprovação
const float NOTA_APROVACAO = 6.0;

float nota1, nota2, media;

// Função de auxílio para organizar em ordem crescente as notas de entrada
void ordena() {
    if (nota1 > nota2) {
        swap(nota1, nota2);
    }
}

// Função para calcular a média
float calcularMedia(float n1, float n2) {
    return (n1 + n2) / 2;
}

// Função para verificar se o aluno foi aprovado
bool foiAprovado(float media) {
    return media >= NOTA_APROVACAO;
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    cout << "=== Descubra a média! ===" << endl;
    cout << "Informe a primeira nota:" << endl;
    cin >> nota1;
    cout << "Informe a segunda nota:" << endl;
    cin >> nota2;

    ordena();

    cout << "Sua nota maior foi: " << nota2 << endl;
    cout << "Sua nota menor foi: " << nota1 << endl;

    media = calcularMedia(nota1, nota2);
    cout << "Sua média foi de: " << media << endl;

    if (media < NOTA_APROVACAO) {
        cout << "Você ficou abaixo da média, informe a nota da prova substitutiva:" << endl;
        cin >> nota2;
        media = calcularMedia(nota1, nota2);
        cout << "Sua NOVA média foi de: " << media << endl;

        if (foiAprovado(media)) {
            cout << "Você foi aprovado!" << endl;
        } else {
            cout << "Você foi reprovado!" << endl;
        }
    } else {
        cout << "Você foi aprovado!" << endl;
    }

    return 0;
}
