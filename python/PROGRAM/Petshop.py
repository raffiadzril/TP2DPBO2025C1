class Petshop:
    def __init__(self): # Konstruktor
        self.id = 0
        self.nama_produk = ''
        self.harga_produk = 0
        self.stok_produk = 0
    
    # Setter dan Getter
    def setId(self, id):
        self.id = id
    def getId(self):
        return self.id
    def setNamaProduk(self, nama_produk):
        self.nama_produk = nama_produk
    def getNamaProduk(self):
        return self.nama_produk
    def setStokProduk(self, stok_produk):
        self.stok_produk = stok_produk
    def getStokProduk(self):
        return self.stok_produk
    def setHargaProduk(self, harga_produk):
        self.harga_produk = harga_produk
    def getHargaProduk(self):
        return self.harga_produk
    
    def addProduk(self, id, nama_produk, stok_produk, harga_produk):    # Menambahkan produk
        self.id = id
        self.nama_produk = nama_produk
        self.stok_produk = stok_produk
        self.harga_produk = harga_produk
