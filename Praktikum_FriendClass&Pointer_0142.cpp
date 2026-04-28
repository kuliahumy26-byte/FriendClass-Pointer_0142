#include <iostream>
using namespace std;

class layangLayang{
    private:
    int diagSatu, diagDua, sisiPendek, sisiPanjang, hasilLuas, hasilKeliling;

    public:
    void luas(){
        hasilLuas = 0.5 * diagSatu * diagDua;
    }

    void keliling(){
        hasilKeliling = sisiPendek * sisiPendek * sisiPanjang * sisiPanjang;
    }

    void input(){
        cout << "Masukan diagonal ke-1: ";
        cin >> diagSatu;
        cout << "Masukan diagonal ke-2: ";
        cin >> diagDua;

        cout << "Masukan sisi pendek: ";
        cin >> sisiPendek;
        cout << "Masukan sisi panjang: ";
        cin >> sisiPanjang;
    }
    void output(){
        cout << "hasil luas: " << hasilLuas << endl;
        cout << "hasil keliling: " << hasilKeliling << endl;
    }

    friend class belahKetupat;
};

class belahKetupat{


    private:
    int diagSatu, diagDua, sisi, hasilLuas, hasilKeliling;

    public:
    void luas(){
        hasilLuas = 0.5 * diagSatu * diagDua;
    }

    void keliling(){
        hasilKeliling = sisi * sisi * sisi * sisi;
    }

    void input(){
        cout << "Masukan diagonal ke-1: ";
        cin >> diagSatu;
        cout << "Masukan diagonal ke-2: ";
        cin >> diagDua;

        cout << "Masukan sisi: ";
        cin >> sisi;
    }
    void output(){
        cout << "hasil luas: " << hasilLuas << endl;
        cout << "hasil keliling: " << hasilKeliling << endl;
    }
};

