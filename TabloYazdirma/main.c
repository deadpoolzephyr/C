#include <stdio.h>
#include <stdlib.h>


int main() {
 int i;
 for (i = 0 ; i < 32 ; i++) {
 char a = i; // 1. sutundaki karakter
 if (!isprint(a))
 a = ' '; // ekrana yazdirilabilir karakter degilse bosluk ata
 char b = i+32; // 2. sutundaki karakter
 if (!isprint(b))
 b = ' ';
 char c = i+64; // 3. sutundaki karakter
 if (!isprint(c))
 c = ' ';
 char d = i+96; // 4. sutundaki karakter
 if (!isprint(d))
 d = ' ';
 printf("| %-3c %-4d| %-3c %-4d| %-3c %-4d| %-3c %-4d|\n", a, i, b, i+32, c, i+64, d, i+96);
 }
 return 0;
}
