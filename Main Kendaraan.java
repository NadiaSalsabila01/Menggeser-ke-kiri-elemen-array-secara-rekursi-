// RESPONSI_123_Nadia Salsabila
package majujayamotor;

import java.io.FileWriter;
import java.io.PrintWriter;
import java.util.ArrayList;
import java.util.Scanner;

public class Main {
    static ArrayList<Kendaraan> data = new ArrayList<>();
    static Scanner sc = new Scanner(System.in);

    public static void main(String[] args) {
        int menu;

        do {
            System.out.println("\n=================================");
            System.out.println("  SHOWROOM MAJU JAYA MOTOR");
            System.out.println("=================================");
            System.out.println("1. Tambah Kendaraan");
            System.out.println("2. Lihat Inventaris");
            System.out.println("3. Keluar");
            System.out.print("Pilih Menu : ");

            try {
                menu = sc.nextInt();
                sc.nextLine();

                switch (menu) {
                    case 1 -> menuTambah();
                    case 2 -> menuLihat();
                    case 3 -> System.out.println("Terima kasih telah menggunakan program");
                    default -> System.out.println("Menu tidak tersedia!");
                }
            } catch (Exception e) {
                System.out.println("Input harus berupa angka!");
                sc.nextLine();
                menu = 0;
            }
        } while (menu != 3);
    }

    static void menuTambah() {
        try {
            System.out.println("\n1. Mobil");
            System.out.println("2. Motor");
            System.out.print("Pilih Jenis Kendaraan : ");
            int pilih = sc.nextInt();
            sc.nextLine();

            System.out.print("Masukkan Nama Kendaraan : ");
            String nama = sc.nextLine();

            System.out.print("Masukkan Harga : ");
            double harga = sc.nextDouble();
            sc.nextLine();

            Kendaraan k = null;

            if (pilih == 1) {
                System.out.print("Masukkan Jumlah Pintu : ");
                int pintu = sc.nextInt();
                k = new Mobil(nama, harga, pintu);
            } else if (pilih == 2) {
                sc.nextLine();
                System.out.print("Masukkan Jenis Motor : ");
                String jenis = sc.nextLine();
                k = new Motor(nama, harga, jenis);
            }

            if (k != null) {
                data.add(k);
                simpanFile(k);
                System.out.println("Data kendaraan berhasil ditambahkan");
            }

        } catch (Exception e) {
            System.out.println("Terjadi kesalahan input!");
            sc.nextLine();
        }
    }

    static void menuLihat() {
        System.out.println("\n===== DATA INVENTARIS KENDARAAN =====");
        if (data.isEmpty()) {
            System.out.println("Data masih kosong");
        } else {
            for (Kendaraan k : data) {
                System.out.println(k.tampilInfo());
            }
        }
    }

    static void simpanFile(Kendaraan k) {
        try {
            PrintWriter pw = new PrintWriter(new FileWriter("inventaris.txt", true));
            pw.println(k.tampilInfo());
            pw.close();
        } catch (Exception e) {
            System.out.println("Gagal menyimpan file");
        }
    }
}
