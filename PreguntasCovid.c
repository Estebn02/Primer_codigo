#include <stdio.h>

int main(void) {
  
  int resultado=0;
  
  int p1=60,p2=60,p3=15,p4=29,p5=0,p6=0,p7=0,p8=-15;
 
 printf("   Porfavor responda este test de 8 preguntas acerca del covid-19 para saber si debe o no asistir a un centro medico\n\n");

 printf("conteste con S si es un si y con N si es un no\n\n");
 
 printf("pregunta.1  ¿Tienes sensación de falta de aire de inicio brusco  (en   ausencia de cualquier otra patologia que justifique este sintoma)?\n");
 
 char pregunta_1;
 
 scanf("%c%*c",&pregunta_1);
 
 if (pregunta_1=='S'||pregunta_1=='s'){
 printf("usted tiene 60 puntos\n");
 resultado=resultado + p1;
 }
 else if (pregunta_1=='N'||pregunta_1=='n')
 {
   printf("usted tiene 0 puntos\n");
   resultado=resultado+0;
 }
 printf("preg.2:  ¿Tiene mas 37.7 de fiebre?\n ");
 
 printf ("S/N\n");
 
 char pregunta_2;
 scanf("%c%*c",&pregunta_2);
 
 if (pregunta_2=='S'||pregunta_2=='s')
 {printf("usted tiene 15 puntos\n");
 resultado=resultado + p2;
  resultado=resultado+p2;}
 
 else if (pregunta_2=='N'||pregunta_2=='n')
 {printf("usted tiene 0 puntos\n");
   resultado=resultado+0;}
 
 printf("preg.3: ¿Tiene tos seca y persistente?\n ");
 
 printf ("S/N\n");
 
 char pregunta_3;
 scanf("%c%*c",&pregunta_3);
 
 if (pregunta_3=='S'||pregunta_3=='s')
 {printf("usted tiene 15 puntos\n");
 resultado=resultado + p3;
  resultado=resultado+ p3;}
 
 else if (pregunta_3=='N'||pregunta_3=='n')
 {printf("usted tiene 0 puntos\n");
  resultado=resultado+0;}
 
 printf("preg.4: ¿Has tenido contacto con algún paciente positivo confirmado de covid-19?\n ");
 
 printf ("S/N\n");
 
 char pregunta_4;
 scanf("%c%*c",&pregunta_4);
 
 if (pregunta_4=='S'||pregunta_4=='s')
 {printf("usted tiene 29 puntos\n");
 resultado=resultado + p4;
  resultado=resultado+ p4;}
 
 else if (pregunta_4=='N'||pregunta_4=='n')
 {printf("usted tiene 0 puntos\n");
  resultado=resultado+0;}
 
 printf("preg.5: ¿Presenta mucosidad? \n ");
 
 printf ("S/N\n");
 char pregunta_5;
 
 scanf("%c%*c",&pregunta_5);
 
 if (pregunta_5=='S'||pregunta_5=='s')
 {printf("usted tiene 0 puntos\n");
 resultado=resultado + p5;
  resultado=resultado+ p5;}
 
 else if (pregunta_5=='N'||pregunta_5=='n')
 {printf("usted tiene 0 puntos\n");
   resultado=resultado+0;}
 
 printf("preg.6: ¿Tienes dolor muscular? \n ");
 
 printf ("S/N\n");
 
 char pregunta_6;
 scanf("%c%*c",&pregunta_6);
 
 if (pregunta_6=='S'||pregunta_6=='s')
 {printf("usted tiene 0 puntos\n");
 resultado=resultado + p6;
  resultado=resultado+ p6;}
 
 else if (pregunta_6=='N'||pregunta_6=='n')
 {printf("usted tiene 0 puntos\n");
  resultado=resultado+0;}
   
 printf("preg.7: ¿Tienes sintomatología gastrointestinal?\n ");
  
  printf ("S/N\n");
   
  char pregunta_7;
  scanf("%c%*c",&pregunta_7);
   
  if (pregunta_7=='S'||pregunta_7=='s')
  {printf("usted tiene 0 puntos\n");
   resultado=resultado + p7;
   resultado=resultado+ p7;}
  
  else if (pregunta_7=='N'||pregunta_7=='n')
  {printf("usted tiene 0 puntos\n");
  resultado=resultado+0;} 

  printf("preg.8: ¿Llevas más de 20 días con estos síntomas? \n ");
  
  printf ("S/N\n");
  
  char pregunta_8;
  scanf("%c%*c",&pregunta_8);
   
  if (pregunta_8=='S'||pregunta_8=='s')
  {printf("usted tiene -15 puntos\n");
   resultado=resultado + p8;
   resultado=resultado+ p8;}
    
    else if (pregunta_8=='N'||pregunta_8=='n')
   {printf("usted tiene 0 puntos\n");
    resultado=resultado+0;} 
   
   printf("el test ha terminado\n");
   if (resultado>=30)
   
   {printf("debe consultar a un medico\n");}
   
   else if (resultado<=29)
   {printf("no debera consultar a un medico\n");}
 
  return 0;
}