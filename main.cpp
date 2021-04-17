#include <iostream>
#include <string>

using namespace std;

int main() {

string palavra = "karine";
int x; int y; int c; int l;

char letras [4][8] = {{'a','d','g','j','m','p','t','w'}, {'b','e','h','k','n','q','u','x'}, {'c','f','i','l','o','r','v','y'}, {' ',' ',' ',' ',' ','s',' ','z'}};

for(int p=0; p<size(palavra);p++)
{
  if(palavra[p]==' '){
  cout << "Entrada inválida, tente novamente!" << endl;
  break;
  }else{
    for(int c=0;c<8;c++){
      for(int l=0; l<4;l++){
        if(palavra[p] == letras[l][c]){
          x=c+2; y=l+1;
        cout << "#" << x << "="<< y << endl;
        }
      }
    }
  }
  


}

return 0;

}