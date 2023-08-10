// Primeiro grande projeto
#include <iostream>
#include <locale>
#include <iomanip>

using namespace std;

int main() {
    // variavel para o player atual e sua posicao de escolha
    char currentPlayer = 'X';
    int row, col;
  	int gameOn;
  	char board[0][2];
  	setlocale(LC_ALL, "Portuguese");
  	
    // main loop do app
    while (true) {
        // Impressao do tabuleiro
        cout << "Tabuleiro atual:" << endl;
        cout << "     0   1   2 "  << endl;
        cout << "  +---+---+---+"  << endl;
        cout << "0 |   |   |   |"  << endl;
        cout << "  +---+---+---+"  << endl;
        cout << "1 |   |   |   |"  << endl;
        cout << "  +---+---+---+"  << endl;
        cout << "2 |   |   |   |"  << endl;
        cout << "  +---+---+---+"  << endl;

        // peca para o jogador atual escolher uma posicao no tabuleiro
        cout << "Jogador " << currentPlayer << ", escolha uma posicao (linha coluna): ";
        cin >> row >> col;

        // verificando a posicao, se ela eh valida ou nao
        if (row < 0 || row > 2 || col < 0 || col > 2)
        {
            cout << "Posicao invalida, escolha outra dentro do tabuleiro." << endl;
            continue;
        }
        if ((row == 0 && col == 0) || (row == 1 && col == 0) || (row == 2 && col == 0))
        {
            cout << "posicao ja ocupada, escolha outra." << endl;
            continue;
        }

        // Att do tabuleiro com a jogada atual
        if (row == 0 && col == 1)
        {
            cout << "Jogada do jogador " << currentPlayer << " aceita!" << endl;
            cout << "     0   1   2"  << endl;
            cout << "  +---+---+---+" << endl;
            cout << "0 | " << currentPlayer << " |   |   |" << endl;
            cout << "  +---+---+---+" << endl;
            cout << "1 |   |   |   |" << endl;
            cout << "  +---+---+---+" << endl;
            cout << "2 |   |   |   |" << endl;
            cout << "  +---+---+---+" << endl;
        }
        else if (row == 0 && col == 2)
        {
            cout << "Jogada do jogador " << currentPlayer << " aceita!" << endl;
            cout << "     0   1   2"  << endl;
            cout << "  +---+---+---+" << endl;
            cout << "0 |   | " << currentPlayer << " |   |" << endl;
            cout << "  +---+---+---+" << endl;
            cout << "1 |   |   |   |" << endl;
            cout << "  +---+---+---+" << endl;
            cout << "2 |   |   |   |" << endl;
            cout << "  +---+---+---+" << endl;
        }
        else if (row == 1 && col == 1)
        {
            cout << "Jogada do jogador " << currentPlayer << " aceita!" << endl;
            cout << "     0   1   2"  << endl;
            cout << "  +---+---+---+" << endl;
            cout << "0 |   |   |   |" << endl;
            cout << "  +---+---+---+" << endl;
            cout << "1 |   | " << currentPlayer << " |   |" << endl;
            cout << "  +---+---+---+" << endl;
            cout << "2 |   |   |   |" << endl;
            cout << "  +---+---+---+" << endl;
        }
        else if (row == 1 && col == 2)
        {
            cout << "Jogada do jogador " << currentPlayer << " aceita!" << endl;
            cout << "     0   1   2"  << endl;
            cout << "  +---+---+---+" << endl;
            cout << "0 |   |   |   |" << endl;
            cout << "  +---+---+---+" << endl;
            cout << "1 |   |   | " << currentPlayer << " |" << endl;
            cout << "  +---+---+---+" << endl;
            cout << "2 |   |   |   |" << endl;
            cout << "  +---+---+---+" << endl;
        }
        else if (row == 2 && col == 1)
        {
            cout << "Jogada do jogador " << currentPlayer << " aceita!" << endl;
            cout << "     0   1   2"  << endl;
            cout << "  +---+---+---+" << endl;
            cout << "0 |   |   |   |" << endl;
            cout << "  +---+---+---+" << endl;
            cout << "1 |   |   |   |" << endl;
            cout << "  +---+---+---+" << endl;
            cout << "2 | " << currentPlayer << " |   |   |" << endl;
            cout << "  +---+---+---+" << endl;
        }
        else if (row == 2 && col == 2)
        {
            cout << "Jogada do jogador " << currentPlayer << " aceita!" << endl;
            cout << "     0   1   2"  << endl;
            cout << "  +---+---+---+" << endl;
            cout << "0 |   |   |   |" << endl;
            cout << "  +---+---+---+" << endl;
            cout << "1 |   |   |   |" << endl;
            cout << "  +---+---+---+" << endl;
            cout << "2 |   | " << currentPlayer << " |   |" << endl;
            cout << "  +---+---+---+" << endl;
        }

        // Verificando se houve vencedor ou empate
        if (
            // linhas
            ((row == 0 && col == 1) && ((currentPlayer == 'X' && ((cout << "Jogador X ganhou!" << endl) || true)) || (cout << "Jogador O ganhou!" << endl))) ||
            ((row == 1 && col == 1) && ((currentPlayer == 'X' && ((cout << "Jogador X ganhou!" << endl) || true)) || (cout << "Jogador O ganhou!" << endl))) ||
            ((row == 2 && col == 1) && ((currentPlayer == 'X' && ((cout << "Jogador X ganhou!" << endl) || true)) || (cout << "Jogador O ganhou!" << endl))) ||
            // colunas
            ((row == 0 && col == 0) && ((currentPlayer == 'X' && ((cout << "Jogador X ganhou!" << endl) || true)) || (cout << "Jogador O ganhou!" << endl))) ||
            ((row == 1 && col == 0) && ((currentPlayer == 'X' && ((cout << "Jogador X ganhou!" << endl) || true)) || (cout << "Jogador O ganhou!" << endl))) ||
            ((row == 2 && col == 0) && ((currentPlayer == 'X' && ((cout << "Jogador X ganhou!" << endl) || true)) || (cout << "Jogador O ganhou!" << endl))) ||
            // diagonais
            ((row == 0 && col == 0) && ((currentPlayer == 'X' && ((cout << "Jogador X ganhou!" << endl) || true)) || (cout << "Jogador O ganhou!" << endl))) ||
            ((row == 2 && col == 2) && ((currentPlayer == 'X' && ((cout << "Jogador X ganhou!" << endl) || true)) || (cout << "Jogador O ganhou!" << endl))) ||
            // empate
            ((board[0][0] != ' ' && board[0][1] != ' ' && board[0][2] != ' ' &&
              board[1][0] != ' ' && board[1][1] != ' ' && board[1][2] != ' ' &&
              board[2][0] != ' ' && board[2][1] != ' ' && board[2][2] != ' ')&& ((cout << "Empate!" << endl) || true)))
        {
            gameOn = false;
        }
        else {
            currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
        }
    }
    return 0;
}
