/*
4. Escreva as seguintes fun��es:
    a. CparaF � faz a convers�o de uma temperatura em graus C para graus F.
    b. CparaK � faz a convers�o de uma temperatura em C para Kelvin (C=K-273)
    c. KparaC � faz a convers�o de K para C.
    d. KparaF � faz a convers�o de K para F (dica: utilize as fun��es anteriores)
    e. FparaK � faz a convers�o de F para K.

A seguir, fa�a um programa que apresente continuamente um menu na tela com
todas as op��es de convers�o que voc� implementou. Uma vez feita a op��o, o
programa l� do teclado o valor a ser convertido e imprime o resultado.
-----------------------------

MANUTEN��O

objetivo: atualizar fun��es e reduzir linhas de c�digo


Registre quanto tempo voc� demorou para entender o programa
- alguns minutos para relembrar quais os objetivos iniciais do programa

Escolha uma altera��o a ser feita e registre quanto tempo voc� demorou para planejar como ela ser� feita
- substituir if por switch, diminuir o n�mero de linhas das fun��es

Registre quanto tempo voc� demorou para efetuar a altera��o
- 5 minutos para substitui��o do IF por switch e para remover alguams vari�veis das fun��es e manter somente o return

Registre quanto tempo voc� demorou para verificar se a altera��o foi feita corretamente
- Os teste foram feitos inserindo um valor e verificando se eles eram compat�veis com valores reais.

*/


#include<iostream>
using namespace std;

//fun��o para converter Fahrenheit para celsius
float fparac(float temperaturaFahrenheit){
    return (temperaturaFahrenheit-32) / 1.8;
}

//fun��o para converter Fahrenheit para kelvin
float fparak(float temperaturaFahrenheit){
    return (temperaturaFahrenheit-32) /1.8 + 273;
}
//fun��o para converter celsius para Fahrenheit
float cparaf(float temperaturaCelsius){	
	return 32 + temperaturaCelsius *1.8;
}
//fun��o para converter celsius para kelvin
float cparak(float temperaturaCelsius){
	return temperaturaCelsius +273;
}
//fun��o para converter kelvin para celsius
float kparac(float temperaturaKelvin){
	return temperaturaKelvin - 273;
}

//fun��o para converter kelvin para Fahrenheit
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
