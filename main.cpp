#include <iostream>
#include "linkedlist.h"
using namespace std;

int main() {
    int pilihan;

    do {
        cout << "\n=== Menu Data KTP ===" << endl;
        cout << "1. Tambah Data KTP" << endl;
        cout << "2. Tampilkan Data" << endl;
        cout << "3. Keluar" << endl;
        cout << "Pilih: ";
        cin >> pilihan;
        cin.ignore();

        if (pilihan == 1) {
            KTP ktpBaru;

            cout << "Masukkan NIK: ";
            cin.getline(ktpBaru.nik, 20);
            cout << "Masukkan Nama: ";
            cin.getline(ktpBaru.nama, 50);
            cout << "Masukkan Tempat Lahir: ";
            cin.getline(ktpBaru.tempatLahir, 50);
            cout << "Masukkan Tanggal Lahir: ";
            cin.getline(ktpBaru.tanggalLahir, 20);
            cout << "Masukkan Jenis Kelamin: ";
            cin.getline(ktpBaru.jenisKelamin, 15);
            cout << "Masukkan Golongan Darah: ";
            cin.getline(ktpBaru.golonganDarah, 5);

            cout << "Masukkan RT: ";
            cin >> ktpBaru.rt;
            cout << "Masukkan RW: ";
            cin >> ktpBaru.rw;
            cin.ignore();

            cout << "Masukkan Alamat: ";
            cin.getline(ktpBaru.alamat, 100);
            cout << "Masukkan Kelurahan: ";
            cin.getline(ktpBaru.kelurahan, 50);
            cout << "Masukkan Kecamatan: ";
            cin.getline(ktpBaru.kecamatan, 50);
            cout << "Masukkan Agama: ";
            cin.getline(ktpBaru.agama, 20);
            cout << "Masukkan Status Perkawinan: ";
            cin.getline(ktpBaru.statusPerkawinan, 20);
            cout << "Masukkan Pekerjaan: ";
            cin.getline(ktpBaru.pekerjaan, 50);
            cout << "Masukkan Kewarganegaraan: ";
            cin.getline(ktpBaru.kewarganegaraan, 20);
            cout << "Masukkan Berlaku Hingga: ";
            cin.getline(ktpBaru.berlakuHingga, 20);

            addArray(ktpBaru);
            addLinkedList(ktpBaru);

            cout << "\nData berhasil ditambahkan!" << endl;
        }
        else if (pilihan == 2) {
            cout << "\n=== Data dalam Array ===\n";
            tampilArray();

            cout << "\n=== Data dalam Linked List ===\n";
            tampilLinkedList();
        }

    } while (pilihan != 3);

    return 0;
}
