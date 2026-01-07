// RESPONSI PBO_KODE SOAL_XXX_NIM_NamaLengkap
import java.io.FileWriter;
import java.io.IOException;
import java.util.ArrayList;
import java.util.InputMismatchException;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        ArrayList<Buku> daftarBuku = new ArrayList<>();
        boolean lanjut = true;

        while (lanjut) {
            System.out.println("\n=== MENU PEMINJAMAN ===");
            System.out.println("1. Buku Cetak");
            System.out.println("2. E-Book");
            System.out.print("Pilih menu: ");

            int pilihan;
            try {
                pilihan = sc.nextInt();
                sc.nextLine();
            } catch (InputMismatchException e) {
                System.out.println("Input harus angka!");
                sc.nextLine();
                continue;
            }

            System.out.print("Judul Buku: ");
            String judul = sc.nextLine();

            int tahun;
            while (true) {
                try {
                    System.out.print("Tahun Terbit: ");
                    tahun = sc.nextInt();
                    if (tahun < 0) throw new Exception();
                    break;
                } catch (Exception e) {
                    System.out.println("Input tidak valid!");
                    sc.nextLine();
                }
            }

            if (pilihan == 1) {
                int halaman;
                while (true) {
                    try {
                        System.out.print("Jumlah Halaman: ");
                        halaman = sc.nextInt();
                        if (halaman < 0) throw new Exception();
                        break;
                    } catch (Exception e) {
                        System.out.println("Input tidak valid!");
                        sc.nextLine();
                    }
                }
                daftarBuku.add(new BukuCetak(judul, tahun, halaman));

            } else if (pilihan == 2) {
                double ukuran;
                while (true) {
                    try {
                        System.out.print("Ukuran File (MB): ");
                        ukuran = sc.nextDouble();
                        if (ukuran < 0) throw new Exception();
                        break;
                    } catch (Exception e) {
                        System.out.println("Input tidak valid!");
                        sc.nextLine();
                    }
                }
                daftarBuku.add(new EBook(judul, tahun, ukuran));
            } else {
                System.out.println("Menu tidak tersedia!");
                continue;
            }

            System.out.print("Tambah buku lagi? (y/n): ");
            lanjut = sc.next().equalsIgnoreCase("y");
            sc.nextLine();
        }

        int hariTerlambat;
        while (true) {
            try {
                System.out.print("\nJumlah hari keterlambatan: ");
                hariTerlambat = sc.nextInt();
                if (hariTerlambat < 0) throw new Exception();
                break;
            } catch (Exception e) {
                System.out.println("Input tidak valid!");
                sc.nextLine();
            }
        }

        int totalDenda = 0;

        System.out.println("\n=== DAFTAR BUKU ===");
        for (Buku b : daftarBuku) {
            int denda = b.hitungDenda(hariTerlambat);
            totalDenda += denda;
            System.out.println(b.getDetail());
            System.out.println("Denda: Rp " + denda);
        }

        System.out.println("\nTotal Denda: Rp " + totalDenda);

        try (FileWriter fw = new FileWriter("data_peminjaman.txt")) {
            for (Buku b : daftarBuku) {
                fw.write(b.getDetail() + "\n");
            }
            fw.write("Hari Terlambat: " + hariTerlambat + "\n");
            fw.write("Total Denda: Rp " + totalDenda);
            System.out.println("\nData berhasil tersimpan ke txt");
        } catch (IOException e) {
            System.out.println("Gagal menyimpan file!");
        }
    }
}
