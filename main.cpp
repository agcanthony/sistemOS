 //sistema de ordem de serviços.//
 #include <iostream>
 #include <stdio.h>
 #include <string.h>
 #include <conio.h>
 #include <stdlib.h>
 #include <fstream>
 #include <locale.h>
 
 using namespace std;


int main() {
	string rg,cpf;
	char entrada;
	char client;
	char enderec;
	char equip;
	char produt;
	char defeit,soluc;
	char servic,cor, marca, modelo;
	int codigo;
	int serie;
	int qtd,numero;
	int opcao,opcaocst;
	int codc[0];
	int codc1;
	int n=-1;
	int i=0;
	double val=0;
	
	
	
	
	
	char*ArryNome = new char [client];
	char*ArryEndereco = new char[enderec];
	char*ArryEquipamento = new char [equip];
	char*ArryProduto = new char [produt];
	char*ArryDefeito = new char [defeit];
	char*ArrySolucao = new char [soluc];
	char*ArryServico = new char [servic];
	char*ArryCor = new char [cor];
	char*ArryMarca = new char [marca];
	char*ArryModelo = new char [modelo];
	int*ArryCodigoC = new int[codc1];
	
	setlocale(LC_ALL,"Portuguese");
    
	do{ 
	system("cls");
    //cabeçalho//
    system("color 1f");
    cout<<"________________________________________________________________________________________________________________________"<<endl;
    cout<<"\n                                           SISTEMA INTEGRADO DE ORDEM DE SERVIÇOS                                        "<<endl;
    cout<<"________________________________________________________________________________________________________________________"<<endl;
    //menu//
    cout<<"1-Cadastro    ";
    cout<<"2-Ordem de Serviço     ";
    cout<<"3-Consulta     ";
    cout<<"4-Fechar"<<endl;
    cout<<"\nAguardando opção"<<endl;
    cin>>opcao;
    
    
    switch(opcao)
    {
    	//Cadastro cliente , produto//
    	case 1:
    	{	
    		system("color 4f");
    		cout<<"              C A D A S T R O"<<endl;
    		//cadastro cliente//
    			
    				ofstream fout("Cadastro cliente.txt");
    				fout<<"________________________________________________________________________________________________________________________"<<endl;
    				fout<<"\n                                           SISTEMA INTEGRADO DE ORDEM DE SERVIÇOS                                        "<<endl;
   					fout<<"________________________________________________________________________________________________________________________"<<endl;
    				do
					{
						
    					system("cls");
    					
    				cout<<"Cadastro de cliente"<<endl;
    				
					cout<<"Codigo: ";
					cin>>codc1;
    				codc[i]=codc1+i;
    				cout<<"\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b"
					"\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b"
					"\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b"
					"\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b"
					"\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b"
					" | \tCPF: ";
					cin>>cpf;
					fflush(stdin); // Limpa o buffer do teclado//
					//  backspace pra poder inserir tudo numa linha sonha;
					cout<<" \b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b"
					"\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b"
					"\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b"
					"\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b| RG: ";
					cin>>rg;
    				fflush(stdin); // Limpa o buffer do teclado//
    				cout<<"Nome: ";
    				gets(ArryNome);
    				cout<<"Endereço: ";
    				gets(ArryEndereco);
    				cout<<"\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b"
					"\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b"
					"\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b"
					"\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b| Nº: ";
					cin>>numero;
					
   					fout<<"Cadastro de cliente"<<endl;
   					fout<<"Codigo: "<<codc[i];
   					fout<<"  |  CPF: "<<cpf<<"  | RG: "<<rg;
   					fout<<"\nNome: "<<ArryNome;
   					fout<<"\nEndereço: "<<ArryEndereco<<" |  Nº: "<<numero<<endl; 
   					fout<<"------------------------------------------------------------------------------------------------------------------------";
   					
   					
   					
   					
					cout<<"Deseja Inserir novo cliente S-Sim ou N-Nao."<<endl;
					cin>>entrada;
					}while(entrada!='n');
						// Retorna ao menu//
    				cout<<"\n\n Retornar ao menu anterior S-Sim ou N-Nao"<<endl;
    				cin>>entrada;
				}
    		break;
    	//Ordem de serviço//	
    	case 2:
    		{
			ofstream fout("os.txt");
			fout<<"________________________________________________________________________________________________________________________"<<endl;
    		fout<<"\n                                           SISTEMA INTEGRADO DE ORDEM DE SERVIÇOS                                        "<<endl;
   			fout<<"________________________________________________________________________________________________________________________"<<endl;
    		do
    		{
			system("color 2f");
			system("cls");
		 	cout<<" Cadastro de Ordem de Serviço___________________________________________________________________________________________"<<endl;
		 	cout<<"|Nº SERIE: ";
		 	cin>>serie;
		 	cout<<"\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b"
		 			"\b\b\b\b\b\b\b\b\b\b\b\b\b\b"
					"\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b"
					"\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b"
					"\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b| COR: ";
		 	cin>>ArryCor;
		 	cout<<"\b\b\b\b"
		 			"\b\b\b\b\b\b\b\b\b\b\b\b\b\b"
					"\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b"
					"\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b"
					"\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b| MARCA: ";
		 	cin>>ArryMarca;
		 	cout<<"\b\b\b\b"
		 			"\b\b\b\b\b\b"
					"\b\b\b\b\b\b\b\b\b\b"
					"\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b"
					"\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b| MODELO: ";
		 	cin>>ArryModelo;
		 	cout<<"________________________________________________________________________________________________________________________"<<endl;
		 	cout<<"\nCliente_________________________________________________________________________________________________________________"<<endl;
		 	fflush(stdin); // Limpa o buffer do teclado//
			 cout<<"Nome: ";
		 	gets(ArryNome);
		 	cout<<"________________________________________________________________________________________________________________________"<<endl;
		 	cout<<"\nAtendimento_____________________________________________________________________________________________________________"<<endl;
		 	fflush(stdin); // Limpa o buffer do teclado//
			 cout<<"Tecnico: ";
		 	gets(ArryServico);
		 	cout<<"\nDEFEITO RECLAMADO"<<endl;
		 	gets(ArryDefeito);
		 	fflush(stdin); // Limpa o buffer do teclado//
		 	cout<<"\nDIAGNOSTICO"<<endl;
		 	gets(ArrySolucao);
		 	cout<<"\n------------------------------------------------------------------------------------------------------------------"<<endl;
		 	
		 	fout<<"\nCadastro de Ordem de Serviço___________________________________________________________________________________________"<<endl;
		 	fout<<"|Nº SERIE: "<<serie;
		 	fout<<"  | COR: "<<ArryCor;
		 	fout<<"  | MARCA: "<<ArryMarca;
		 	fout<<"  | MODELO: "<<ArryModelo;
		 	fout<<"\n________________________________________________________________________________________________________________________"<<endl;
		 	fout<<"\nCliente_________________________________________________________________________________________________________________"<<endl;
   					fout<<"Codigo: "<<codc1;
   					fout<<"  |  CPF: "<<cpf<<"  | RG: "<<rg;
   					fout<<"\nNome: "<<ArryNome;
   					fout<<"\nEndereço: "<<ArryEndereco<<" |  Nº: "<<numero<<endl; 
   					fout<<"\n________________________________________________________________________________________________________________________"<<endl;
		 	fout<<"\nAtendimento_____________________________________________________________________________________________________________"<<endl;
		 	fout<<"Tecnico: ";
		 	fout<<ArryServico;
		 	fout<<"\nDEFEITO RECLAMADO"<<endl;
		 	fout<<ArryDefeito;
		 	fout<<"\nDIAGNOSTICO"<<endl;
		 	fout<<ArrySolucao;
		 	fout<<"\n------------------------------------------------------------------------------------------------------------------"<<endl;
		 	
			 cout<<"\nDeseja abrir outra O.S S-Sim ou N-Não"<<endl;
		 	cin>>entrada;
		}while(entrada!='n');
		 	cout<<"\nRetornar ao menu anterior S-Sim ou N-Não"<<endl;
    		cin>>entrada;
		}
    	    break;
    	//Consulta//
		case 3:
			{
				
				system("cls");
		 		 system("color 8f");
		 		cout<<"C O N S U L T A"<<endl;
		 		cout<<"1-Consultar cliente ";
		 		cout<<"\t|\t2-Consultar O.S"<<endl;
		 		cin>>opcaocst;
		 
		 		switch(opcaocst)
		 		{
		 			case 1:
		 				{
		 				const int max=400;
	     				char buff[max];
	
						ifstream fin("Cadastro cliente.txt");
	
						while (fin)
						{
							fin.getline(buff,max);
							cout<<buff<<endl;
						}
					}
						break;
					case 2:
					{
						const int max=400;
	     				char buff[max];
	
						ifstream fin("os.txt");
	
						while (fin)
						{
							fin.getline(buff,max);
							cout<<buff<<endl;
						}
					}
					break;
		 
		 	
    			}
    			cout<<"Retornar ao menu anterior S-Sim ou N-Nao"<<endl;
    			cin>>entrada;
			 }		 
		    break; 
			   
    	//fechar//
    	case 4:
    	 system("color 5f");
    		cout<<"Deseja Continuar no Sistema S-Sim ou N-Não."<<endl;
    		cin>>entrada;
    		break;
	}
	}while(entrada!='n');
    
    
	
	return 0;
}
