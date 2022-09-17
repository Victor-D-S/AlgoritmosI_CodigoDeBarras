#include <iostream>
using namespace std;


//Função para solicitar ao usuário o código de barras
long long int solicitarCodigo() {
	long long int codigoBarras;
	
	cout << "Insira o codigo de barras de 13 digitos: " << endl;
	cin >> codigoBarras;
	cout << endl;

	return codigoBarras;
}


//Função que separa cada digito do código em uma posição de um vetor
int *separarDigito(long long int codigoDeBarras) {
	int* digitos = new int[13]; //Alocação dinâmica para retornar esse vetor no final da função

	codigoDeBarras = codigoDeBarras / 10; //O tamanho do código de barras é reduzido para 12 dígitos

	for (int i = 0; i < 12; i++) {
		digitos[i] = codigoDeBarras % 10;
		codigoDeBarras = codigoDeBarras / 10;

		if (i % 2 == 0) { //Devido ao tamanho do código estar diferente, a lógica da multiplicação é feita de maneira inversa
			digitos[i] = digitos[i] * 3;
		}
	}

	return digitos;
}

//Função para fazer o somatório dos números do vetor
int calcularSomatorio(int vetor[]) {
	int somatorio = 0;

	for (int i = 0; i < 12; i++) {
		somatorio += vetor[i];
	}

	int digitoVerificador = ((somatorio / 10 + 1) * 10) - somatorio;

	return digitoVerificador;
}

int main()
{
	long long int codigoDeBarras = solicitarCodigo();
	int ultimoDigito = codigoDeBarras % 10; //Necessário pegar o último digito para verificar a veracidade do código de barras no final

	int *vetorDeDigitos = separarDigito(codigoDeBarras);

	int digitoVerificador = calcularSomatorio(vetorDeDigitos);
	
	if (digitoVerificador == ultimoDigito) {
		cout << "O codigo de barras: |" << codigoDeBarras << "| com digito verificador: |" << digitoVerificador << "| esta correto." << endl;
	}
	else {
		cout << "O codigo de barras esta incorreto, insira novamente" << endl;
	}

}

