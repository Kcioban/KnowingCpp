#include <iostream>
#include <vector>

using namespace std;

// Função para imprimir o tabuleiro
void printBoard(const vector<vector<char>>& board) {
    cout << "   0   1   2" << endl;
    cout << " +---+---+---+" << endl;
    for (int i = 0; i < 3; ++i) {
        cout << i << "| ";
        for (int j = 0; j < 3; ++j) {
            cout << board[i][j] << " | ";
        }
        cout << endl << " +---+---+---+" << endl;
    }
}


// Função para verificar se um jogador venceu
bool checkWin(const vector<vector<char>>& board, char player) {
    for (int i = 0; i < 3; ++i) {
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player) {
            return true;  // Linhas
        }
        if (board[0][i] == player && board[1][i] == player && board[2][i] == player) {
            return true;  // Colunas
        }
    }
    if (board[0][0] == player && board[1][1] == player && board[2][2] == player) {
        return true;  // Diagonal principal
    }
    if (board[0][2] == player && board[1][1] == player && board[2][0] == player) {
        return true;  // Diagonal secundária
    }
    return false;
}

int main() {
    vector<vector<char>> board(3, vector<char>(3, ' '));  // Inicializa o tabuleiro vazio
    char currentPlayer = 'X';
    int row, col;
    
    cout << "Bem-vindo ao Tic-Tac-Toe!" << endl;

    for (int turn = 0; turn < 9; ++turn) {
        cout << "Jogador " << currentPlayer << ", escolha a linha (0-2) e depois a coluna (0-2): ";
        cin >> row >> col;

        if (row < 0 || row > 2 || col < 0 || col > 2 || board[row][col] != ' ') {
            cout << "Jogada inválida, tente novamente." << endl;
            --turn;  // Repetir a vez do jogador atual
            continue;
        }

        board[row][col] = currentPlayer;
        printBoard(board);

        if (checkWin(board, currentPlayer)) {
            cout << "Jogador " << currentPlayer << " venceu!" << endl;
            break;
        }

        currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
    }

    cout << "Fim do jogo!" << endl;

    return 0;
}
