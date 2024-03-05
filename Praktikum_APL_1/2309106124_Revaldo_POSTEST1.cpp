#include <iostream>
#include <string>

using namespace std;

// Definisi fungsi konversi suhu
float celcius_ke_reamur(float suhu_celcius) {
    return (4.0 / 5.0) * suhu_celcius;
}

float celcius_ke_farenheit(float suhu_celcius) {
    return (9.0 / 5.0) * suhu_celcius + 32;
}

float celcius_ke_kelvin(float suhu_celcius) {
    return suhu_celcius + 273.15;
}

float reamur_ke_celcius(float suhu_reamur) {
    return (5.0 / 4.0) * suhu_reamur;
}

float reamur_ke_farenheit(float suhu_reamur) {
    return (9.0 / 4.0) * suhu_reamur + 32;
}

float reamur_ke_kelvin(float suhu_reamur) {
    return (5.0 / 4.0) * suhu_reamur + 273.15;
}

float farenheit_ke_celcius(float suhu_farenheit) {
    return (5.0 / 9.0) * (suhu_farenheit - 32);
}

float farenheit_ke_reamur(float suhu_farenheit) {
    return (4.0 / 9.0) * (suhu_farenheit - 32);
}

float farenheit_ke_kelvin(float suhu_farenheit) {
    return (5.0 / 9.0) * (suhu_farenheit - 32) + 273.15;
}

float kelvin_ke_celcius(float suhu_kelvin) {
    return suhu_kelvin - 273.15;
}

float kelvin_ke_reamur(float suhu_kelvin) {
    return (4.0 / 5.0) * (suhu_kelvin - 273.15);
}

float kelvin_ke_farenheit(float suhu_kelvin) {
    return (9.0 / 5.0) * (suhu_kelvin - 273.15) + 32;
}

int main() {
    string nama, nim;
    int counter = 0;

    while (true) {
        cout << "Input Nama: ";
        cin >> nama;
        cout << "Input NIM: ";
        cin >> nim;

        if (nama != "valdo" || nim != "124") {
            counter++;
            if (counter >= 3) {
                cout << "Error. Silakan coba lagi nanti." << endl;
                return 0;
            }
            cout << "Nama atau NIM salah. Silakan coba lagi." << endl;
            continue;
        }

        while (true) {
            cout << "\nPilih menu konversi suhu:" << endl;
            cout << "1. Celcius ke Reamur, Farenheit, Kelvin" << endl;
            cout << "2. Reamur ke Celcius, Farenheit, Kelvin" << endl;
            cout << "3. Farenheit ke Celcius, Reamur, Kelvin" << endl;
            cout << "4. Kelvin ke Celcius, Reamur, Farenheit" << endl;
            cout << "5. Keluar" << endl;
            cout << "Masukkan pilihan menu: ";
            int menu;
            cin >> menu;

            float suhu;
            switch (menu) {
                case 1:
                    cout << "Masukkan suhu dalam Celcius: ";
                    cin >> suhu;
                    cout << "Hasil konversi:" << endl;
                    cout << "Reamur: " << celcius_ke_reamur(suhu) << endl;
                    cout << "Farenheit: " << celcius_ke_farenheit(suhu) << endl;
                    cout << "Kelvin: " << celcius_ke_kelvin(suhu) << endl;
                    break;
                case 2:
                    cout << "Masukkan suhu dalam Reamur: ";
                    cin >> suhu;
                    cout << "Hasil konversi:" << endl;
                    cout << "Celcius: " << reamur_ke_celcius(suhu) << endl;
                    cout << "Farenheit: " << reamur_ke_farenheit(suhu) << endl;
                    cout << "Kelvin: " << reamur_ke_kelvin(suhu) << endl;
                    break;
                case 3:
                    cout << "Masukkan suhu dalam Farenheit: ";
                    cin >> suhu;
                    cout << "Hasil konversi:" << endl;
                    cout << "Celcius: " << farenheit_ke_celcius(suhu) << endl;
                    cout << "Reamur: " << farenheit_ke_reamur(suhu) << endl;
                    cout << "Kelvin: " << farenheit_ke_kelvin(suhu) << endl;
                    break;
                case 4:
                    cout << "Masukkan suhu dalam Kelvin: ";
                    cin >> suhu;
                    cout << "Hasil konversi:" << endl;
                    cout << "Celcius: " << kelvin_ke_celcius(suhu) << endl;
                    cout << "Reamur: " << kelvin_ke_reamur(suhu) << endl;
                    cout << "Farenheit: " << kelvin_ke_farenheit(suhu) << endl;
                    break;
                case 5:
                    cout << "Terima kasih, program selesai." << endl;
                    return 0;
                default:
                    cout << "Pilihan tidak valid, silakan masukkan angka menu yang sesuai." << endl;
            }
        }
    }
}