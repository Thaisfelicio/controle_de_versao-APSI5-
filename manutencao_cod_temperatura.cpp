/*
4. Escreva as seguintes funções:
    a. CparaF – faz a conversão de uma temperatura em graus C para graus F.
    b. CparaK – faz a conversão de uma temperatura em C para Kelvin (C=K-273)
    c. KparaC – faz a conversão de K para C.
    d. KparaF – faz a conversão de K para F (dica: utilize as funções anteriores)
    e. FparaK – faz a conversão de F para K.

A seguir, faça um programa que apresente continuamente um menu na tela com
todas as opções de conversão que você implementou. Uma vez feita a opção, o
programa lê do teclado o valor a ser convertido e imprime o resultado.
-----------------------------

MANUTENÇÃO

objetivo: atualizar funções e reduzir linhas de código


Registre quanto tempo você demorou para entender o programa
- alguns minutos para relembrar quais os objetivos iniciais do programa

Escolha uma alteração a ser feita e registre quanto tempo você demorou para planejar como ela será feita
- substituir if por switch, diminuir o número de linhas das funções

Registre quanto tempo você demorou para efetuar a alteração
- 5 minutos para substituição do IF por switch e para remover alguams variáveis das funções e manter somente o return

Registre quanto tempo você demorou para verificar se a alteração foi feita corretamente
- Os teste foram feitos inserindo um valor e verificando se eles eram compatíveis com valores reais.

*/


#include<iostream>
using namespace std;

//função para converter Fahrenheit para celsius
float fparac(float temperaturaFahrenheit){
    return (temperaturaFahrenheit-32) / 1.8;
}

//função para converter Fahrenheit para kelvin
float fparak(float temperaturaFahrenheit){
    return (temperaturaFahrenheit-32) /1.8 + 273;
}
//função para converter celsius para Fahrenheit
float cparaf(float temperaturaCelsius){	
	return 32 + temperaturaCelsius *1.8;
}
//função para converter celsius para kelvin
float cparak(float temperaturaCelsius){
	return temperaturaCelsius +273;
}
//função para converter kelvin para celsius
float kparac(float temperaturaKelvin){
	return temperaturaKelvin - 273;
}

//função para converter kelvin para Fahrenheit
float kparaf(float temperaturaKelvin){
	return 32 + (temperaturaKelvin - 273) / 1.8;
}

int menu(){
	int comando;
	while(comando < 1 || comando > 7){
		cout<<"CONVERSOR DE TEMPERATURA\n";
		cout << "\n 1 - Converter Fahrenheit para Celsius";
        cout << "\n 2 - Converter Fahrenheit para Kelvin";
        cout << "\n 3 - Converter Celsius para Fahrenheit";
        cout << "\n 4 - Converter Celsius para Kelvin";
        cout << "\n 5 - Converter Kelvin para Celsius";
        cout << "\n 6 - Converter Kelvin Fahrenheit";
        cout << "\n 7 - SAIR" << endl;
        
        cout << "\n - DIGITE UM COMANDO: \n\n"<< endl;
        cin >> comando;	
        
        if(comando < 1 || comando > 7){
        	cout<<"Comando invalido, tente novamente."<<endl;
		}
	}
	return comando;
}

int main()
{		
	float temperatura;
	menu();
	int escolha;
	escolha = menu();
	do{
	
        switch(escolha){
            case 1:
            	cout<<"Digite a temperatura em fahrenheit: ";
                cin >> temperatura;
                cout << "\n\nTEMPERATURA EM CELSIUS: " << fparac(temperatura) << endl;
            break;

            case 2:
            	cout<<"Digite a temperatura em fahrenheit: ";
                cin >> temperatura;
                cout << "\n\nTEMPERATURA EM KELVIN: " << fparak(temperatura) << endl;
            break;

            case 3:
            	cout<<"Digite a temperatura em celsius: ";
                cin >> temperatura;
                cout << "\n\nTEMPERATURA EM FAHRENHEIT: " << cparaf(temperatura) << endl;
            break;

            case 4:
            	cout<<"Digite a temperatura em celsius: ";
				cin >> temperatura;
                cout << "\n\nTEMPERATURA EM KELVIN: " << cparak(temperatura) << endl;
            break;

            case 5:
            	cout<<"Digite a temperatura em kelvin: ";
                cin >> temperatura;
                cout << cout << "\n\nTEMPERATURA EM CELSIUS: " << kparac(temperatura) << endl;
            break;

            case 6:
            	cout<<"Digite a temperatura em kelvin: ";
                cin >> temperatura;
                cout << "\n\nTEMPERATURA EM FAHRENHEIT: " << kparaf(temperatura) << endl;
            break;

            default:
                cout << "\n\nSaindo...";
        }
	}while(escolha < 1 || escolha > 7);
}
