#include <iostream>

using namespace std;

/*
NAMA    : RAISSA AMINI
NPM     : 140810180073
KELAS   : A
TANGGAL : 3/12/2019
*/
struct r_mhs{
	char npm[14];
	char nama[40];
	float ipk;
};

typedef r_mhs larikMhs[30];
larikMhs mhs;

void banyakData(int &n);
void inputMhs(larikMhs& mhs,int n);
void cetakMhs(larikMhs mhs,int n);
void sortNPM(larikMhs& mhs,int n);


int main()
{
    int n;
    banyakData(n);
    inputMhs(mhs,n);
    sortNPM(mhs,n);
    cetakMhs(mhs,n);
    return 0;
}

void banyakData(int &n){
    cout << "Banyak Data : ";cin >> n;
}

void inputMhs(larikMhs& mhs,int n){
    for(int i=0;i<n;i++){
        cout << "Masukan data mahasiswa ke- "<< i+1 <<endl;
        cout << "NPM    : ";cin >> mhs[i].npm;
        cout << "Nama   : ";cin >> mhs[i].nama;
        cout << "IPK    : ";cin >> mhs[i].ipk;
    }
}
void cetakMhs(larikMhs mhs,int n){
    cout << "PENCETAKAN DATA MAHASISWA"<<endl;
    for(int i=0;i<n;i++){
        cout << mhs[i].npm<<"|"<<mhs[i].nama<<"|"<<mhs[i].ipk<<endl;
    }
}
void sortNPM(larikMhs& mhs,int n){
    int i;
	r_mhs temp;
	for(i=1; i<n; i++){
        temp = mhs[i];
        while(i>0 && mhs[i-1].npm>temp.npm){
            mhs[i] = mhs[i-1];
            i = i-1;
        }
        mhs[i]= temp;
    }
}
