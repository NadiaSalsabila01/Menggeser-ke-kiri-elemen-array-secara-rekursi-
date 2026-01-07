// RESPONSI PBO_KODE SOAL_XXX_NIM_NamaLengkap
class EBook extends Buku {
    private double ukuranFile;
    private static final int DENDA_PER_HARI = 5000;

    public EBook(String judul, int tahunTerbit, double ukuranFile) {
        super(judul, tahunTerbit);
        this.ukuranFile = ukuranFile;
    }

    @Override
    public int hitungDenda(int hariTerlambat) {
        return hariTerlambat * DENDA_PER_HARI;
    }

    @Override
    public String getDetail() {
        return "E-Book | Judul: " + judul +
                ", Tahun: " + tahunTerbit +
                ", Ukuran: " + ukuranFile + " MB";
    }
}
