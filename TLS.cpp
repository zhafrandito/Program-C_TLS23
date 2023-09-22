#include <iostream>
#include <iomanip>
#include <string>
#include <vector>

using namespace std;

int main() {
    vector<string> nama_barang;
    vector<double> harga_barang;
    string input;

    cout << "Transaksi hari ini (ketik end untuk mengakhiri)\n";
    cout << "\n";

    while (true) {
        string nama;
        double harga;

        cout << "Nama barang: ";
        getline(cin, input);

        if (input == "end") {
            break;
        }

        nama = input;

        cout << "Harga : Rp ";
        cin >> harga;

        nama_barang.push_back(nama);
        harga_barang.push_back(harga);

        cin.ignore();
    }

    cout << "\nDaftar Barang yang Dibeli:\n";
    cout << "---------------------------------------------\n";
    cout << setw(5) << left << "No." << setw(20) << left << "Nama Barang" << setw(15) << right << "Harga" << endl;
    cout << "---------------------------------------------\n";
    for (size_t i = 0; i < nama_barang.size(); ++i) {
        cout << setw(5) << left << (i + 1) << setw(20) << left << nama_barang[i] << "Rp" << setw(15) << fixed << setprecision(2) << right << harga_barang[i] << endl;
    }
    cout << "---------------------------------------------\n";

    return 0;
}
