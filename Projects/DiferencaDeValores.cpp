#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int num1, num2, num3, aux;

    cout << "insira o valor a receber: " << endl;
    cin >> num1;
    cout << "o valor recebido: " << endl;
    cin >> num2;
    num3 = num1 - num2;     //calcular num3
    cout << "o resultado é: " << num3 << endl; //plot num3

    if (num3 >= 20 && num3 <= 100) {
        aux = num3 - (num3 % 10); // para obter dezena mais próxima

        switch (aux) {
            case 20:  cout << "vinte";           break;
            case 30:  cout << "trinta";          break;
            case 40:  cout << "quarenta";        break;
            case 50:  cout << "cinquenta";       break;
            case 60:  cout << "sessenta";        break;
            case 70:  cout << "setenta";         break;
            case 80:  cout << "oitenta";         break;
            case 90:  cout << "noventa";         break;
            case 100: cout << "cem";             break;
            default:  cout << "Fora do padrão";  break;
        }

        if (num3 % 10 > 0) {
            cout << " e ";
            aux = num3 % 10;
            switch (aux) {
                case 1:  cout << "um";               break;
                case 2:  cout << "dois";             break;
                case 3:  cout << "três";             break;
                case 4:  cout << "quatro";           break;
                case 5:  cout << "cinco";            break;
                case 6:  cout << "seis";             break;
                case 7:  cout << "sete";             break;
                case 8:  cout << "oito";             break;
                case 9:  cout << "nove";             break;
                default: cout << "Fora do padrão";   break;
            }
        }
    } else if (num3 <= 19) {
        switch (num3) {
            case 0:  cout << "zero";            break;
            case 1:  cout << "um";              break;
            case 2:  cout << "dois";            break;
            case 3:  cout << "três";            break;
            case 4:  cout << "quatro";          break;
            case 5:  cout << "cinco";           break;
            case 6:  cout << "seis";            break;
            case 7:  cout << "sete";            break;
            case 8:  cout << "oito";            break;
            case 9:  cout << "nove";            break;  
            case 10: cout << "dez";             break;
            case 11: cout << "onze";            break;
            case 12: cout << "doze";            break;
            case 13: cout << "treze";           break;
            case 14: cout << "quatorze";        break;
            case 15: cout << "quinze";          break;
            case 16: cout << "dezesseis";       break;
            case 17: cout << "dezessete";       break;
            case 18: cout << "dezoito";         break;
            case 19: cout << "dezenove";        break;
            default: cout << "Fora do padrão";  break;
        }
    } else {
        cout << "Número fora do intervalo permitido.";
    }

    return 0;
}
