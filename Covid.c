#include<stdio.h>
#include<stdlib.h>

typedef char cadena[24];
typedef struct contagiado
{
    char cadena[24];
    cadena rut;
    cadena nombre;
    int edad;
    cadena fechaDiagnostico;
    int region;
    struct contagiado*link;
    struct contagiado*ultimo;
} nodo;
typedef nodo *enlace;
typedef enlace catastro[16];

///Función Inicializar: Inicializa el catastro para comenzar a ser utilizado.
void inicializar(catastro catastro)
{
    for(int i=0;i<16;++i)
        catastro[i]=NULL;
}

///Función Agregar: Agrega un contagiado dados el rut y la región.
void Agregar(catastro catastro)
{
    enlace temp;
    temp = (nodo*)malloc(sizeof(nodo));
    temp->link = NULL;
    printf("Ingrese RUT\n");
    scanf("%24s",temp->rut);
    printf("Ingrese NOMBRE\n");
    scanf("%24s",temp->nombre);
    printf("Ingrese EDAD\n");
    scanf("%d%*c",&temp->edad);
    printf("Ingrese FECHA DEL DIAGNOSTICO(dd/mm/yy)\n");
    scanf("%[^\n]%*c",temp->fechaDiagnostico);
    printf("Ingrese REGION\n");
    scanf("%d%*c",&temp->region);
    if (catastro[temp->region]==NULL){
      catastro[temp->region]=temp;
      temp->link=NULL;
     // ultimo = temp;
     catastro[temp->region]->ultimo=catastro[temp->region];
    }
    else{
    catastro[temp->region]->ultimo->link=temp;
    temp->link=NULL;
    catastro[temp->region]->ultimo=catastro[temp->region];
    }
   ///si un contagiado es de la misma region
}
///Función Eliminar: Elimina un contagiado dados el rut y la región.
void Eliminar(catastro catastro)
{
  while(0==0){
  int region;
  char Rut[24];
  printf("Ingrese la region\n");
  scanf("%d%*c",&region);
  printf("Ingrese rut\n");
  scanf("%24s",Rut);
  enlace temp;
  if(catastro[region]->rut==Rut)
  {
    ///reemplazar el nodo donde se encuentra el contagiado y reemplazarlo por el sgte
      break;
  }
  else {
  printf("NO EXISTE CONTAGIADO EN ESTA REGION\n presione 1 para volver a intentarlo, 2 para regresar al menu principal\n");
  int intento;
  scanf("%d", &intento);
  if (intento==2)
  break;
  }
  }
 
}
///Función Buscar: Busca un contagiado dados el rut y la región.
void Buscar(catastro catastro)
{
  while(0==0){
    int Region;
    char RUT[24];
    printf("Ingrese la region:\n");
    scanf("%d",&Region);
    enlace temp;
    temp=catastro[Region];
    printf("Ingrese RUT:\n");
    scanf("%24s",RUT);

    if(catastro[Region]->rut==RUT)
    {
      printf("%p\n",temp->link);
    }
    else {
  printf("NO EXISTE CONTAGIADO EN ESTA REGION\n presione 1 para volver a intentarlo, 2 para regresar al menu principal\n");
  int intento;
  scanf("%d", &intento);
  if (intento==2)
  break;
  }
  }
}
///Función Obtener: Obtiene el porcentaje nacional de contagiados mayores de 70 años.
void Obtener()
{

}
///Función Desplegar: Despliega nombre y cantidad de días de contagio para aquellos diagnosticados pertenecientes a una región solicitada.
void Desplegar()
{


}

int main()
///Función main(): que contemple un menú Usa el menú para llamar organizadamente a las funciones anteriores.
{
  catastro catastro;
  inicializar(catastro);

  while(0==0){

  printf("\t *COVID 19\t\n");
  printf("Seleccione la opcion que desea\n");
  printf("1 Agregar un contagiado\n");
  printf("2 Eliminar un contagiado\n");
  printf("3 Buscar un contagiado\n");
  printf("4 Obtener porcentaje de los contagiados +70 años \n");
  printf("5 xxxxxxxxxxxxx\n");
  int n;
  scanf("%d",&n);

  if (n==1){
    system("clear");
    printf("AGREGAR CONTAGIADO\n");
    Agregar(catastro);
    }

    else if (n==2){
      system("clear");
      printf("ELIMINAR CONTAGIADO\n");
      Eliminar(catastro);
    }
    else if (n==3){
      system("clear");
      printf("BUSCAR CONTAGIADO\n");
      Buscar(catastro);
    }
  }
}