#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void BozoSort(int[],int);
bool isSorted(int[],int);


int main(){
    int testDizi[]={1,20,9,55};
    int boyut=sizeof(testDizi)/sizeof(testDizi[0]);

    cout<<"Orijinal dizi: [";
    for(int i=0;i<boyut;i++){
        cout<<testDizi[i];
        if(i<boyut-1)cout<<", ";
    }
    cout<<"]"<<endl;

    BozoSort(testDizi,boyut);


    cout<<"Siralanmis Dizi: [";
    for(int i=0;i<boyut;i++){
        cout<<testDizi[i];
        if(i<boyut-1)cout<<", ";
    }

    cout<<"]"<<endl;

    return 0;

}

void BozoSort(int dizi[],int boyut){
    srand(time(0));
    int deneme = 0;

    while(!isSorted(dizi,boyut)){
        int i=rand()%boyut;
        int j=rand()%boyut;
        int temp =dizi[i];
        dizi[i]=dizi[j];
        dizi[j]=temp;
        deneme++;

    }
    cout<<"Toplam deneme sayisi:"<< deneme << endl;
}

bool isSorted(int dizi[],int boyut){
    for (int i=0;i<boyut-1;i++){
        if(dizi[i]>dizi[i+1]){
            return false;
        }
    }
    return true;
}






