int primeNLT(int low, int n, char *file) {
    FILE * fr = NULL;
    int chosen;
    fr = fopen(file, "r");
    fscanf(fr, "%d ", &chosen);
    
    while (chosen < low) {
        fscanf(fr, "%d ", &chosen);
    }
    
    return chosen;
}