#include <iostream>
#include <string>
using namespace std;

// ==================== CLASS TRANSPORTASI ====================
class Transportasi {
protected:
    string nama;
    string tujuan[3];
    int harga[3];
public:
    Transportasi(string n, string t1, string t2, string t3, int h1, int h2, int h3) {
        nama = n;
        tujuan[0] = t1; tujuan[1] = t2; tujuan[2] = t3;
        harga[0] = h1;  harga[1] = h2;  harga[2] = h3;
    }

    void tampilkanMenu() {
        cout << "\n=== Tiket " << nama << " ===" << endl;
        for (int i = 0; i < 3; i++) {
            cout << i + 1 << ". Tujuan " << tujuan[i]
                 << " - Harga: Rp" << harga[i] << endl;
        }
    }

    int getHarga(int pilihan) {
        return harga[pilihan - 1];
    }

    string getTujuan(int pilihan) {
        return tujuan[pilihan - 1];
    }

    string getNama() {
        return nama;
    }
};

// ==================== DETAIL PESAWAT ====================
class PesawatDetail {
public:
    string namaMaskapai;
    string kodePesawat;
    string asal, tujuan;
    string tglBerangkat, blnBerangkat, thnBerangkat, jamBerangkat;
    string tglDatang, blnDatang, thnDatang, jamDatang;
    int harga;

    PesawatDetail(string nama, string kode, string as, string tuju,
                  string tglB, string blnB, string thnB, string jamB,
                  string tglD, string blnD, string thnD, string jamD,
                  int h) {
        namaMaskapai = nama;
        kodePesawat = kode;
        asal = as;
        tujuan = tuju;
        tglBerangkat = tglB; blnBerangkat = blnB; thnBerangkat = thnB; jamBerangkat = jamB;
        tglDatang = tglD; blnDatang = blnD; thnDatang = thnD; jamDatang = jamD;
        harga = h;
    }

    void tampilkanInfo() {
        cout << "Maskapai  : " << namaMaskapai << " (" << kodePesawat << ")\n";
        cout << "Rute      : " << asal << " -> " << tujuan << "\n";
        cout << "Berangkat : " << tglBerangkat << " " << blnBerangkat << " " << thnBerangkat
             << ", Jam " << jamBerangkat << endl;
        cout << "Tiba      : " << tglDatang << " " << blnDatang << " " << thnDatang
             << ", Jam " << jamDatang << endl;
        cout << "Harga     : Rp" << harga << endl;
    }
};

// ==================== DETAIL KERETA ====================
class KeretaDetail {
public:
    string namaKereta, kodeKereta, stasiunAwal, stasiunTujuan;
    string tglBerangkat, blnBerangkat, thnBerangkat, jamBerangkat;
    string tglDatang, blnDatang, thnDatang, jamDatang;
    int harga;

    KeretaDetail(string nama, string kode, string awal, string tujuan,
                 string tB, string bB, string thB, string jB,
                 string tD, string bD, string thD, string jD,
                 int h) {
        namaKereta = nama;
        kodeKereta = kode;
        stasiunAwal = awal;
        stasiunTujuan = tujuan;
        tglBerangkat = tB; blnBerangkat = bB; thnBerangkat = thB; jamBerangkat = jB;
        tglDatang = tD; blnDatang = bD; thnDatang = thD; jamDatang = jD;
        harga = h;
    }

    void tampilkanInfo() {
        cout << "Kereta   : " << namaKereta << " (" << kodeKereta << ")\n";
        cout << "Rute     : " << stasiunAwal << " -> " << stasiunTujuan << "\n";
        cout << "Berangkat: " << tglBerangkat << " " << blnBerangkat << " "
             << thnBerangkat << ", Jam " << jamBerangkat << endl;
        cout << "Tiba     : " << tglDatang << " " << blnDatang << " " << thnDatang
             << ", Jam " << jamDatang << endl;
        cout << "Harga    : Rp" << harga << endl;
    }
};

// ==================== DETAIL BUS ====================
class BusDetail {
public:
    string namaBus, kodeBus, terminalAwal, terminalTujuan;
    string tglBerangkat, blnBerangkat, thnBerangkat, jamBerangkat;
    string tglDatang, blnDatang, thnDatang, jamDatang;
    int harga;

