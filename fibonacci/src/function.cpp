#include <iostream>
#include "function.h"

using namespace std;

std::vector<unsigned int> fib_below_n( unsigned int n ){
    // TODO: adicione o seu código aqui.

	vector<unsigned int> values;

	while(values.size() == 0 || values.at(values.size()-1) < n){
		if(values.size() < 2){
			if(n >= 2){
				values.insert(values.end(), 1);
				cout<<"        ";	
			}else{
				break;
			}
		}else{			
			if((values.at(values.size()-2) + values.at(values.size()-1)) < n){
				cout<<values.at(values.size()-1)<<" < "<<n<<" - ";
				values.insert(values.end(), (values.at(values.size()-2) + values.at(values.size()-1)));		
			}else{
				break;
			}
		}	
		cout<<values.at(values.size()-1)<<endl;
	}
	cout<<endl<<endl<<endl;
	
    // TODO: Isto é apenas um STUB. Troque o retorno pelo que você julgar correto.
    return std::vector<unsigned int>{values};
}
