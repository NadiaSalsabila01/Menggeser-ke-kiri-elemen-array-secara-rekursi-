// RESPONSI_123_Nadia Salsabila
package majujayamotor;

public class Kendaraan {
    protected String nama;
    protected double harga;

    public Kendaraan(String nama, double harga) {
        this.nama = nama;
        this.harga = harga;
    }

    public String tampilInfo() {
        return nama + " | Harga: " + harga;
    }
}
