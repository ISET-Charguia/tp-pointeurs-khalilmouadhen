#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
    int *p,*q;
 p=malloc(sizeof(*p));
	if (p==NULL)
	
	puts("erreur de memoire");
	else 
	{
    q=p+1;
    printf("p= %x \n",p);
    printf("q= %x \n",q);
    printf("q-p= %d \n",p-q);
    printf("taille du type= %d \n",sizeof(int));
    }

    double *p1,*q1;
     p1=malloc(sizeof(*p1));
	if (p1==NULL)
	
	puts("erreur de memoire");
	else 
	{
    q1=p1+1;
    printf("p1= %x \n",p1);
    printf("q1= %x \n",q1);
    printf("q1-p1= %d \n",p1-q1);
    printf("taille du type= %d \n",sizeof(double));
    }

    char *p2,*q2;
     p2=malloc(sizeof(*p2));
	if (p2==NULL)
	
	puts("erreur de memoire");
	else 
	{
    q2=p2+1;
    printf("p2= %x \n",p2);
    printf("q2= %x \n",q2);
    printf("q2-p2= %d \n",p2-q2);
    printf("taille du type= %d \n",sizeof(char));
    }
return 0;

}
