from Aksesoris import Aksesoris

class Baju(Aksesoris):
    def __init__(self):
        self.untuk = ''
        self.size = ''
        self.merk = ''
        
    # Setter dan Getter
    def setUntuk(self, untuk):
        self.untuk = untuk
    def getUntuk(self):
        return self.untuk
    def setSize(self, size):
        self.size = size
    def getSize(self):
        return self.size
    def setMerk(self, merk):
        self.merk = merk
    def getMerk(self):
        return self.merk
    
    def addProduk_Baju(self, id, nama_produk,  harga_produk, stok_produk, jenis, bahan, warna, untuk
                        , size, merk):    # Menambahkan produk
        self.id = id
        self.nama_produk = nama_produk
        self.harga_produk = harga_produk
        self.stok_produk = stok_produk
        self.jenis = jenis
        self.bahan = bahan
        self.warna = warna
        self.untuk = untuk
        self.size = size
        self.merk = merk
        