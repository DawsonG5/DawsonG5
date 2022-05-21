#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
int main() {
  int vet[10], i,j, menu, aux, soma = 0;
  bool rept = true;
  do{
  srand(time(NULL));
  cout<<"\nEscolha uma opção:\n 1 - Mostrar os numeros gerados.\n 2 - Mostrar os numeros pares\n 3 - Mostrar a soma dos valores\n 4 - Mostrar o Vetor Ordenado\n 5 - Mostrar os elementos do Vetor invertido\n 0 - Sair\n";
  cin>> menu;
  if(menu == 1){
    for(i=0; i<10; i++){
      vet[i] = rand()%20;
      cout<<"_";
      cout<<vet[i]<<endl;
    }
    }else if(menu == 2){
    for(i=0;i<10;i++){
      vet[i] = rand()%20;
      if(vet[i]%2 == 0){
        cout<<"_";
        cout<<vet[i]<<endl;
      }
    }   
  }else if(menu == 3){
    for(i=0;i<10;i++){
      vet[i] = rand() %20;
      cout<<"_";
      cout<<vet[i]<<endl;
       soma = vet[i] + soma;
    }
    cout<<"A soma é:"<<soma;
	}else if(menu == 4){
    	for(i=0;i<10;i++){
      		vet[i] = rand()%20;   		
    	}
    	for(i=0;i<10;i++){
    		for(j=i+1;j<10;j++){
    			if(vet[i]>vet[j]){
    				aux = vet[i];
    				vet[i] = vet[j];
    				vet[j] = aux;
				}			
			}
		}
		for(i=0;i<10;i++){
      		cout<<vet[i]<<endl;  		
    	}
	}else if(menu == 5){
    	for(i=0;i<10;i++){
      		vet[i] = rand()%20;
      		cout<<"Vetor Normal:"<<vet[i]<<endl;
      		cout<<endl;
    	}
    	for(i=0;i<10;i++){
    		for(j=i-1;j<10;j++){
    			if(i<j){
    				aux = vet[i];
    				vet[i] = vet[j];
    				vet[j] = aux;
				}
			}
		}
		for(i=0;i<10;i++){
			cout<<"Vetor Invertido:"<<vet[i]<<endl;
		}
	}else if(menu == 0){
    	cout<<"The End";
    	rept = false;
	}else{
    	cout<<"error 404";
	}
  	}while(rept == true);
}


