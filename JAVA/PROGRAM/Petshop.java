class Petshop { // Mendeklarasikan kelas Petshop
    private int id; // Mendeklarasikan variabel id dengan akses private
    private String nama_produk; // Mendeklarasikan variabel nama_produk dengan akses private
    private int stok_produk;
    private float harga_produk; // Mendeklarasikan variabel harga_produk dengan akses private

    public Petshop() { // Konstruktor tanpa parameter
    }

    public Petshop(int id, String nama_produk, float harga_produk, int stok_produk) { // Konstruktor dengan parameter
        this.id = id; // Menginisialisasi variabel id
        this.nama_produk = nama_produk; // Menginisialisasi variabel nama_produk
        this.stok_produk = stok_produk; // Menginisialisasi variabel stok_produk
        this.harga_produk = harga_produk; // Menginisialisasi variabel harga_produk
    }

    // Getter dan Setter untuk variabel id
    public int getId() {
        return id; // Mengembalikan nilai id
    }

    public void setId(int id) {
        this.id = id; // Mengatur nilai id
    }

    // Getter dan Setter untuk variabel nama_produk
    public String getNama_produk() {
        return nama_produk; // Mengembalikan nilai nama_produk
    }

    public void setNama_produk(String nama_produk) {
        this.nama_produk = nama_produk; // Mengatur nilai nama_produk
    }

    // Getter dan Setter untuk variabel stok_produk
    public int getStok_produk() {
        return stok_produk; // Mengembalikan nilai stok_produk
    }

    public void setstok_produk(int stok_produk) {
        this.stok_produk = stok_produk; // Mengatur nilai stok_produk
    }

    // Getter dan Setter untuk variabel harga_produk
    public float getHarga_produk() {
        return harga_produk; // Mengembalikan nilai harga_produk
    }

    public void setHarga_produk(float harga_produk) {
        this.harga_produk = harga_produk; // Mengatur nilai harga_produk
    }
    public void addPetshop(int id, String nama_produk,  float harga_produk, int stok_produk) {
        this.id = id;
        this.nama_produk = nama_produk;
        this.stok_produk = stok_produk;
        this.harga_produk = harga_produk;
    }
    
}