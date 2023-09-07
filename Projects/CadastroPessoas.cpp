// Header - Base
#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Armazenar dados
struct Pessoa {
    string codigo, nome, rua, bairro, cidade, estado, cep, celular, email, cpf, rg;
};

// Criação
vector<Pessoa> pessoas;

void criarPessoa() {
    Pessoa pessoa;
    cout << "Digite o codigo: ";
    cin >> pessoa.codigo;

    cout << "Digite o nome: ";
    cin.ignore(); // limpa o buffer do enter
    getline(cin, pessoa.nome);

    cout << "Digite a rua: ";
    getline(cin, pessoa.rua);

    cout << "Digite o bairro: ";
    getline(cin, pessoa.bairro);

    cout << "Digite a cidade: ";
    getline(cin, pessoa.cidade);

    cout << "Digite o estado: ";
    getline(cin, pessoa.estado);

    cout << "Digite o CEP: ";
    getline(cin, pessoa.cep);

    cout << "Digite o celular: ";
    getline(cin, pessoa.celular);

    cout << "Digite o e-mail: ";
    getline(cin, pessoa.email);

    cout << "Digite o CPF: ";
    getline(cin, pessoa.cpf);

    cout << "Digite o RG: ";
    getline(cin, pessoa.rg);

    pessoas.push_back(pessoa);

    cout << "Pessoa criada com sucesso!" << endl;
}

// Listagem - Consulta dos dados
void listarPessoas() {
    if (pessoas.empty()) {
        cout << "Nenhuma pessoa cadastrada." << endl;
    } else {
        cout << "Lista de pessoas:" << endl;
        for (const auto & pessoa : pessoas) {
            // Impressão dos dados
            cout << "\nDados da Pessoa:\n";
            cout << "Código: "  << pessoa.codigo    << endl;
            cout << "Nome: "    << pessoa.nome      << endl;
            cout << "Rua: "     << pessoa.rua       << endl;
            cout << "Bairro: "  << pessoa.bairro    << endl;
            cout << "Cidade: "  << pessoa.cidade    << endl;
            cout << "Estado: "  << pessoa.estado    << endl;
            cout << "CEP: "     << pessoa.cep       << endl;
            cout << "Celular: " << pessoa.celular   << endl;
            cout << "E-mail: "  << pessoa.email     << endl;
            cout << "CPF: "     << pessoa.cpf       << endl;
            cout << "RG: "      << pessoa.rg        << endl;
        }
    }
}

// Atualização
void atualizarPessoa() {
    if (pessoas.empty()) {
        cout << "Nenhuma pessoa cadastrada." << endl;
    } else {
        string nomeAux;
        cout << "Digite o nome da pessoa que deseja atualizar: ";
        getline(cin, nomeAux);
        cin.ignore(); // limpa o buffer do enter
        bool encontrou = false;
        for (auto& pessoa : pessoas) {
            if (pessoa.nome == nomeAux) {
                cout << "Digite o novo nome: ";
                getline(cin, pessoa.nome);

                cout << "Digite o novo código: ";
                cin >> pessoa.codigo;

                cout << "Digite a nova rua: ";
                cin.ignore(); // limpa o buffer do enter
                getline(cin, pessoa.rua);

                cout << "Digite o novo bairro: ";
                getline(cin, pessoa.bairro);

                cout << "Digite a nova cidade: ";
                getline(cin, pessoa.cidade);

                cout << "Digite o novo estado: ";
                getline(cin, pessoa.estado);

                cout << "Digite o novo CEP: ";
                getline(cin, pessoa.cep);

                cout << "Digite o novo celular: ";
                getline(cin, pessoa.celular);

                cout << "Digite o novo e-mail: ";
                getline(cin, pessoa.email);

                cout << "Digite o novo CPF: ";
                getline(cin, pessoa.cpf);

                cout << "Digite o novo RG: ";
                getline(cin, pessoa.rg);
                encontrou = true;
                cout << "Pessoa atualizada com sucesso!" << endl;
                break;
            }
        }
        if (!encontrou) {
            cout << "Pessoa nao encontrada." << endl;
        }
    }
}

// Deletar
void deletarPessoa() {
    if (pessoas.empty()) {
        cout << "Nenhuma pessoa cadastrada." << endl;
    } else {
        string nome;
        cout << "Digite o nome da pessoa que deseja deletar: ";
        getline(cin, nome);
        cin.ignore(); // limpa o buffer do enter
        bool encontrou = false;

        for (auto it = pessoas.begin(); it != pessoas.end(); ++it) {
            if (it->nome == nome) {
                pessoas.erase(it);
                encontrou = true;
                cout << "Pessoa deletada com sucesso!" << endl;
                break;
            }
        }
        if (!encontrou) {
            cout << "Pessoa nao encontrada." << endl;
        }
    }
}

// Menu
int main() {
    setlocale(LC_ALL, "Portuguese");
    int opcao;

    while (true) {
        cout << "=== Menu ==="        << endl;
        cout << "1. Criar pessoa"     << endl;
        cout << "2. Listar pessoas"   << endl;
        cout << "3. Atualizar pessoa" << endl;
        cout << "4. Deletar pessoa"   << endl;
        cout << "5. Sair"             << endl;
        cout << "Digite a opcao desejada: ";
        cin >> opcao;
        cin.ignore(); // limpa o buffer do enter

        switch (opcao) {
            case 1:
                criarPessoa();
                break;
            case 2:
                listarPessoas();
                break;
            case 3:
                atualizarPessoa();
                break;
            case 4:
                deletarPessoa();
                break;
            case 5:
                cout << "Saindo do programa..." << endl;
                // Liberação dos recursos antes de sair
                pessoas.clear();
                return 0;
          
            default:
                cout << "Opcao inválida." << endl;
                break;
        }
        cout << endl;
    }
}