    BusDetail(string nama, string kode, string awal, string tujuan,
              string tB, string bB, string thB, string jB,
              string tD, string bD, string thD, string jD,
              int h) {
        namaBus = nama;
        kodeBus = kode;
        terminalAwal = awal;
        terminalTujuan = tujuan;
        tglBerangkat = tB; blnBerangkat = bB; thnBerangkat = thB; jamBerangkat = jB;
        tglDatang = tD; blnDatang = bD; thnDatang = thD; jamDatang = jD;
        harga = h;
    }

    void tampilkanInfo() {
        cout << "Bus      : " << namaBus << " (" << kodeBus << ")\n";
        cout << "Rute     : " << terminalAwal << " -> " << terminalTujuan << "\n";
        cout << "Berangkat: " << tglBerangkat << " " << blnBerangkat << " "
             << thnBerangkat << ", Jam " << jamBerangkat << endl;
        cout << "Tiba     : " << tglDatang << " " << blnDatang << " "
             << thnDatang << ", Jam " << jamDatang << endl;
        cout << "Harga    : Rp" << harga << endl;
    }
};

// ==================== DETAIL KAPAL ====================
class KapalDetail {
public:
    string namaKapal, kodeKapal, pelabuhanAwal, pelabuhanTujuan;
    string tglBerangkat, blnBerangkat, thnBerangkat, jamBerangkat;
    string tglDatang, blnDatang, thnDatang, jamDatang;
    int harga;

    KapalDetail(string nama, string kode, string awal, string tujuan,
                string tB, string bB, string thB, string jB,
                string tD, string bD, string thD, string jD,
                int h) {
        namaKapal = nama;
        kodeKapal = kode;
        pelabuhanAwal = awal;
        pelabuhanTujuan = tujuan;
        tglBerangkat = tB; blnBerangkat = bB; thnBerangkat = thB; jamBerangkat = jB;
        tglDatang = tD; blnDatang = bD; thnDatang = thD; jamDatang = jD;
        harga = h;
    }

    void tampilkanInfo() {
        cout << "Kapal     : " << namaKapal << " (" << kodeKapal << ")\n";
        cout << "Rute      : " << pelabuhanAwal << " -> " << pelabuhanTujuan << "\n";
        cout << "Berangkat : " << tglBerangkat << " " << blnBerangkat << " "
             << thnBerangkat << ", Jam " << jamBerangkat << endl;
        cout << "Tiba      : " << tglDatang << " " << blnDatang << " "
             << thnDatang << ", Jam " << jamDatang << endl;
        cout << "Harga     : Rp" << harga << endl;
    }
};

// ==================== SINGLE LINKED LIST ====================
struct Node {
    string namaPemesan;
    string namaTransportasi;
    string tujuan;
    int jumlahTiket;
    int totalHarga;
    Node* berikut;
};

void tambahPemesanan(Node*& head, string namaPemesan, string transport, string tujuan, int jumlah, int total) {
    Node* baru = new Node;
    baru->namaPemesan = namaPemesan;
    baru->namaTransportasi = transport;
    baru->tujuan = tujuan;
    baru->jumlahTiket = jumlah;
    baru->totalHarga = total;
    baru->berikut = nullptr;

    if (head == nullptr) head = baru;
    else {
        Node* temp = head;
        while (temp->berikut != nullptr)
            temp = temp->berikut;
        temp->berikut = baru;
    }
}

void tampilkanRiwayat(Node* head) {
    if (head == nullptr) {
        cout << "\nBelum ada riwayat pemesanan.\n";
        return;
    }
    cout << "\n=========== RIWAYAT PEMESANAN (Single Linked List) ===========\n";
    Node* temp = head;
    int no = 1;
    while (temp != nullptr) {
        cout << no++ << ". " << temp->namaPemesan << " | " << temp->namaTransportasi
             << " | " << temp->tujuan << " | Tiket: " << temp->jumlahTiket
             << " | Total: Rp" << temp->totalHarga << endl;
        temp = temp->berikut;
    }
}

// (Single search, update, delete tetap ADA di bagian 2)


// ==================== STACK RIWAYAT TRANSAKSI ====================
struct StackNode {
    string namaPemesan;
    string namaTransportasi;
    string tujuan;
    int jumlahTiket;
    int totalHarga;
    StackNode* next;
};

StackNode* topStack = nullptr;

void pushStack(string nama, string trans, string tujuan, int jumlah, int total) {
    StackNode* baru = new StackNode;
    baru->namaPemesan = nama;
    baru->namaTransportasi = trans;
    baru->tujuan = tujuan;
    baru->jumlahTiket = jumlah;
    baru->totalHarga = total;
    baru->next = topStack;
    topStack = baru;

    cout << "\n(PUSH) Riwayat transaksi ditambahkan ke STACK.\n";
}

