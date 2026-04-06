#include <iostream>
#include <string>
using namespace std;
struct detailAlamat
{
    string desa;
    string kota;
};
struct Orang
{
    string nama;
    detailAlamat alamat;
    int umur;
};
int main() {
    Orang mhs;
    //Mengisi data
    cout << "mengisi data" << endl;
    cout << "Nama : " ;
    getline(cin , mhs.nama);
    cout << "Desa : " ;
    getline(cin , mhs.alamat.desa);
}    