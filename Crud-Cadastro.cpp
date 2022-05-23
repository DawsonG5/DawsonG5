#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 200
using namespace std;
char nome[SIZE][50];
long int telefone [SIZE];
int cod[SIZE];
int op;

void cadastro();
void pesquisa();
void lista();
void alterar();
void excluir();

int main(){
	do{
		system("cls");
		cout<<"\n----Menu----\n\n 1 - Cadastrar Cliente\n 2 - Pesquisar Cliente\n 3 - Listar todos os Clientes\n 4 - Alterar Cadastro\n 5 - Excluir Cadastro\n 0 - Sair\n\n";
		cin>>op;
		switch(op){
			case 0:
				system("exit");
				return 0;
				break;
			case 1:
				cadastro();
				break;
			case 2:
				pesquisa();
				break;
			case 3:
				lista();
				break;
			case 4:
				alterar();
				break;
			case 5:
				excluir();
				break;	
			default:
				cout<<" Opção Invalida.\n";
				getchar();
				getchar();
				break;
		}
	}while(op!=6);
	
	cadastro();
	pesquisa();
	lista();
}
void lista(){
	int i;
	for(i = 0; i<SIZE ; i++){
		if(telefone[i]>0){
				cout<<" Codigo:"<<cod[i]<<endl;
				cout<<" Nome:"<<nome[i]<<endl;
				cout<<" Telefone:"<<telefone[i]<<endl;
		}else{
			
			break;
		}
	}
	getchar();
	getchar();
}
void cadastro(){
	static int linha;
	do{
		cout<<" Digite o Codigo:\n\n";
		cin>>cod[linha];
		cout<<"	Digite o nome\n\n";
		cin>>nome[linha];
		cout<<" Ensira o Telefone\n\n";
		cin>>telefone[linha];
		cout<<" Digite 1 para continuar a cadastrar\n\n";
		cin>>op;
		linha++;
	}while(op==1);	
}
void pesquisa(){
	char buscaNome[50];
	int  buscaTel;
	int buscaCod;
	int i;
	do{
		cout<<" Selecione a opção:\n\n 1 - para pesquisar por nome:\n 2 - para pesquisar por telefone:\n 3 - para pesquisar por codigo:\n 0 - Sair\n\n";
		cin>>op;
		switch(op){
			case 0:
				
				break;
			case 1:
				cout<<" Digite o Nome:\n";
				cin>>buscaNome;
				for(i = 0; i<SIZE; i++){
					if(strcmp(nome[i] ,buscaNome) == 0){
						cout<<" Codigo:"<<cod[i]<<endl;
						cout<<" Nome:"<<nome[i]<<endl;
						cout<<" Telefone:"<<telefone[i]<<endl;
					}
				}
				break;
			case 2:
				cout<<" Ensira o telefone:\n";
				cin>>buscaTel;
				for(i = 0; i<SIZE; i++){
					if(telefone[i]==buscaTel){
						cout<<" Codigo:"<<cod[i]<<endl;
						cout<<" Nome:"<<nome[i]<<endl;
						cout<<" Telefone:"<<telefone[i]<<endl;
					}
				}
				break;
			case 3:
				cout<<" Ensira o codigo:\n";
				cin>>buscaCod;
				for(i = 0; i<SIZE; i++){
					if(cod[i]==buscaCod){
						cout<<" Codigo: "<<cod[i]<<endl;
						cout<<" Nome: "<<nome[i]<<endl;
						cout<<" Telefone: "<<telefone[i]<<endl;
					}
				}
				break;
			default:
				cout<<" Opção Invalida\n\n";
				break;
		}
		cout<<"Digite 1 para continuar pesquisando:\n\n";
		cin>>op;
	}while(op==1);
}
void alterar(){
	int i;
	do{
		cout<<"Selecione a opção:\n\n";
		cout<<"1 - Modificar nome:\n";
		cout<<"2 - Modificar telefone:\n";
		cout<<"3 - Modificar todos os dados:\n";
		cout<<"0 - Sair\n\n";
		cin>>op;
		switch(op){
			case 0:
				
				break;
			case 1:
				for(i = 0; i<SIZE; i++){
					if(op == 1){
						cout<<"Digite o Nome:";
						cin>>nome[i];
					}
				break;
			case 2:
				for(i = 0; i<SIZE; i++){
					if(op == 2){
						cout<<"Ensira o telefone:";
						cin>>telefone[i];
					}
				}
				break;
			case 3:
				for(i = 0; i<SIZE; i++){
					if(op == 3){
						cout<<"Digite o nome:";
						cin>>nome[i];
						cout<<"Ensira o telefone:";
						cin>>telefone[i];
					}
				}
				break;
			default:
				cout<<"Opção Invalida\n\n";
				break;
		}
		cout<<"Digite 1 para continuar alterando o cadastro:\n";
		cin>>op;
	}
 }while(op==1);
}
void excluir(){
	int i;
	do{
	cout<<"Selecione uma opção:\n\n";
	cout<<"1 - Excluir Cadastro.\n";
	cout<<"2 - Manter Cadastro\n\n";
	cin>>op;
	
	switch(op){
		int excluir;
		case 1:
			cout<<"Digite o Codigo:";
			cin>>excluir;
			for(i = 0; i<SIZE; i++){
					if(excluir == cod[i]){
						memset(nome[i],0,sizeof(nome[i]));
						
						cout<<"Cadastro excluido por completo";						
					}
				}
			break;
		case 2:
			cout<<" Cadastro Mantido!!\n\n";
			break;
	}
	}while(op ==1);
}
