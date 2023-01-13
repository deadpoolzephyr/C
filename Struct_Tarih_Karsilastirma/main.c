#include <stdio.h>
#include <stdlib.h>

struct Tarih {
int gun; int ay; int yil;
};
struct Tarih Tarih_olustur(int g, int a, int y) {
struct Tarih t;
if (g > 31 || a > 12) {
 t.gun = 0; t.ay = 0; t.yil = 0;
} else {
 t.gun = g; t.ay = a; t.yil = y;
}
return t;
}
/*
int Tarih_karsilastir(struct Tarih t1, struct Tarih t2) {
if (t1.yil > t2.yil) return 1;
if (t1.yil == t2.yil && t1.ay > t2.ay) return 1;
if (t1.yil == t2.yil && t1.ay == t2.ay && t1.gun > t2.gun) return 1;
if (t1.yil == t2.yil && t1.ay == t2.ay && t1.gun == t2.gun) return 0;
return -1;
}
*/
int Tarih_karsilastir(struct Tarih t1, struct Tarih t2) {
int a = t1.yil * 365 + t1.ay * 30 + t1.gun;
int b = t2.yil * 365 + t2.ay * 30 + t2.gun;
if (a > b)
 return 1;
else if (a == b)
 return 0;
else
 return -1;
}

int main()
{
struct Tarih t5 = Tarih_olustur(3, 3, 2016);
struct Tarih t6 = Tarih_olustur(3, 3, 2016);
int sonuc = Tarih_karsilastir(t5, t6);
if (sonuc == 1) printf("t5 > t6\n");
else if (sonuc == 0) printf("t5 == t6\n");
else printf("t5 < t6\n");
return 0;
}
