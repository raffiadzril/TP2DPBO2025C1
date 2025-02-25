class Baju extends Aksesoris{
    private String untuk;
    private String size;
    private String merk;

    public Baju() {
    }
    public Baju(int id, String nama_produk, String kategori_produk, float harga_produk, String jenis, String bahan, String warna, String untuk, String size, String merk) {
        super(id, nama_produk, kategori_produk, harga_produk, jenis, bahan, warna);
        this.untuk = untuk;
        this.size = size;
        this.merk = merk;
    }
    public String getUntuk() {
        return untuk;
    }
    public void setUntuk(String untuk) {
        this.untuk = untuk;
    }
    public String getSize() {
        return size;
    }
    public void setSize(String size) {
        this.size = size;
    }
    public String getMerk() {
        return merk;
    }
    public void setMerk(String merk) {
        this.merk = merk;
    }
}
