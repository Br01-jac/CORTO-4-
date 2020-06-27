#include "iostream"
#include "cmath"
#include "conio.h"
using namespace std;
float media();
int main(void){
int aja;
cout<<"CALCULO DE MEDIA DE ESTATURA DE 25 ALUMNOS."<<endl<<endl;

media();

getch();
return 0;
}

float media(){
float altura[25],prom,suma=0;
int num=1,aux,abajo=0,arriba=0;
for(int i=0;i<25;i++){

    cout<<"Ingrese estatura de alumno en metros , puesto #"<<num<<" : ";
    cin>>altura[i];
   
    num++;
}
for (int i = 0; i < 25; i++){

    {
        suma = suma + altura[i];
    }
}
prom= suma/25;
cout<<"--------------------------------------------------------------"<<endl<<endl;
    cout<<"EL PROMEDIO DE LA ESTATURA ES DE: "<<prom<<" metros."<<endl<<endl;
cout<<"--------------------------------------------------------------"<<endl;
 for(int i=0;i<25;i++){

if(altura[i]<prom){
   abajo++;
}else{
   arriba++;
}

 }
 cout<<"Numero de estaturas abajo de la media: "<<abajo<<endl;
cout<<"Numero de estaturas arriba de la media: "<<arriba<<endl;
}
     
   

