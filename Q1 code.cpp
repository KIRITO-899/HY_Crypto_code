#include<bits/stdc++.h>
using namespace std;

// Function to compute modular inverse of a modulo m
int mod_inverse(int a, int m) {
    for (int x = 1; x < m; x++) {
        if ((a * x) % m == 1) {
            return x;
        }
    }
    return -1; // No inverse exists
}

// Function to decrypt affine cipher
// Formula: P = a_inv * (C - b) mod 26
string affine_decrypt(string ciphertext, int a, int b) {
    int a_inv = mod_inverse(a, 26);  // Get inverse of a mod 26
    string plaintext = "";
    for (char c : ciphertext) {
        if (isupper(c)) {
            int C = c - 'A';  // Convert char to 0-25
            int P = (a_inv * ((C - b + 26) % 26)) % 26;  // Decrypt formula
            plaintext += (P + 'A');  // Convert back to char
        } else {
            plaintext += c;  // Keep non-uppercase as is (spaces)
        }
    }
    return plaintext;
}

int main() {
    int a = 5, b = 8;  // Affine cipher keys
    string ciphertext = "ZRCCVCQY IZZISG UIZXIOV";  // Encrypted text
    string plaintext = affine_decrypt(ciphertext, a, b);  // Decrypt
    cout << plaintext << endl;  // Output plaintext
    return 0;
}

