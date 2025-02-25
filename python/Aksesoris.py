from Petshop import Petshop

class Aksesoris(Petshop):
    def __init__(self):
        self.jenis = ''
        self.bahan = ''
        self.warna = ''
    
    # Setter dan Getter
    def setJenis(self, jenis):
        self.jenis = jenis
    def getJenis(self):
        return self.jenis
    def setBahan(self, bahan):
        self.bahan = bahan
    def getBahan(self):
        return self.bahan
    def setWarna(self, warna):
        self.warna = warna
    def getWarna(self):
        return self.warna
    
    def addProduk_Aksesoris(self, id, nama_produk, kategori_produk, harga_produk, jenis, bahan, warna):    # Menambahkan produk
        self.id = id
        self.nama_produk = nama_produk
        self.kategori_produk = kategori_produk
        self.harga_produk = harga_produk
        self.jenis = jenis
        self.bahan = bahan
        self.warna = warna
    
