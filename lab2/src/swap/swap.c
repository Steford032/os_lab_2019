#include "swap.h"

void Swap(char *left, char *right)
{
	char g;
    g=*(left);
    *(left)=*(right);
    *(right)=g;
}
