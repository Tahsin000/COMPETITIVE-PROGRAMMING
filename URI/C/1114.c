#include<stdio.h>
int main ()
{
int a,b=10,c;
for (a=1; a<=b ;b++){
scanf("%d",&c);
if (c==2002){
printf ("Acesso Permitido\n");
goto abrar;
}
else 
printf ("Senha Invalida\n");
}
abrar: 

return 0;
}
