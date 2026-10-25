#include <stdio.h>

int main() 
{
    char nama[50];
    char nim[20];
    char kelas_paralel[20];
    char tempat_tanggal_lahir[50];
    char alamat[100];
    char hobby[50];
    char no_hp[20];
    printf("INPUT BIODATA\n");

    printf("Nama\t\t\t: ");
    scanf(" %[^\n]", nama);

    printf("NIM\t\t\t: ");
    scanf("%s", nim);

    printf("Kelas Paralel\t\t: ");
    scanf("%s", kelas_paralel);

    printf("Tempat/Tanggal Lahir\t: ");
    scanf(" %[^\n]", tempat_tanggal_lahir);

    printf("Alamat\t\t\t: ");
    scanf(" %[^\n]", alamat);

    printf("Hobby\t\t\t: ");
    scanf(" %[^\n]", hobby);

    printf("No. HP\t\t\t: ");
    scanf("%s", no_hp);

    printf("OUTPUT BIODATA ");

    printf("\nNama\t\t\t: %s\n", nama);
    printf("NIM\t\t\t: %s\n", nim);
    printf("Kelas Paralel\t\t: %s\n", kelas_paralel);
    printf("Tempat/Tanggal Lahir\t: %s\n", tempat_tanggal_lahir);
    printf("Alamat\t\t\t: %s\n", alamat);
    printf("Hobby\t\t\t: %s\n", hobby);
    printf("No. HP\t\t\t: %s\n", no_hp);

    return 0;
}