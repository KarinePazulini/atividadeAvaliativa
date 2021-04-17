#include <iostream>
#include <string>

using namespace std;

string palavra;

int main() {
  cout << "Digite a palavra com no máximo 50 caracteres: \n" ;
  cin >> palavra;

  int tecla; int qtde; int linha; int coluna;

  char letras [4][8] = {{'a','d','g','j','m','p','t','w'}, {'b','e','h','k','n','q','u','x'}, {'c','f','i','l','o','r','v','y'}, {' ',' ',' ',' ',' ','s',' ','z'}};

 for(int p=0;p<size(palavra);p++)
  {
  if(palavra[p]== ' '){
  cout << "Entrada inválida, tente novamente!" << endl;
  break;
  }else{
    for(int linha=0; linha<4;linha++){
      for(int coluna=0;coluna<8;coluna++){
        if(palavra[p] == letras[linha][coluna]){
          tecla=coluna+2; qtde=linha+1;
        cout << "#" << tecla << "="<< qtde << endl;
        }
      }
    }
  }
  


}

return 0;

}