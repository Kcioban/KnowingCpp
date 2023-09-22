// Bibliotecas
#include <iostream>
#include <iomanip> // Para manipulação de saída
// -------------------------------------------------------------------
using namespace std;
// -------------------------------------------------------------------
int main() {
    int codigo, cpf, cep, celular;
    string nome, rua, bairro, cidade, estado, email, rg;
// -------------------------------------------------------------------    
    cout << "\n - Para utilizar a plataforma primeiro crie um perfil - \n";
    cout << "\nDigite o código: ";
    cin >> codigo;
    cin.ignore(); // Limpa o buffer do teclado
// -------------------------------------------------------------------
    cout << "Digite o nome: ";
    getline(cin, nome);
// -------------------------------------------------------------------
    cout << "Digite a rua: ";
    getline(cin, rua);
// -------------------------------------------------------------------
    cout << "Digite o bairro: ";
    getline(cin, bairro);
// -------------------------------------------------------------------
    cout << "Digite a cidade: ";
    getline(cin, cidade);
// -------------------------------------------------------------------
    cout << "Digite o estado: ";
    getline(cin, estado);
// -------------------------------------------------------------------
    cout << "Digite o CEP(sem pontuação): ";
    getline(cin, cep);
// -------------------------------------------------------------------
    cout << "Digite o celular(sem pontuação): ";
    getline(cin, celular);
// -------------------------------------------------------------------
    cout << "Digite o email: ";
    getline(cin, email);
// -------------------------------------------------------------------
    cout << "Digite o CPF(sem pontuação): ";
    getline(cin, cpf);
// -------------------------------------------------------------------
    cout << "Digite o RG(sem pontuação):";
    getline(cin, rg);
// -------------------------------------------------------------------
    cout << "\nPerfil cadastrado com sucesso!\n";
// -------------------------------------------------------------------

    // Tabela
    cout << setfill('-') << setw(40) << "-" << endl; // Linha
    cout << "\n Ficha de cadastro\n";
    cout << setfill('-') << setw(40) << "-" << endl;
    //--------------------------------------------------------------------------
    cout << left << setw(16) << "| Código " << "| " << codigo   << " |" << endl;
    cout << left << setw(15) << "| Nome "   << "| " << nome     << " |" << endl;
    cout << left << setw(15) << "| Rua "    << "| " << rua      << " |" << endl;
    cout << left << setw(15) << "| Bairro " << "| " << bairro   << " |" << endl;
    cout << left << setw(15) << "| Cidade " << "| " << cidade   << " |" << endl;
    cout << left << setw(15) << "| Estado " << "| " << estado   << " |" << endl;
    cout << left << setw(15) << "| CEP "    << "| " << cep      << " |" << endl;
    cout << left << setw(15) << "| Celular "<< "| " << celular  << " |" << endl;
    cout << left << setw(15) << "| Email "  << "| " << email    << " |" << endl;
    cout << left << setw(15) << "| CPF "    << "| " << cpf      << " |" << endl;
    cout << left << setw(15) << "| RG "     << "| " << rg       << " |" << endl;
    // -------------------------------------------------------------------------
    cout << setfill('-') << setw(40) << "-" << endl; // Linha
    return 0;
}
