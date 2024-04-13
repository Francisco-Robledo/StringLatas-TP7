#include <iostream>
using namespace std;

int TotalLatas(string Latas);
int SecuenciaMasLarga(string Secuencia);
int SegundaSecuenciaMasLarga(string Secuencia2);
int Distancia(string DSecuencias);

int main () {
	
	string Productos;
	
	cout << "Ingrese la secuencia de latas: "<<endl;
	getline(cin, Productos);
	
	cout << "El total de las latas es: " << TotalLatas(Productos) << endl;
	cout << "La secuencia mas larga de latas bien etiquetadas es: " << SecuenciaMasLarga(Productos)<<endl;
	cout << "La segunda secuencia mas larga es: " << SegundaSecuenciaMasLarga(Productos) << endl;
	cout << "La distancia entre las secuencias es: " << Distancia(Productos) << endl;

	return 0;
}

int TotalLatas(string Latas) {
	
	int LatasTotales = 0;
	
	for (int i = 0; i <=Latas.size(); i++) {
		
		if (Latas[i]=='G'||Latas[i]=='A'||Latas[i]=='C'||Latas[i]=='T') {
		LatasTotales += 1;		
		}
	}
	return LatasTotales;
}

int SecuenciaMasLarga(string Secuencia) {
	
    int MasLarga = 0;
    int aux= 0;

    for (int i = 0; i < Secuencia.size(); i++) {
        if (Secuencia[i] == 'G')
		 {
            aux++;
            if (aux > MasLarga) 
			{
                MasLarga = aux;
            }
        } 
		else
		{	
            aux = 0;
        }
    }
    return MasLarga;
}

int SegundaSecuenciaMasLarga(string Secuencia2) {
    int SegundaSecuencia = 0;
    int aux = 0;
    int MasLarga = 0;
 
    for (int i = 0; i < Secuencia2.size(); i++) {
		if (Secuencia2[i] == 'G') 
		 {
            aux++;
            if (aux > MasLarga) 
			{
                MasLarga = aux;
            }
			if (aux > SegundaSecuencia && aux < MasLarga) 
			 {
                SegundaSecuencia = aux;
            }
        } 
		else	 {
            aux = 0;
        }
    }
    return SegundaSecuencia;
} 

	int Distancia(string DSecuencias) {
    int distancia = 0, aux = 0;
    int PrimeraSecuencia = SecuenciaMasLarga (DSecuencias) ; 
	int SegundaSecuencia = SegundaSecuenciaMasLarga (DSecuencias);

    for (int i = 0; i < DSecuencias.size(); i++) {
        if (DSecuencias[i] != 'G') {
            aux++;
            if (aux == PrimeraSecuencia || aux == SegundaSecuencia) {
                distancia = aux;
            }
        }
    }
    return distancia;
}
