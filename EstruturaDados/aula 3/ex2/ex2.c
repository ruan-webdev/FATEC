#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>
#include "pilha.h"


int prio(char o) {
	switch( o ) {
	case'(': return 0;
	case'|': return 1;
	case'&':
	case'!': return 2;
	}
	return-1; // operadorinválido!
}

char*posfixa(char*e) {
	static char s[256];
	int j = 0;
	Pilha P = pilha(256);
	for(int i=0; e[i]; i++)
	if( e[i]=='(') empilha('(',P);
	else if( isalpha(e[i]) ) s[j++] = e[i];
	else if( strchr("|&!",e[i]) ) {
	while( !vaziap(P) && prio(topo(P))>=prio(e[i]) )
	s[j++] = desempilha(P);
	empilha(e[i],P);
}
else if( e[i] == ')') {
	while( topo(P)!='(')
	s[j++] = desempilha(P);
	desempilha(P);
}
while( !vaziap(P) )
	s[j++] = desempilha(P);
	s[j] = '\0';
	destroip(&P);
	return s;

}

int valor(char*e) {
	Pilha P = pilha(256);
	for(int i=0; e[i]; i++){
	 	bool v = true;  
	    bool f = false; 
	    if (v) 
	    {
		   e[i]=v;
	       empilha(e[i],P);
	    }
	    if (f) 
	    {
		   e[i]=f;
	       empilha(e[i],P);
	    }
	}
	int z = desempilha(P);
	return z;
}

int main(void){
	char e[256];
	printf("Infixa? ");
	gets(e);
	printf("Posfixa: %s\n", posfixa(e));
	printf("Valor numerico: %d\n", valor(posfixa(e)));
	return 0;
}
