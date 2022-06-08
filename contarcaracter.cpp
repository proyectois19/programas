//https://www.youtube.com/watch?v=OnGr0Nr-js8&ab_channel=TechKrowd
#include <iostream>
//Manejo de cadenas y caracteres
#include <cstring>

#include <windows.h>

using namespace std;

int main(){
    HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );
    SetConsoleTextAttribute(hConsole, 7);
    int opcion;
    char cadena[250];
    char caracter;
    int contador;
    do{
        SetConsoleTextAttribute(hConsole, 6);
        cout<<endl;
        cout<<"------------ MENU OPCIONES ---------"<<endl;
        cout <<"1. Contar veces caracter"<<endl;
        cout <<"2. Palindromo"<<endl;
        cout <<"0. Salir"<<endl;
        cout<<"------------------------------------"<<endl;
        SetConsoleTextAttribute(hConsole, 7);
        cin>>opcion;
        switch (opcion){
            case 1:
                cout<<"Introduce una cadena"<<endl;
                //cin>>cadena;
                //limpiamos el buffer 255 cracteres hasta que se encuentre un salto de linea
                cin.ignore(256,'\n');
                //recojemos la cadena con espacios
                cin.getline(cadena,250,'\n');
                cout<<"Introduce caracter a contar"<<endl;
                cin>>caracter;
                contador = 0;
                for(int i=0; i<strlen(cadena) ; i++){
                    if(cadena[i]==caracter)
                    {
                        contador++;
                    }
                }
                cout <<"El caracter: "<<caracter<<" aparece: "<<contador<<" veces"<<endl;
                break;
            case 2:
                cout<<"Introduce una cadena"<<endl;
                cin.ignore(256,'\n');
                cin.getline(cadena,250,'\n');
                for(int i=0; i<strlen(cadena) ; i++){
                    if(cadena[i]==' '){
                        for(int j=i+1;j<=strlen(cadena);j++){
                            cadena[j-1]=cadena[j];
                        }
                        i--;
                    }
                }

                cout<<cadena<<endl;
                
                int j=strlen(cadena)-1;
                int flag=0;
                for (int i = 0; i < strlen(cadena)/2; i++){
                    if(cadena[i]!=cadena[j]){
                        flag=1;
                        cout<<"No es Palindromo"<<endl;
                        break;
                    }
                    j--;
                }

                if(flag==0){
                    cout<<"Si es Palindromo"<<endl;
                }
                break;
        }
    }while(opcion!=0);
    return 0;
}
