#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

//fonksiyon prototipleri
void BozoSort(int[],int); //bozoSort Algoritmasý
bool isSorted(int[],int); //Dizinin sýralý olup olmadýðýný kontrol eder


int main(){
    // test etmek için örnek bir dizi oluþturuluyor
    int testDizi[]={1,20,9,55};
    int boyut=sizeof(testDizi)/sizeof(testDizi[0]); //dizinin eleman sayýsý

    //Orijinal diziyi ekrana yazdýr
    cout<<"Orijinal dizi: [";
    for(int i=0;i<boyut;i++){
        cout<<testDizi[i];
        if(i<boyut-1)cout<<", ";
    }
    cout<<"]"<<endl;

    //diziyi bozoSort algaritmasýyla sýrala
    BozoSort(testDizi,boyut);

    //Sýralanmýþ diziyi ekrana yazdýr
    cout<<"Siralanmis Dizi: [";
    for(int i=0;i<boyut;i++){
        cout<<testDizi[i];
        if(i<boyut-1)cout<<", ";
    }

    cout<<"]"<<endl;

    return 0;

}

//bozosSort algoritmasý: sýralý olana kadar rastgele iki elemaný yer deðiþtirir
void BozoSort(int dizi[],int boyut){
    srand(time(0)); //rastgelelik için baþlangýç deðeri ayarlanýr
    int deneme = 0; //kaç deneme yapýldýðýný tutan sayaç


    while(!isSorted(dizi,boyut)){
        int i=rand()%boyut; //rastgele bir indeks seç
        int j=rand()%boyut; //baþka bir rastgele indeks seç

        //elemanlarý yer deðiþtir
        int temp =dizi[i];
        dizi[i]=dizi[j];
        dizi[j]=temp;

        deneme++; //deneme sayýsýný artýr

    }
    //toplam deneme sayýsýný ekrana yazdýr
    cout<<"Toplam deneme sayisi:"<< deneme << endl;
}

//dizinin sýralý olup olmadýðýný kontrol eder küçükten büyüðe dogru
bool isSorted(int dizi[],int boyut){
    for (int i=0;i<boyut-1;i++){
        if(dizi[i]>dizi[i+1]){
            return false;//eðer bir eleman kendisinden sonraki elemandan büyükse sýralý deðildir
        }
    }
    return true; //tüm elemanlar sýralýysa true döner
}






