// RESPONSI PBO_KODE SOAL_XXX_NIM_NamaLengkap
class BukuCetak extends Buku {
    private int jumlahHalaman;
    private static final int DENDA_PER_HARI = 15000;

    public BukuCetak(String judul, int tahunTerbit, int jumlahHalaman) {
        super(judul, tahunTerbit);
        this.jumlahHalaman = jumlahHalaman;
    }

    @Override
    public int hitungDenda(int hariTerlambat) {
        return hariTerlambat * DENDA_PER_HARI;
    }

    @Override
    public String getDetail() {
        return "Buku Cetak | Judul: " + judul +
                ", Tahun: " + tahunTerbit +
                ", Halaman: " + jumlahHalaman;
    }
}
