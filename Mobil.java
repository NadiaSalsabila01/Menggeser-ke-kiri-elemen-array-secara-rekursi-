// RESPONSI_123_Nadia Salsabila
package majujayamotor;

public class Mobil extends Kendaraan {
    private int pintu;

    public Mobil(String nama, double harga, int pintu) {
        super(nama, harga);
        this.pintu = pintu;
    }

    @Override
    public String tampilInfo() {
        return "Mobil : " + nama +
                " | Harga: " + harga +
                " | Jumlah Pintu: " + pintu;
    }
}
