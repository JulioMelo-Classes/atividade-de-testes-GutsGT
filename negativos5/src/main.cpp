#include <iostream>
using std::cin;
using std::cout;

const int SIZE = 5; // input size.

int main(void){
  // TODO: Adicione aqui seu código.
  int x;
  int qtd = 0;
  for(int i = 0; i < 5; i++){
    cin>>x;
    if(x < 0) qtd++;
  }
  cout<<"A quantidade de números negativos é: "<<qtd<<std::endl;
  
  return 0;
}
