int main() {
    int erros = 0;

    if (fatorial(0) != 1) erros++;
    if (fatorial(1) != 1) erros++;
    if (fatorial(5) != 120) erros++;
    if (fatorial(6) != 720) erros++;
    if (fatorial(-2) != -1) erros++;

    if (erros == 0) {
        printf("Todos os testes passaram!\n");
        return 0;
    } else {
        printf("Falharam %d testes.\n", erros);
        return 1;
    }
}
