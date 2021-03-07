#include <iostream>
#include <math.h>
using namespace std;
//fungsi integralnya
void integral(){
    // deklarasi konstanta fungsi kuadrat dengan ax^2+bx+c
    float a,b,c;
    // deklarasi variabel yang dibutuhkan untuk integral
    float batas1, batas2, tinggi, tinggi_n, jumlah_trap, sisi_sejajar1, sisi_sejajar2, jumlah_sisi, x, sisi_sejajar_n, hasil_integral;
    cout << "Fungsi yang akan diintegralkan adalah fungsi ax^2+bx+c, silahkan masukkan konstantanya."<<endl;
    //memilih konstanta fungsi kuadrat yang diinginkan
    cout << "Masukkan konstanta a: ";
    cin >> a;
    cout << "Masukkan konstanta b: ";
    cin >> b;
    cout << "Masukkan konstanta c: ";
    cin >> c;

    // memilih batas atas dan batas bawah integral
    cout << "Masukkan batas bawah: ";
    cin >> batas1;
    cout << "Masukkan batas atas: ";
    cin >> batas2;
    // memasukkan tinggi trapesium, misalnya 0.1, 0.001, dan seterusnya
    cout << "Masukkan seberapa tinggi trapesium: ";
    cin >> tinggi;

    //Hitung jumlah trapesium
    jumlah_trap = (batas2-batas1)/tinggi;

    //Hitung sisi sejajar trapesium pada limit atas dan limit bawah.
    sisi_sejajar1 = (a*batas1*batas1) + (b*batas1) + c;
    sisi_sejajar2 = (a*batas2*batas2) + (b*batas2) + c;

    //Jumlahkan nilai sisi sejajar trapesium pada limit atas dan limit bawah.
    jumlah_sisi = (sisi_sejajar1 + sisi_sejajar2);
    for (int i = 1; i <= jumlah_trap-1; ++i){
        tinggi_n = batas1 + i*tinggi;
        sisi_sejajar_n = 2*((a*tinggi_n*tinggi_n) + (b*tinggi_n) + c);
        jumlah_sisi += sisi_sejajar_n;
    }
    cout << tinggi*jumlah_sisi*0.5;
}


int main()
{
    // deklarasi variabel angka1,angka2, operasi, hasil
    float angka1;
    float angka2;
    string operasi;

    // input operasi yang ingin digunakan
    cout << "Masukkan operasi: ";
    cin >> operasi;

    // kondisional saat operasi nya +
    if(operasi == "+"){
        //memasukkan dua angka yang ingin dilakukan operasi
        cout << "Masukkan angka pertama: ";
        cin >> angka1;
        cout << "Masukkan angka kedua: ";
        cin >> angka2;
        //menjumlahkan kedua angka
        cout << angka1 + angka2;

    // kondisional saat operasi nya -
    }else if (operasi == "-"){
        //memasukkan dua angka yang ingin dilakukan operasi
        cout << "Masukkan angka pertama: ";
        cin >> angka1;
        cout << "Masukkan angka kedua: ";
        cin >> angka2;
        //mengurangi kedua angka
        cout << angka1 - angka2;

    // kondisional saat operasi nya *
    }else if (operasi == "*"){
        //memasukkan dua angka yang ingin dilakukan operasi
        cout << "Masukkan angka pertama: ";
        cin >> angka1;
        cout << "Masukkan angka kedua: ";
        cin >> angka2;
        //mengkali kedua angka
        cout << angka1*angka2;

    // kondisional saat operasi nya /
    }else if (operasi == "/"){
        //memasukkan dua angka yang ingin dilakukan operasi
        cout << "Masukkan angka pertama: ";
        cin >> angka1;
        cout << "Masukkan angka kedua: ";
        cin >> angka2;
        //membagi kedua angka
        cout << angka1 / angka2;

    // kondisional saat ingin operasi integral
    }else if (operasi == "integral"){
        integral();
    }else {
        cout << "Operasi salah"<<endl;
        }



    return 0;
}
