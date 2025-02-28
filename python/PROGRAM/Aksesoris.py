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

    