void popStack() {
    if (topStack == nullptr) {
        cout << "\nSTACK kosong! Tidak ada transaksi yang dapat dibatalkan.\n";
        return;
    }

    StackNode* hapus = topStack;
    topStack = topStack->next;

    cout << "\n(POP) Transaksi terakhir dibatalkan!\n";
    cout << "Nama: " << hapus->namaPemesan << endl;
    cout << "Transportasi: " << hapus->namaTransportasi << endl;
    cout << "Tujuan: " << hapus->tujuan << endl;
    cout << "Tiket: " << hapus->jumlahTiket << endl;
    cout << "Total: Rp" << hapus->totalHarga << endl;

    delete hapus;
}

void tampilkanStack() {
    if (topStack == nullptr) {
        cout << "\nSTACK kosong! Belum ada riwayat transaksi.\n";
        return;
    }

    cout << "\n=========== STACK RIWAYAT TRANSAKSI ===========\n";
    StackNode* temp = topStack;
    int no = 1;
    while (temp != nullptr) {
        cout << no++ << ". " << temp->namaPemesan
             << " | " << temp->namaTransportasi
             << " | " << temp->tujuan
             << " | Tiket: " << temp->jumlahTiket
             << " | Total: Rp" << temp->totalHarga << endl;
        temp = temp->next;
    }
}

void clearStack() {
    while (topStack != nullptr) {
        StackNode* temp = topStack;
        topStack = topStack->next;
        delete temp;
    }
}

// ==================== SEARCH (Single Linked List) ====================
void cariPemesanan(Node* head, string namaCari) {
    Node* temp = head;
    bool ketemu = false;

    cout << "\nHasil pencarian untuk '" << namaCari << "':\n";
    while (temp != nullptr) {
        if (temp->namaPemesan == namaCari) {
            cout << "Nama: " << temp->namaPemesan
                 << " | Transportasi: " << temp->namaTransportasi
                 << " | Tujuan: " << temp->tujuan
                 << " | Tiket: " << temp->jumlahTiket
                 << " | Total: Rp" << temp->totalHarga << endl;
            ketemu = true;
        }
        temp = temp->berikut;
    }
    if (!ketemu) cout << "Data tidak ditemukan.\n";
}

// ==================== UPDATE (Single Linked List) ====================
void ubahPemesanan(Node* head, string namaUbah) {
    Node* temp = head;
    bool ketemu = false;

    while (temp != nullptr) {
        if (temp->namaPemesan == namaUbah) {
            cout << "\nData ditemukan. Masukkan data baru:\n";
            cout << "Nama baru: ";
            getline(cin, temp->namaPemesan);
            cout << "Transportasi baru: ";
            getline(cin, temp->namaTransportasi);
            cout << "Tujuan baru: ";
            getline(cin, temp->tujuan);
            cout << "Jumlah tiket baru: ";
            cin >> temp->jumlahTiket;
            cout << "Total harga baru: ";
            cin >> temp->totalHarga;
            cin.ignore();
            cout << "Data berhasil diubah!\n";
            ketemu = true;
            break;
        }
        temp = temp->berikut;
    }

    if (!ketemu) cout << "Data tidak ditemukan.\n";
}

// ==================== DELETE (Single Linked List) ====================
void hapusPemesanan(Node*& head, string namaHapus) {
    if (head == nullptr) {
        cout << "Belum ada data.\n";
        return;
    }

    Node* temp = head;
    Node* prev = nullptr;

    while (temp != nullptr && temp->namaPemesan != namaHapus) {
        prev = temp;
        temp = temp->berikut;
    }

    if (temp == nullptr) {
        cout << "Data tidak ditemukan.\n";
        return;
    }

    if (prev == nullptr) head = temp->berikut;
    else prev->berikut = temp->berikut;

    delete temp;
    cout << "Data berhasil dihapus!\n";
}


// ==================== REKURSI TOTAL HARGA ====================
int hitungTotal(int harga[], int n) {
    if (n == 0) return 0;
    return harga[n - 1] + hitungTotal(harga, n - 1);
}


// ==================== CIRCULAR LINKED LIST ====================
struct NodeCircular {
    string namaPemesan;
    string namaTransportasi;
    string tujuan;
    int jumlahTiket;
    int totalHarga;
    NodeCircular* berikut;
};

