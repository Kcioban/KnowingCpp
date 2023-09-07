  #include <iostream>
  #include <string>
  using namespace std;
  
  struct Pessoa {
      string codigo, nome, rua, bairro, cidade, estado, cep, celular, email, cpf, rg
  };
  
  int main() {
      Pessoa pessoa;
  
      // Leitura dos dados
      cout << "Digite o código: ";
      cin >> pessoa.codigo;
  
      cout << "Digite o nome: ";
      cin.ignore(); // Limpa o buffer do cin antes de ler a linha completa
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
  
      // Impressão dos dados
      cout << "\nDados da Pessoa:\n";
      cout << "Código: " << pessoa.codigo << endl;
      cout << "Nome: " << pessoa.nome << endl;
      cout << "Rua: " << pessoa.rua << endl;
      cout << "Bairro: " << pessoa.bairro << endl;
      cout << "Cidade: " << pessoa.cidade << endl;
      cout << "Estado: " << pessoa.estado << endl;
      cout << "CEP: " << pessoa.cep << endl;
      cout << "Celular: " << pessoa.celular << endl;
      cout << "E-mail: " << pessoa.email << endl;
      cout << "CPF: " << pessoa.cpf << endl;
      cout << "RG: " << pessoa.rg << endl;
  
      return 0;
  }
