// Header - Base
#include <iostream> // base
#include <vector>   // vetores
#include <string>   // strings
#include <iomanip>  // manipulacao de saidas
#include <fstream>  // para manipulacao de arquivos

using namespace std; // aux para std::cout
// -------------------------------------------------------------------
struct Pessoa {
    int codigo, idade;
    string nome, rua, bairro, cidade, estado, email, celular, cep, cpf, rg;
};
// -------------------------------------------------------------------
vector<Pessoa> pessoas;
// -------------------------------------------------------------------

// Funcao para salvar dados em aquivo binario
void salvarDados() {
    ofstream arquivo("agenda.bin", ios::out | ios::binary);

    if (arquivo.is_open()) {
        for (const auto &pessoa:pessoas) {
            arquivo.write(reinterpret_cast<const char*>(&pessoa), sizeof(Pessoa));
        }

        arquivo.close();
        cout << "Dados salvos no arquivo 'agenda.bin'." << endl;
    } else {
        cout << "Erro ao abrir o arquivo para salvar os dados." << endl;
    }
}

// Funcao para carregar os dados do arquivo binario
void carregarDados() {
    ifstream arquivo("agenda.bin", ios::in | ios::binary);

    if (arquivo.is_open()) {
        Pessoa pessoa;
        while (arquivo.read(reinterpret_cast<char*>(&pessoa), sizeof(Pessoa))) {
            pessoas.push_back(pessoa);
        }
        arquivo.close();
        cout << "Dados carregados do arquivo 'agenda.bin'." << endl;
    } else {
        cout << "Arquivo 'agenda.bin' nÃ£o encontrado. ComeÃ§ando com lista vazia." << endl;
    }
}

void criarPessoa() {
    Pessoa pessoa;
    cout << "Para iniciar a criacao do seu perfil. " << endl;
    cout << "Digite o codigo: ";
    cin >> pessoa.codigo;

    cout << "Digite o nome: ";
    cin.ignore(); // Limpa o buffer do cin antes de ler a linha completa
    getline(cin, pessoa.nome);
// -------------------------------------------------------------------
    /*cout << "Digite a idade: ";
    cin.ignore();
    cin >> pessoa.idade; */
// -------------------------------------------------------------------
    cout << "Digite o CPF: ";
    cin.ignore(); // Limpa o buffer de entrada
    cin >> pessoa.cpf;
// -------------------------------------------------------------------
    cout << "Digite o RG: ";
    cin.ignore();
    cin >> pessoa.rg;
// -------------------------------------------------------------------
    cout << "Digite o CEP: ";
    cin.ignore();
    cin >> pessoa.cep;
// -------------------------------------------------------------------
    cout << "Digite o celular: ";
    cin.ignore();
    getline(cin, pessoa.celular);
// -------------------------------------------------------------------
    cout << "Digite a rua: ";
    cin.ignore();
    getline(cin, pessoa.rua);
// -------------------------------------------------------------------
    cout << "Digite o bairro: ";
    cin.ignore();
    getline(cin, pessoa.bairro);
// -------------------------------------------------------------------
    cout << "Digite a cidade: ";
    cin.ignore();
    getline(cin, pessoa.cidade);
// -------------------------------------------------------------------
    cout << "Digite o estado: ";
    cin.ignore();
    getline(cin, pessoa.estado);
// -------------------------------------------------------------------
    cout << "Digite o email: ";
    cin.ignore();
    getline(cin, pessoa.email);
// -------------------------------------------------------------------
    pessoas.push_back(pessoa);
    cout << "Perfil criado com sucesso!" << endl;
    salvarDados(); // Salvar os dados depois de criar a pessoa
}
// -------------------------------------------------------------------
void listarPessoas() {
    if (pessoas.empty()) {
        cout << "Nenhum perfil cadastrado." << endl;
    } else {
        cout << "Lista de perfis:" << endl;
        for (const auto & pessoa : pessoas) {
        
    // Tabela
        cout << setfill('_') << setw(40) << "_" << endl; // Linha
        cout << "\n Ficha de cadastro\n";
        cout << setfill('-') << setw(40) << "-" << endl;
    // -----------------------------------------------------------------------------------------
        cout << left << setw(16) << "| CÃ³digo "     << "| " << pessoa.codigo    << " |" << endl;
        cout << left << setw(15) << "| Nome "       << "| " << pessoa.nome      << " |" << endl;
      //cout << left << setw(15) << "| Idade "      << "| " << pessoa.idade     << " |" << endl;
        cout << left << setw(15) << "| Rua "        << "| " << pessoa.rua       << " |" << endl;
        cout << left << setw(15) << "| Bairro "     << "| " << pessoa.bairro    << " |" << endl;
        cout << left << setw(15) << "| Cidade "     << "| " << pessoa.cidade    << " |" << endl;
        cout << left << setw(15) << "| Estado "     << "| " << pessoa.estado    << " |" << endl;
        cout << left << setw(15) << "| CEP "        << "| " << pessoa.cep       << " |" << endl;
        cout << left << setw(15) << "| Celular "    << "| " << pessoa.celular   << " |" << endl;
        cout << left << setw(15) << "| Email "      << "| " << pessoa.email     << " |" << endl;
        cout << left << setw(15) << "| CPF "        << "| " << pessoa.cpf       << " |" << endl;
        cout << left << setw(15) << "| RG "         << "| " << pessoa.rg        << " |" << endl;
        }
    }
}
    // -------------------------------------------------------------------