void tambahCircular(NodeCircular*& head, string namaPemesan, string transport, string tujuan, int jumlah, int total) {
    NodeCircular* baru = new NodeCircular;
    baru->namaPemesan = namaPemesan;
    baru->namaTransportasi = transport;
    baru->tujuan = tujuan;
    baru->jumlahTiket = jumlah;
    baru->totalHarga = total;

    if (head == nullptr) {
        head = baru;
        baru->berikut = head;
    } else {
        NodeCircular* temp = head;
        while (temp->berikut != head)
            temp = temp->berikut;
        temp->berikut = baru;
        baru->berikut = head;
    }
}

void tampilkanCircular(NodeCircular* head) {
    if (head == nullptr) {
        cout << "\nBelum ada data Circular Linked List.\n";
        return;
    }

    cout << "\n=========== RIWAYAT PEMESANAN (Circular Linked List) ===========\n";
    NodeCircular* temp = head;
    int no = 1;

    do {
        cout << no++ << ". " << temp->namaPemesan
             << " | " << temp->namaTransportasi
             << " | " << temp->tujuan
             << " | Tiket: " << temp->jumlahTiket
             << " | Total: Rp" << temp->totalHarga << endl;
        temp = temp->berikut;

    } while (temp != head);
}

void cariCircular(NodeCircular* head, string namaCari) {
    if (head == nullptr) {
        cout << "Belum ada data Circular Linked List.\n";
        return;
    }

    NodeCircular* temp = head;
    bool ketemu = false;

    cout << "\nHasil pencarian Circular untuk '" << namaCari << "':\n";

    do {
        if (temp->namaPemesan == namaCari) {
            cout << "Nama: " << temp->namaPemesan
                 << " | Transportasi: " << temp->namaTransportasi
                 << " | Tujuan: " << temp->tujuan
                 << " | Tiket: " << temp->jumlahTiket
                 << " | Total: Rp" << temp->totalHarga << endl;
            ketemu = true;
        }
        temp = temp->berikut;

    } while (temp != head);

    if (!ketemu) cout << "Data tidak ditemukan.\n";
}

void ubahCircular(NodeCircular* head, string namaUbah) {
    if (head == nullptr) {
        cout << "Belum ada data Circular.\n";
        return;
    }

    NodeCircular* temp = head;
    bool ketemu = false;

    do {
        if (temp->namaPemesan == namaUbah) {
            cout << "\nData ditemukan. Masukkan data baru:\n";
            cout << "Nama baru: ";
            getline(cin, temp->namaPemesan);
            cout << "Transportasi baru: ";
            getline(cin, temp->namaTransportasi);
            cout << "Tujuan baru: ";
            getline(cin, temp->tujuan);
            cout << "Jumlah tiket baru: ";
            cin >> temp->jumlahTiket;
            cout << "Total harga baru: ";
            cin >> temp->totalHarga;
            cin.ignore();
            cout << "Data berhasil diubah!\n";
            ketemu = true;
            break;
        }
        temp = temp->berikut;

    } while (temp != head);

    if (!ketemu) cout << "Data tidak ditemukan.\n";
}

void hapusCircular(NodeCircular*& head, string namaHapus) {
    if (head == nullptr) {
        cout << "Belum ada data Circular.\n";
        return;
    }

    NodeCircular* temp = head;
    NodeCircular* prev = nullptr;

    do {
        if (temp->namaPemesan == namaHapus) break;
        prev = temp;
        temp = temp->berikut;

    } while (temp != head);

    if (temp->namaPemesan != namaHapus) {
        cout << "Data tidak ditemukan.\n";
        return;
    }

    if (temp == head && prev == nullptr) {
        delete head;
        head = nullptr;
    } else if (temp == head) {
        NodeCircular* last = head;
        while (last->berikut != head)
            last = last->berikut;

        last->berikut = head->berikut;
        head = head->berikut;
        delete temp;

    } else {
        prev->berikut = temp->berikut;
        delete temp;
    }

    cout << "Data berhasil dihapus dari Circular Linked List!\n";
}


// ==================== DOUBLE LINKED LIST ====================
struct NodeDLL {
    string namaPemesan;
    string keterangan;
    NodeDLL* berikut;
    NodeDLL* sebelum;
};

NodeDLL* headDLL = nullptr;
NodeDLL* tailDLL = nullptr;

