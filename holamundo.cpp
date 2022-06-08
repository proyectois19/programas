#include <iostream>
#include <string.h>

using namespace std;
int main(){
    /*
    char nombre[10];
    nombre[0]="JUANITA";
    nombre[1]="ALBERTO";
    nombre[2]="CONCEPCION";
    nombre[3]="VICTORIANO";
    nombre[4]="JESUS";
    nombre[5]="ELIZABETH";
    nombre[6]="AGRIPINA";
    nombre[7]="MARIANO";
    nombre[8]="ZENON";
    nombre[9]="VALERIANO";
*/
    char frase1[] = "VALERIANO";
   char frase2[10];
   strcpy(frase2,frase1);
   cout << "Cadena # 1: " << frase1 << endl;
   cout << "Cadena # 2: " << frase2 << endl;

    for (int i=0;i<10;i++){
        //cout << nombre[i]<<;
        cout << i;
    }

    
    return 0;
}