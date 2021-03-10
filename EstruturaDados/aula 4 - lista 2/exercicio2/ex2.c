#include <stdio.h>
#include <string.h>
#include "pilha.h"
#include "fila.h"
int concha(char *c) { // verifica se c é uma concha
...
}
void filtra(Fila F) { // exibe apenas as cadeias em F que são conchas
...
}
int main(void) {
Fila F = fila(20);
enfileira("AAAAAAAABAAABA",F);
enfileira("BBBBBBBBBBBBBB",F);
enfileira("ABBABBABBABB",F);
enfileira("AAABAAABBABAAA",F);
enfileira("ABAABAAAAAAAAA",F);
enfileira("AABAAAAAABAAAA",F);
enfileira("AAAABB",F);
enfileira("AABBBBAABAAB",F);
enfileira("ABAAAAAAAAAB",F);
enfileira("ABABBBABAB",F);
enfileira("BBBBBBBBBBBBBB",F);
enfileira("AABAABAAAA",F);
enfileira("AABAAABBBBBABB",F);
enfileira("BBBAAAAABA",F);
enfileira("BBBBBBBBBBBBBB",F);
enfileira("AAAAAAAAAAAABB",F);
enfileira("BAAAAABAAAAAAA",F);
enfileira("BBBBABBBBBBA",F);
enfileira("BBABABAAAAAABB",F);
enfileira("ABAABAABAB",F);
filtra(F); // deve exibir 12 conchas
destroif(&F);
return 0;
}