void tambahPrioritas(string nama, string ket) {
    NodeDLL* baru = new NodeDLL;
    baru->namaPemesan = nama;
    baru->keterangan = ket;
    baru->berikut = nullptr;
    baru->sebelum = nullptr;

    if (headDLL == nullptr) {
        headDLL = tailDLL = baru;
    } else {
        tailDLL->berikut = baru;
        baru->sebelum = tailDLL;
        tailDLL = baru;
    }
}

void tampilkanPrioritasMaju() {
    if (headDLL == nullptr) {
        cout << "\nDaftar Prioritas kosong.\n";
        return;
    }

    cout << "\n======== DAFTAR PRIORITAS (Maju) ========\n";
    NodeDLL* temp = headDLL;
    int no = 1;

    while (temp != nullptr) {
        cout << no++ << ". " << temp->namaPemesan
             << " | Status: " << temp->keterangan << endl;
        temp = temp->berikut;
    }
}

void tampilkanPrioritasMundur() {
    if (tailDLL == nullptr) {
        cout << "\nDaftar Prioritas kosong.\n";
        return;
    }

    cout << "\n======== DAFTAR PRIORITAS (Mundur) ========\n";
    NodeDLL* temp = tailDLL;
    int no = 1;

    while (temp != nullptr) {
        cout << no++ << ". " << temp->namaPemesan
             << " | Status: " << temp->keterangan << endl;
        temp = temp->sebelum;
    }
}


