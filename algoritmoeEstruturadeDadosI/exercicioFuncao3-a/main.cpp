#include <iostream>
using namespace std;

/* 1)	Elaborar programa para somar dois n?meros informados pelo usu?rio. 
Os comandos para leitura dos n?meros e sa?da em tela do resultado devem estar dentro do m?dulo main.
A soma dos valores informados no m?dulo main dever? ser realizada dentro do m?dulo Soma. Fa?a as seguintes vers?es:

a.	Os valores digitados s?o comunicados para o m?dulo por meio de vari?veis globais.
O resultado da soma ? comunicado para o principal por meio de vari?veis globais.
*/
float a;
float b;
float c;

void Soma(){
	c = a + b;

}



int main(int argc, char** argv) {
	cout << "Informe a: ";
	cin >> a;

	cout << "Informe b: ";
	cin >> b;
	
	Soma( );
	cout << c;
	return 0;
}
