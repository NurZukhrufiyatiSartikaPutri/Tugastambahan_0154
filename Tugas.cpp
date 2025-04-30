#include <iostream>
using namespace std;

class Segitiga
{
public:
    int alas, tinggi;
    int sisi1, sisi2, sisi3;

    void InputData()
    {
        cout << "Masukkan alas segitiga: ";
        cin >> alas;
        cout << "Masukkan tinggi segitiga: ";
        cin >> tinggi;
        cout << "Masukkan sisi 1: ";
        cin >> sisi1;
        cout << "Masukkan sisi 2: ";
        cin >> sisi2;
        cout << "Masukkan sisi 3: ";
        cin >> sisi3;
    }

private:
    float luas(int a, int t)
    {
        return 0.5 * a * t;
    }

    float keliling(int a, int b, int c)
    {
        return a + b + c;
    }

public:
    void inputLuas()
    {
        cout << "Masukkan alas: ";
        cin >> alas;
        cout << "Masukkan tinggi: ";
        cin >> tinggi;
    }

    void outputLuas()
    {
        cout << "Luas segitiga = " << luas(alas, tinggi) << endl;
    }

    void inputKeliling()
    {
        cout << "Masukkan sisi 1: ";
        cin >> sisi1;
        cout << "Masukkan sisi 2: ";
        cin >> sisi2;
        cout << "Masukkan sisi 3: ";
        cin >> sisi3;
    }

    void outputKeliling()
    {
        cout << "Keliling segitiga = " << keliling(sisi1, sisi2, sisi3) << endl;
    }
};

int main()
{
    Segitiga def;
    int pilihan;

    do
    {
        cout << "=== Menu ===" << endl;
        cout << "1. Menghitung Luas Segitiga" << endl;
        cout << "2. Menghitung Keliling Segitiga" << endl;
        cout << "3. Exit" << endl;
        cout << "Pilih (1/2/3): ";
        cin >> pilihan;

        switch (pilihan)
        {
        case 1:
            def.inputLuas();
            def.outputLuas();
            break;
        case 2:
            def.inputKeliling();
            def.outputKeliling();
            break;
        case 3:
            cout << "Program selesai. Terima kasih!" << endl;
            break;
        default:
            cout << "Pilihan tidak valid!" << endl;
        }

    } while (pilihan != 3);

    return 0;
}
