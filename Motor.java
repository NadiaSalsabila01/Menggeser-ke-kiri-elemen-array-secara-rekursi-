// RESPONSI_123_Nadia Salsabila
package majujayamotor;

public class Motor extends Kendaraan {
    private String jenis;

    public Motor(String nama, double harga, String jenis) {
        super(nama, harga);
        this.jenis = jenis;
    }

    @Override
    public String tampilInfo() {
        return "Motor : " + nama +
                " | Harga: " + harga +
                " | Jenis: " + jenis;
    }
}
