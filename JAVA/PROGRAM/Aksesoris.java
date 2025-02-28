class Aksesoris extends Petshop {
    private String jenis;
    private String bahan;
    private String warna; 
    
    public Aksesoris() {
    }

    public Aksesoris(int id, String nama_produk, float harga_produk, int stok_produk, String jenis, String bahan, String warna) {
        super(id, nama_produk, harga_produk, stok_produk);
        this.jenis = jenis;
        this.bahan = bahan;
        this.warna = warna;
    }

    public String getJenis() {
        return jenis;
    }
    public void setJenis(String jenis) {
        this.jenis = jenis;
    }
    public String getBahan() {
        return bahan;
    }
    public void setBahan(String bahan) {
        this.bahan = bahan;
    }
    public String getWarna() {
        return warna;
    }
    public void setWarna(String warna) {
        this.warna = warna;
    }
    
}
