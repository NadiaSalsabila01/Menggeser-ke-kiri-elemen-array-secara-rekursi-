// RESPONSI PBO_KODE SOAL_XXX_NIM_NamaLengkap
abstract class Buku {
    protected String judul;
    protected int tahunTerbit;

    public Buku(String judul, int tahunTerbit) {
        this.judul = judul;
        this.tahunTerbit = tahunTerbit;
    }

    public abstract int hitungDenda(int hariTerlambat);

    public abstract String getDetail();
}