void atualizarPessoa() {
    if (pessoas.empty()) {
        cout << "Nenhum perfil cadastrado." << endl;
    } else {
        string nomeAux;
        cout << "Digite o nome da pessoa que deseja atualizar o perfil: ";
        getline(cin, nomeAux);
        cin.ignore(); // limpa o buffer do enter
        bool encontrou = false;
        for (auto& pessoa : pessoas) {
            if (pessoa.nome == nomeAux) {
                cout << "Digite o novo cÃ³digo: ";
                cin >> pessoa.codigo;
            // -------------------------------------------------------------------
                cout << "Digite o novo nome: ";
                cin.ignore(); // limpa o buffer do enter
                getline(cin, pessoa.nome);
            // -------------------------------------------------------------------
                cout << "Digite a nova rua: ";
                cin.ignore(); 
                getline(cin, pessoa.rua);
            // -------------------------------------------------------------------
                cout << "Digite o novo bairro: ";
                cin.ignore();
                getline(cin, pessoa.bairro);
            // -------------------------------------------------------------------
                cout << "Digite a nova cidade: ";
                cin.ignore();
                getline(cin, pessoa.cidade);
            // -------------------------------------------------------------------
                cout << "Digite o novo estado: ";
                cin.ignore();
                getline(cin, pessoa.estado);
            // -------------------------------------------------------------------
                cout << "Digite o novo CEP: ";
                cin.ignore();
                getline(cin, pessoa.cep);
            // -------------------------------------------------------------------
                cout << "Digite o novo celular: ";
                cin.ignore();
                getline(cin, pessoa.celular);
            // -------------------------------------------------------------------
                cout << "Digite o novo e-mail: ";
                cin.ignore();
                getline(cin, pessoa.email);
            // -------------------------------------------------------------------
                cout << "Digite o novo CPF: ";
                cin.ignore();
                getline(cin, pessoa.cpf);
            // -------------------------------------------------------------------
                cout << "Digite o novo RG: ";
                cin.ignore();
                getline(cin, pessoa.rg);
            // -------------------------------------------------------------------
                encontrou = true;
                cout << "Perfil atualizado com sucesso!" << endl;
                break;
            }
        }
        if (!encontrou) {
            cout << "Perfil nao encontrado." << endl;
        }
    }
}
// -------------------------------------------------------------------
void deletarPessoa() {
    if (pessoas.empty()) {
        cout << "Nenhum perfil cadastrado." << endl;
    } else {
        string nome;
        cout << "Digite o nome da pessoa que deseja deletar o perfil: ";
        cin.ignore();
        getline(cin, nome);
    // -------------------------------------------------------------------
        bool encontrou = false;
        for (auto it = pessoas.begin(); it != pessoas.end(); ++it) {
            if (it->nome == nome) {
                pessoas.erase(it);
                encontrou = true;
                cout << "Perfil deletado com sucesso!" << endl;
                break;
            }
        }
        if (!encontrou) {
            cout << "Perfil nÃ£o encontrado." << endl;
        }
    }
}
// -------------------------------------------------------------------

int main() {
    setlocale(LC_ALL, "Portuguese");
    int opcao;

    carregarDados(); // Carrega os dados do arquivo 'agenda.bin' quando inicia o programa

    while (true) {
        cout << "=== Menu ===" << endl;
        cout << "1. Criar perfil" << endl;
        cout << "2. Listar perfis" << endl;
        cout << "3. Atualizar perfil" << endl;
        cout << "4. Deletar perfil" << endl;
        cout << "5. Sair" << endl;
        cout << "Digite a opÃ§Ã£o desejada: ";
        cin >> opcao;
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Limpa todo o buffer atÃ© a quebra de linha

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
                pessoas.clear();
                return 0;
            default:
                cout << "OpÃ§Ã£o invÃ¡lida." << endl;
                break;
        }
        cout << endl;
    }
}
