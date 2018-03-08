#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 36

typedef struct nod
{
	char valoare;
	struct nod *urm, *copii;
	int ok;
}Trie, *TTrie, **ATrie;