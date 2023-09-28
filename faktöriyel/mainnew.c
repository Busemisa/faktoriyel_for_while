#include <stdio.h>
#include <stdlib.h>

int faktoriyel(int sayi) {
    int sonuc = 1;
    int i = 1;  // Döngü sayaçýný baþlat

    while (i <= sayi) { // Bir for döngüsü yerine while döngüsü kullanýyoruz
        sonuc *= i;
        i++;
    }
    return sonuc;
}

int main(int argc, char *argv[]) {
    int n;
    printf("Faktoriyelini hesaplamak istediðiniz sayiyi giriniz: ");
    scanf("%d", &n);

    printf("%d! = %d\n", n, faktoriyel(n));

    return 0;
}
