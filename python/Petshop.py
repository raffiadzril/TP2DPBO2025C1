class Petshop:
    def __init__(self): # Konstruktor
        self.id = 0
        self.nama_produk = ''
        self.kategori_produk = ''
        self.harga_produk = 0
    
    # Setter dan Getter
    def setId(self, id):
        self.id = id
    def getId(self):
        return self.id
    def setNamaProduk(self, nama_produk):
        self.nama_produk = nama_produk
    def getNamaProduk(self):
        return self.nama_produk
    def setKategoriProduk(self, kategori_produk):
        self.kategori_produk = kategori_produk
    def getKategoriProduk(self):
        return self.kategori_produk
    def setHargaProduk(self, harga_produk):
        self.harga_produk = harga_produk
    def getHargaProduk(self):
        return self.harga_produk
    
    def addProduk(self, id, nama_produk, kategori_produk, harga_produk):    # Menambahkan produk
        self.id = id
        self.nama_produk = nama_produk
        self.kategori_produk = kategori_produk
        self.harga_produk = harga_produk