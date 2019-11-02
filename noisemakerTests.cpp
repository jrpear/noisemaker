#include <iostream>
#include "noisemaker.h"
#include "fileFuncs.h"

using namespace std;

int main() {
    sample s[100000];
    for (int i = 0; i < sizeof(s) / sizeof(sample); i++) {
        s[i] = INT16_MAX;
    }
    writeWavHeaderFile(fopen("test.wav", "w"), s, sizeof(s) / sizeof(sample), 10000);
}