// ==================== MULAI PROGRAM UTAMA ====================
int main() {
    int pilihanMenu, pilihanTransport, jumlahTiket, pilihanTujuan;
    string namaPemesan;

    Node* head = nullptr;
    NodeCircular* headCircular = nullptr;

    string daftarTransportasi[4] = {"Pesawat", "Kereta", "Bus", "Kapal"};

    do {
        cout << "\n========================================\n";
        cout << "  SISTEM PEMESANAN TIKET TRANSPORTASI\n";
        cout << "========================================\n";
        cout << "1. Pesan Tiket (CREATE)\n";
        cout << "2. Tampilkan Riwayat (Single Linked List)\n";
        cout << "3. Cari Data Pemesanan (SEARCH)\n";
        cout << "4. Ubah Data Pemesanan (UPDATE)\n";
        cout << "5. Hapus Data Pemesanan (DELETE)\n";
        cout << "7. Kelola Riwayat Selesai (Circular Linked List)\n";
        cout << "8. Kelola Daftar Prioritas (Double Linked List)\n";
        cout << "9. Kelola Stack Riwayat Transaksi\n";
        cout << "6. Keluar\n";
        cout << "Pilih menu: ";
        cin >> pilihanMenu;
        cin.ignore();

        if (pilihanMenu == 1) {
            cout << "\nDaftar Transportasi (Array Statis):\n";
            for (int i = 0; i < 4; i++)
                cout << i + 1 << ". " << daftarTransportasi[i] << endl;

            Transportasi pesawat("Pesawat", "Jakarta", "Bali", "Surabaya", 1500000, 1200000, 900000);
            Transportasi kereta("Kereta", "Bandung", "Yogyakarta", "Malang", 300000, 350000, 400000);
            Transportasi bus("Bus", "Semarang", "Solo", "Tegal", 150000, 170000, 120000);
            Transportasi kapal("Kapal", "Makassar", "Balikpapan", "Ambon", 700000, 850000, 950000);

            // Detail Pesawat
            PesawatDetail flight1("Garuda", "GA-123", "Jakarta", "Bali", "5", "Nov", "2025", "08:00",
                                  "5", "Nov", "2025", "10:30", 1500000);
            PesawatDetail flight2("Lion Air", "JT-456", "Jakarta", "Surabaya", "6", "Nov", "2025", "09:00",
                                  "6", "Nov", "2025", "10:15", 900000);
            PesawatDetail flight3("Air Asia", "QZ-789", "Bandung", "Bali", "7", "Nov", "2025", "11:00",
                                  "7", "Nov", "2025", "13:20", 1200000);
            PesawatDetail flights[] = {flight1, flight2, flight3};

            cout << "\nPilih jenis transportasi (1-4): ";
            cin >> pilihanTransport;
            cin.ignore();

            cout << "\nMasukkan nama pemesan: ";
            getline(cin, namaPemesan);

            // ================= PESAWAT =================
            if (pilihanTransport == 1) {
                cout << "\n=== Pilih Penerbangan Tersedia ===\n";
                cout << "1.\n"; flights[0].tampilkanInfo();
                cout << "\n2.\n"; flights[1].tampilkanInfo();
                cout << "\n3.\n"; flights[2].tampilkanInfo();

                int pilihanPesawat;
                cout << "\nPilih penerbangan (1-3): ";
                cin >> pilihanPesawat;
                cin.ignore();

                if (pilihanPesawat < 1 || pilihanPesawat > 3) {
                    cout << "Pilihan tidak valid!\n";
                    continue;
                }

                PesawatDetail* pilihan = &flights[pilihanPesawat - 1];

                cout << "Masukkan jumlah tiket: ";
                cin >> jumlahTiket;
                cin.ignore();

                int daftarHarga[100];
                for (int i = 0; i < jumlahTiket; i++)
                    daftarHarga[i] = pilihan->harga;

                string* namaPenumpang = new string[jumlahTiket];
                cout << "\nMasukkan nama penumpang:\n";
                for (int i = 0; i < jumlahTiket; i++) {
                    cout << "Penumpang ke-" << i + 1 << ": ";
                    getline(cin, namaPenumpang[i]);
                }

                int total = hitungTotal(daftarHarga, jumlahTiket);

                string namaTujuan = pilihan->asal + " ke " + pilihan->tujuan;
                string namaTrans = pilihan->namaMaskapai + " (" + pilihan->kodePesawat + ")";

                tambahPemesanan(head, namaPemesan, namaTrans, namaTujuan, jumlahTiket, total);
                tambahCircular(headCircular, namaPemesan, namaTrans, namaTujuan, jumlahTiket, total);
                pushStack(namaPemesan, namaTrans, namaTujuan, jumlahTiket, total);

                cout << "\nPemesanan berhasil ditambahkan.\n";

                delete[] namaPenumpang;
            }

            // ================= KERETA =================
            else if (pilihanTransport == 2) {
                KeretaDetail k1("Argo Bromo", "KA-101", "Jakarta", "Surabaya",
                                "10", "Nov", "2025", "07:30",
                                "10", "Nov", "2025", "15:45", 350000);
                KeretaDetail k2("Taksaka", "KA-202", "Yogyakarta", "Bandung",
                                "11", "Nov", "2025", "09:00",
                                "11", "Nov", "2025", "16:20", 300000);
                KeretaDetail k3("Mutiara Selatan", "KA-303", "Bandung", "Malang",
                                "12", "Nov", "2025", "06:45",
                                "12", "Nov", "2025", "18:30", 400000);

                KeretaDetail daftarKereta[] = {k1, k2, k3};

                cout << "\n=== Pilih Jadwal Kereta ===\n";
                for (int i = 0; i < 3; i++) {
                    cout << "\n" << i + 1 << ". ";
                    daftarKereta[i].tampilkanInfo();
                }

                int pilihanKereta;
                cout << "\nPilih kereta (1-3): ";
                cin >> pilihanKereta;
                cin.ignore();

                if (pilihanKereta < 1 || pilihanKereta > 3) {
                    cout << "Pilihan tidak valid!\n";
                    continue;
                }

                KeretaDetail* pilihK = &daftarKereta[pilihanKereta - 1];

                cout << "Masukkan jumlah tiket: ";
                cin >> jumlahTiket;
                cin.ignore();

                int daftarHarga[100];
                for (int i = 0; i < jumlahTiket; i++)
                    daftarHarga[i] = pilihK->harga;

                string* namaPenumpang = new string[jumlahTiket];
                cout << "\nMasukkan nama penumpang:\n";
                for (int i = 0; i < jumlahTiket; i++) {
                    cout << "Penumpang ke-" << i + 1 << ": ";
                    getline(cin, namaPenumpang[i]);
                }

                int total = hitungTotal(daftarHarga, jumlahTiket);

                string namaTrans = pilihK->namaKereta + " (" + pilihK->kodeKereta + ")";
                string namaTujuan = pilihK->stasiunAwal + " ke " + pilihK->stasiunTujuan;

                tambahPemesanan(head, namaPemesan, namaTrans, namaTujuan, jumlahTiket, total);
                tambahCircular(headCircular, namaPemesan, namaTrans, namaTujuan, jumlahTiket, total);
                pushStack(namaPemesan, namaTrans, namaTujuan, jumlahTiket, total);

                cout << "\nPemesanan berhasil ditambahkan.\n";

                delete[] namaPenumpang;
            }

            // ================= BUS =================
            else if (pilihanTransport == 3) {
                BusDetail b1("Sinar Jaya", "BS-101", "Jakarta", "Semarang",
                             "13", "Nov", "2025", "06:00",
                             "13", "Nov", "2025", "14:30", 150000);
                BusDetail b2("Rosalia Indah", "BS-202", "Bandung", "Solo",
                             "14", "Nov", "2025", "08:00",
                             "14", "Nov", "2025", "16:45", 170000);
                BusDetail b3("Harapan Jaya", "BS-303", "Yogyakarta", "Tegal",
                             "15", "Nov", "2025", "07:30",
                             "15", "Nov", "2025", "15:00", 120000);

                BusDetail daftarBus[] = {b1, b2, b3};

                cout << "\n=== Pilih Jadwal Bus ===\n";
                for (int i = 0; i < 3; i++) {
                    cout << "\n" << i + 1 << ". ";
                    daftarBus[i].tampilkanInfo();
                }

                int pilihanBus;
                cout << "\nPilih bus (1-3): ";
                cin >> pilihanBus;
                cin.ignore();

                if (pilihanBus < 1 || pilihanBus > 3) {
                    cout << "Pilihan tidak valid!\n";
                    continue;
                }

                BusDetail* pilihB = &daftarBus[pilihanBus - 1];

                cout << "Masukkan jumlah tiket: ";
                cin >> jumlahTiket;
                cin.ignore();

                int daftarHarga[100];
                for (int i = 0; i < jumlahTiket; i++)
                    daftarHarga[i] = pilihB->harga;

                string* namaPenumpang = new string[jumlahTiket];
                cout << "\nMasukkan nama penumpang:\n";
                for (int i = 0; i < jumlahTiket; i++) {
                    cout << "Penumpang ke-" << i + 1 << ": ";
                    getline(cin, namaPenumpang[i]);
                }

                int total = hitungTotal(daftarHarga, jumlahTiket);

                string namaTrans = pilihB->namaBus + " (" + pilihB->kodeBus + ")";
                string namaTujuan = pilihB->terminalAwal + " ke " + pilihB->terminalTujuan;

                tambahPemesanan(head, namaPemesan, namaTrans, namaTujuan, jumlahTiket, total);
                tambahCircular(headCircular, namaPemesan, namaTrans, namaTujuan, jumlahTiket, total);
                pushStack(namaPemesan, namaTrans, namaTujuan, jumlahTiket, total);

                cout << "\nPemesanan berhasil ditambahkan.\n";

                delete[] namaPenumpang;
            }

            // ================= KAPAL =================
            else if (pilihanTransport == 4) {
                KapalDetail kpl1("KM Labobar", "KP-001", "Makassar", "Balikpapan",
                                 "16", "Nov", "2025", "08:00",
                                 "16", "Nov", "2025", "20:00", 700000);
                KapalDetail kpl2("KM Sinabung", "KP-002", "Surabaya", "Ambon",
                                 "17", "Nov", "2025", "09:00",
                                 "18", "Nov", "2025", "07:00", 850000);
                KapalDetail kpl3("KM Dobonsolo", "KP-003", "Jakarta", "Makassar",
                                 "18", "Nov", "2025", "10:00",
                                 "19", "Nov", "2025", "13:30", 950000);

                KapalDetail daftarKapal[] = {kpl1, kpl2, kpl3};

                cout << "\n=== Pilih Jadwal Kapal ===\n";
                for (int i = 0; i < 3; i++) {
                    cout << "\n" << i + 1 << ". ";
                    daftarKapal[i].tampilkanInfo();
                }

                int pilihanKapal;
                cout << "\nPilih kapal (1-3): ";
                cin >> pilihanKapal;
                cin.ignore();

                if (pilihanKapal < 1 || pilihanKapal > 3) {
                    cout << "Pilihan tidak valid!\n";
                    continue;
                }

                KapalDetail* pilihKapal = &daftarKapal[pilihanKapal - 1];

                cout << "Masukkan jumlah tiket: ";
                cin >> jumlahTiket;
                cin.ignore();

                int daftarHarga[100];
                for (int i = 0; i < jumlahTiket; i++)
                    daftarHarga[i] = pilihKapal->harga;

                string* namaPenumpang = new string[jumlahTiket];
                cout << "\nMasukkan nama penumpang:\n";
                for (int i = 0; i < jumlahTiket; i++) {
                    cout << "Penumpang ke-" << i + 1 << ": ";
                    getline(cin, namaPenumpang[i]);
                }

                int total = hitungTotal(daftarHarga, jumlahTiket);

                string namaTrans = pilihKapal->namaKapal + " (" + pilihKapal->kodeKapal + ")";
                string namaTujuan = pilihKapal->pelabuhanAwal + " ke " + pilihKapal->pelabuhanTujuan;

                tambahPemesanan(head, namaPemesan, namaTrans, namaTujuan, jumlahTiket, total);
                tambahCircular(headCircular, namaPemesan, namaTrans, namaTujuan, jumlahTiket, total);
                pushStack(namaPemesan, namaTrans, namaTujuan, jumlahTiket, total);

                cout << "\nPemesanan berhasil ditambahkan.\n";

                delete[] namaPenumpang;
            }

            else {
                cout << "Pilihan tidak valid!\n";
                continue;
            }
        }

        // ================= MENU 2—5 (Single) =================
        else if (pilihanMenu == 2)
            tampilkanRiwayat(head);
        else if (pilihanMenu == 3) {
            string cari;
            cout << "Masukkan nama yang ingin dicari: ";
            getline(cin, cari);
            cariPemesanan(head, cari);
        }
        else if (pilihanMenu == 4) {
            string ubah;
            cout << "Masukkan nama yang ingin diubah: ";
            getline(cin, ubah);
            ubahPemesanan(head, ubah);
        }
        else if (pilihanMenu == 5) {
            string hapus;
            cout << "Masukkan nama yang ingin dihapus: ";
            getline(cin, hapus);
            hapusPemesanan(head, hapus);
        }

        // ================= MENU 7 (CIRCULAR) =================
        else if (pilihanMenu == 7) {
            int s;
            cout << "\n--- CIRCULAR LINKED LIST ---\n";
            cout << "1. Tampilkan\n2. Cari\n3. Ubah\n4. Hapus\nPilih: ";
            cin >> s; cin.ignore();

            if (s == 1) tampilkanCircular(headCircular);
            else if (s == 2) {
                string cari;
                cout << "Masukkan nama: "; getline(cin, cari);
                cariCircular(headCircular, cari);
            }
            else if (s == 3) {
                string ubah;
                cout << "Masukkan nama: "; getline(cin, ubah);
                ubahCircular(headCircular, ubah);
            }
            else if (s == 4) {
                string hapus;
                cout << "Masukkan nama: "; getline(cin, hapus);
                hapusCircular(headCircular, hapus);
            }
        }

        // ================= MENU 8 (DLL) =================
        else if (pilihanMenu == 8) {
            int s;
            cout << "\n--- DOUBLE LINKED LIST ---\n";
            cout << "1. Tambah Prioritas\n2. Tampilkan Maju\n3. Tampilkan Mundur\nPilih: ";
            cin >> s; cin.ignore();

            if (s == 1) {
                string nama, ket;
                cout << "Nama: "; getline(cin, nama);
                cout << "Keterangan: "; getline(cin, ket);
                tambahPrioritas(nama, ket);
            }
            else if (s == 2) tampilkanPrioritasMaju();
            else if (s == 3) tampilkanPrioritasMundur();
        }

        // ================= MENU 9 (STACK) =================
        else if (pilihanMenu == 9) {
            int s;
            cout << "\n--- STACK RIWAYAT ---\n";
            cout << "1. Tampilkan Stack\n2. Batalkan Transaksi Terakhir (POP)\nPilih: ";
            cin >> s; cin.ignore();

            if (s == 1) tampilkanStack();
            else if (s == 2) popStack();
        }

        else if (pilihanMenu == 6)
            cout << "Terima kasih telah menggunakan sistem.\n";
        else
            cout << "Pilihan tidak valid!\n";

    } while (pilihanMenu != 6);

    // ================= BERSIHKAN MEMORI =================
    Node* temp;
    while (head != nullptr) {
        temp = head;
        head = head->berikut;
        delete temp;
    }

    if (headCircular != nullptr) {
        NodeCircular* cur = headCircular->berikut;
        while (cur != headCircular) {
            NodeCircular* next = cur->berikut;
            delete cur;
            cur = next;
        }
        delete headCircular;
    }

    NodeDLL* tmpDLL;
    while (headDLL != nullptr) {
        tmpDLL = headDLL;
        headDLL = headDLL->berikut;
        delete tmpDLL;
    }

    clearStack();

    return 0;
}