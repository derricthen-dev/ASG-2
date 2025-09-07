#include <stdio.h>

char main() {
    char nama[20], bahasa_favorit[20];
    printf("Nama anda siapa?:\n");
    scanf("%s", nama);
    printf("Bahasa favorit anda apa?:\n");
    scanf("%s", bahasa_favorit);

    printf("Perkenalkan nama saya %s dan bahasa favorit saya %s", nama, bahasa_favorit);
    
    return 0;
}