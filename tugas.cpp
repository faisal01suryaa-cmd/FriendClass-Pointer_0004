#include <iostream>
#include <cmath>
using namespace std;

class LayangLayang {
    private:
    double d1, d2;

    public:
    void inputData() {
        cout << "Input diagonal 1 layang-layang: ";
        cin >> d1;
        cout << "Input diagonal 2 layang-layang: ";
        cin >> d2;
    }

     double hitungLuas() {
        return 0.5 * d1 * d2;
    }

    void tampilkanKeliling() {
        cout << "Keliling layang-layang belum dihitung" << endl;
    }
};

class BelahKetupat {
    private:
    double d1, d2;

    public:
    void inputData() {
        cout << "Input diagonal 1 belah ketupat: ";
        cin >> d1;
        cout << "Input diagonal 2 belah ketupat: ";
        cin >> d2;
    }

    double hitungLuas() {
        return 0.5 * d1 * d2;
    }



};