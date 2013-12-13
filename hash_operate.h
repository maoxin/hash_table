#include "prime.h"

static size_t hashCode(char s[]) {
    int h = 0;
    for (size_t n = strlen(s), i=0; i<n; i++) {
        h = (h << 5) | (h >> 27);
        h += (int) s[i];
    }
    
    return (size_t) h;
}

static size_t hash(size_t hash_code, size_t M) {
    size_t a = M + 1;       // maby next prime.
    size_t b = a - 3;
    
    return (a * hash_code + b) % M;
}