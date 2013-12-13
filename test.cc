#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "hash.h"
using std::cin;
using std::cout;
using std::endl;

int main (int argc, char const *argv[])
{
    // char s[8] = {"hello"};  // same.
    // char s[8] = "hello";
    // cout << hashCode(s) << endl;
    // cout << hash(hashCode(s), 11) << endl;
    // Eratosthenes(10, "./prime.txt");
    int prime = primeNLT(20000 , 25000, "prime.txt");
    cout << prime << endl;
    
    return 0;
}