#include <stdio.h>
int main()
{
while(1)
{
int x, y, islem;
printf("Bilgi kutusu islem icin (not islem girin yazan yer gelince gecerlidir)1 Toplama, 2 Cikarma 3 Carpma, 0 cikis\n");
printf("bir sayi gir\n");
scanf("%d" , &x);
printf("ikinci sayiyi gir\n");
scanf("%d" , &y);
printf("islem girin\n");
scanf("%d" , &islem);
if (islem == 1) {
    printf("Sonuc: %d\n", x + y);
}
else if (islem == 2) {
    printf("Sonuc: %d\n", x - y);
}
else if (islem == 3) {
    printf("Sonuc: %d\n", x * y);
}
if (islem == 0) {
    break;
}

}
}
