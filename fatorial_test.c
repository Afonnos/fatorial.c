#include <assert.h> 
#include <stdio.h>
#include "fatorial.c"
int main() {

    assert (fatorial(0) == 1) ;
    assert (fatorial(1) == 1) ;
    assert (fatorial(5) == 120); 
    assert (fatorial(6) == 720) ;
    assert (fatorial(-2) == -1) ;
    
    printf("Todos os testes passaram!\n");
    return 0;    
}
