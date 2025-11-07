# Affine Cipher Decryption Program

This C++ program decrypts text encrypted with an affine cipher using the keys a=5 and b=8.

## Description

The affine cipher is a type of monoalphabetic substitution cipher where each letter in the plaintext is mapped to its numeric equivalent, encrypted using a simple mathematical function, and converted back to a letter. The decryption formula is:

P = a⁻¹ * (C - b) mod 26

Where:
- P is the plaintext letter (0-25)
- C is the ciphertext letter (0-25)
- a is the multiplicative key
- b is the additive key
- a⁻¹ is the modular inverse of a modulo 26

## Code Structure

- `mod_inverse(int a, int m)`: Computes the modular inverse of a modulo m using brute force (suitable for small m like 26).
- `affine_decrypt(string ciphertext, int a, int b)`: Decrypts the ciphertext using the affine cipher formula.
- `main()`: Sets the keys, ciphertext, calls the decryption function, and prints the plaintext.

## Compilation and Execution

To compile and run the program:

```bash
g++ Q1\ code.cpp -o affine_decrypt.exe
./affine_decrypt.exe
```

## Input

The program uses hardcoded values:
- a = 5
- b = 8
- Ciphertext = "ZRCCVCQY IZZISG UIZXIOV"

## Output

The decrypted plaintext is printed to the console.

Example output:
```
THEENEMY ATTACK SATDAWN
```

## Notes

- Only uppercase letters are decrypted; spaces and other characters are preserved.
- The modular inverse is computed efficiently for small moduli.
