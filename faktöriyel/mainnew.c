#include <stdio.h>
#include <stdlib.h>

int faktoriyel(int sayi) {
    int sonuc = 1;
    int i = 1;  // D�ng� saya��n� ba�lat

    while (i <= sayi) { // Bir for d�ng�s� yerine while d�ng�s� kullan�yoruz
        sonuc *= i;
        i++;
    }
    return sonuc;
}

int main(int argc, char *argv[]) {
    int n;
    printf("Faktoriyelini hesaplamak istedi�iniz sayiyi giriniz: ");
    scanf("%d", &n);

    printf("%d! = %d\n", n, faktoriyel(n));

    return 0;
}
