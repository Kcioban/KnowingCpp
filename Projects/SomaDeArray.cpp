#include <iostream>

using namespace std;

int main(){
int x = 6, y = 6, soma = 0;
int matrix[x][y];
	
cout << "realize uma soma em cadeia\n";
   	for (x = 0; x < 6; x++){
     		for (y = 0; y < 6; y++){
     			cout << "coloque o numero para adicionar:";
     			cin >> matrix[x][y];
     			cout << "matrix[" << x << "][" << y << "] = " << matrix[x][y] << "\n";
     			if (x == y) soma += matrix[x][y];
     		  }
   	}
    
    cout << "soma = " << soma << endl;
  
  return 0;
}
