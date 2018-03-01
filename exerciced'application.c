#include<stdio.h>
#include<stdlib.h>
#include<string.h>

	typedef struct
	{
		int CIN;
		char nom[20];
		char prenom[20];
		char groupe[20];
	}etudiant;
	
void groupe(char *grp,etudiant *T, int N)
{
	etudiant *p;
	for(p=T;p<T+N;p++)
	{
		if(strcmp(grp,T->groupe)==0)
			
	printf("%s\n",T->nom);
	}
}
	
int main (void) 
{
	

	
	etudiant *e;
	etudiant *T;
	int N;
	char grp[10];
	
	do
	{
		puts("Donner N : ");
		scanf ("%d",&N);
	}while(N<1);
	T=malloc(N*sizeof(*T));
	for(e=T;e<T+N;e++)
	{
			
			puts("donner le CIN ");
			scanf ("%d",&e->CIN);
		
		puts("donner le nom ");
		scanf ("%s",e->nom);
		puts("donner le prenom ");
		scanf ("%s",e->prenom);
		puts("donner le groupe");
		scanf ("%s",e->groupe);
	}	
	
	puts("Donner le Groupe : ");
	scanf ("%s",grp);
	groupe(grp,T,N);

	
	return 0;
}
