/*DOis arrays
O usuario entra ocom o primeirio array
primeira fase: digita o 1 array e dps 
metodo junta q pega o primeiro arraye dps pega o segundo array
entregar no github

*/

#include <iostream>
#include <string.h>
using namespace std;

class vetor{ //montamos a classe vetor
	int vet1[6];  //declaramos as variaveis de vetor que vão ser usadas no metodojunta
	int vet2[6];
	int vet3[12];
	int i, j, n;
	public:
		metodojunta(int vet3[12]);	//declaração do metodo junta
};

int vetor::metodojunta(int vet3[12]){  //processo do metodo junta
	for(i = 0; i < 6; i++){
		cout << "Digite os valores do array 1:" << endl;
		cin >> vet1[i];}
			for(j = 0; j < 6; j++){
		cout << "Digite os valores do array 2:" << endl;
		cin >> vet2[j];	}		

	memcpy( vet3, vet1, sizeof(vet1) );
	memcpy( vet3 + 6, vet2, sizeof(vet2) );
	
	for(n = 0; n <12; n++){
		cout << "terceiro array: "<< vet3[n] << endl;
	}
}

int main()
{
	int vet3[12];
	
	vetor vetor3;
	vetor3.metodojunta(vet3);
	
	
return 0;
}




