
#include <iostream> //Giriş-Çıkış işlemleri için gerekli kütüphane
#include <cstdlib> //Rastgele sayı üretimi için gerekli kütüphane
#include <ctime>  //Zaman fonksiyonlarını kullanmak için gerekli kütüphane

using namespace std;
// BozoSort algoritması:Diziyi rastgele karıştırarak sıralamayı dener
//Dizinin sıralı olup olmadığını kontrol eden yardımcı fonksiyon
void BozoSort(int[],int);
bool isSorted(int[],int);


int main(){
    int size;

    //Kullanıcıdan dizi boyutunu al
    cout<<"Kac Elemanli Dizi Olusturmak Istiyorsunuz: "<<endl;
    cin>>size;
    //Girilen boyutta dinamik dizi oluşturuluyor
    int*arMyValues= new int[size];

    //Kullanıcıdan dizinin elemanlarını alma
    cout<<"Olusturmak Istediginiz "<<size<<" elemani giriniz: "<<endl;
    for(int i =0;i<size;i++){
        cout<<"Eleman "<<i+1<<" : ";
        cin>>arMyValues[i];//Girilen değer diziye atanıyor
    }

    //Dizi sıralama fonksiyonu çağrılıyor
    BozoSort(arMyValues,size);

    //Sonucu ekrana yazdırıyor
    cout<<"\nDizi Siralandi..."<<endl;
    cout<<"Siralanmis Dizi: [";

    for(int i=0;i<size;i++){
        cout<< arMyValues[i];
        if(i<size-1){
            cout<<",";
        }
    }
    cout<<"]"<<endl;


    //Dinamik olarak ayrılan belleği serbest bırak
    delete[] arMyValues;

    return 0;
}


//BozoSort algoritması:Dizi sıralanana kadar rastgele iki elemanı yer değiştirir
void BozoSort(int arValues[],int size){

    int slot1,slot2,temp;
    //Rastgele sayı üreticisini o anki zamanı kullanarak başlatır
    srand(time(NULL));

    //Dizi sıralana kadar döngü devam eder
    while(!isSorted(arValues,size)){
        //Rastgele iki indeks seçilir
        slot1=rand()%size;
        slot2=rand()%size;

        //Seçilen iki elemanın yerleri değiştirilir
        temp=arValues[slot1];
        arValues[slot1]=arValues[slot2];
        arValues[slot2]=temp;
    }
}

//Dizinin sıralı olup olmadığını kontrol eden fonksiyon
bool isSorted(int arValues[],int size){
    // Dizinin tüm elemanlarını artan sırada mı kontrol edilir
    for(int i=0;i<size-1;i++){
        if(arValues[i]>arValues[i+1]){
            return false;//Herhangi bir terslik varsa dizi sıralı değildir
        }
    }
    //Dizi sıralıysa true döner
    return true;
}
