#include <stdio.h>
#include <stdlib.h>
//struct yapisini fonksiyon ile kullanalim..

struct Aday{
	char isim[20];
	char soyisim[20];
	char telNo[15];
	int adayNo;
};
void goruntule(struct Aday degisken)
{
	printf("--------------------ADAY BILGILERI-----------------\n");
	printf("AD:%s\nSOYAD:%s\nTELEFON:%s\nADAY NO:%d\n",degisken.isim,degisken.soyisim,degisken.telNo,degisken.adayNo);
}
	
int main() {
	struct Aday aday={"Tugba","Kirac","05005471412",125};
	goruntule(aday);
	
	return 0;
}
