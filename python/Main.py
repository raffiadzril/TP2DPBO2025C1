from Baju import Baju

def get_length_atribut_baju(atribut, list_baju):
    if atribut == 'id':
        length = 2
        for baju in list_baju:
            if len(str(baju.getId())) > length:
                length = len(str(baju.getId()))
    elif atribut == 'nama_produk':
        length = 11
        for baju in list_baju:
            if len(baju.getNamaProduk()) > length:
                length = len(baju.getNamaProduk())
    elif atribut == 'kategori_produk':
        length = 15
        for baju in list_baju:
            if len(baju.getKategoriProduk()) > length:
                length = len(baju.getKategoriProduk())
    elif atribut == 'harga_produk':
        length = 12
        for baju in list_baju:
            if len(str(baju.getHargaProduk())) > length:
                length = len(str(baju.getHargaProduk()))
    elif atribut == 'jenis':
        length = 5
        for baju in list_baju:
            if len(baju.getJenis()) > length:
                length = len(baju.getJenis())
    elif atribut == 'bahan':
        length = 5
        for baju in list_baju:
            if len(baju.getBahan()) > length:
                length = len(baju.getBahan())
    elif atribut == 'warna':
        length = 5
        for baju in list_baju:
            if len(baju.getWarna()) > length:
                length = len(baju.getWarna())
    elif atribut == 'untuk':
        length = 5
        for baju in list_baju:
            if len(baju.getUntuk()) > length:
                length = len(baju.getUntuk())
    elif atribut == 'size':
        length = 4
        for baju in list_baju:
            if len(baju.getSize()) > length:
                length = len(baju.getSize())
    elif atribut == 'merk':
        length = 4
        for baju in list_baju:
            if len(baju.getMerk()) > length:
                length = len(baju.getMerk())
    return length

# def get_length_atribut_baju(atribut, list_baju):
#     default_lengths = {
#         'id': 2,
#         'nama_produk': 11,
#         'kategori_produk': 15,
#         'harga_produk': 12,
#         'jenis': 5,
#         'bahan': 6,
#         'warna': 5,
#         'untuk': 5,
#         'size': 4,
#         'merk': 8
#     }

#     if atribut not in default_lengths:
#         return 0  # Jika atribut tidak valid

#     # Format nama getter sesuai konvensi camelCase
#     getter_name = 'get' + ''.join(word.capitalize() for word in atribut.split('_'))

#     return max(
#         default_lengths[atribut],
#         max((len(str(getattr(baju, getter_name)())) for baju in list_baju), default=0)
#     )

        
def tabel_baju(list_baju):
    length_id = get_length_atribut_baju('id', list_baju)
    length_nama_produk = get_length_atribut_baju('nama_produk', list_baju)
    length_kategori_produk = get_length_atribut_baju('kategori_produk', list_baju)
    length_harga_produk = get_length_atribut_baju('harga_produk', list_baju)
    length_jenis = get_length_atribut_baju('jenis', list_baju)
    length_bahan = get_length_atribut_baju('bahan', list_baju)
    length_warna = get_length_atribut_baju('warna', list_baju)
    length_untuk = get_length_atribut_baju('untuk', list_baju)
    length_size = get_length_atribut_baju('size', list_baju)
    length_merk = get_length_atribut_baju('merk', list_baju)
    

    print("-" * (length_id + length_nama_produk + length_kategori_produk + length_harga_produk + length_jenis + length_bahan + length_warna + length_untuk + length_size + length_merk + 11))
    print("|ID" + " " * (length_id - 2) +
      "|Nama Produk" + " " * (length_nama_produk - 11) +
      "|Kategori Produk" + " " * (length_kategori_produk - 15) +
      "|Harga Produk" + " " * (length_harga_produk - 12) +
      "|Jenis" + " " * (length_jenis - 5) +
      "|Bahan" + " " * (length_bahan - 5) +
      "|Warna" + " " * (length_warna - 5) +
      "|Untuk" + " " * (length_untuk - 5) +
      "|Size" + " " * (length_size - 4) +
      "|Merk" + " " * (length_merk - 4) + "|")

    print("-" * (length_id + length_nama_produk + length_kategori_produk + length_harga_produk + length_jenis + length_bahan + length_warna + length_untuk + length_size + length_merk + 11))
    for baju in list_baju:
        print("|" + str(baju.getId()) + " " * (length_id - len(str(baju.getId()))) +
                "|" + baju.getNamaProduk() + " " * (length_nama_produk - len(baju.getNamaProduk())) +
                "|" + baju.getKategoriProduk() + " " * (length_kategori_produk - len(baju.getKategoriProduk())) +
                "|" + str(baju.getHargaProduk()) + " " * (length_harga_produk - len(str(baju.getHargaProduk()))) +
                "|" + baju.getJenis() + " " * (length_jenis - len(baju.getJenis())) +
                "|" + baju.getBahan() + " " * (length_bahan - len(baju.getBahan())) +
                "|" + baju.getWarna() + " " * (length_warna - len(baju.getWarna())) +
                "|" + baju.getUntuk() + " " * (length_untuk - len(baju.getUntuk())) +
                "|" + baju.getSize() + " " * (length_size - len(baju.getSize())) +
                "|" + baju.getMerk() + " " * (length_merk - len(baju.getMerk())) + "|")
        

    print("-" * (length_id + length_nama_produk + length_kategori_produk + length_harga_produk + length_jenis + length_bahan + length_warna + length_untuk + length_size + length_merk + 11))

    


def main():
    baju = Baju()
    list_baju = []

    print("Menambahkan produk baju")
    # Menambahkan produk baju
    list_baju = []

    list_baju.append(Baju())
    list_baju[-1].addProduk_Baju(1, "Baju_Anjing_Sporty", "Pakaian_Anjing", 75000, "Jersey", "Polyester", "Merah", "Anjing", "M", "PetStyle")

    list_baju.append(Baju())
    list_baju[-1].addProduk_Baju(2, "Sweater_Kucing_Winter", "Pakaian_Kucing", 90000, "Sweater", "Wool", "Biru", "Kucing", "S", "MeowWear")

    list_baju.append(Baju())
    list_baju[-1].addProduk_Baju(3, "Jaket_Anjing_Waterproof", "Pakaian_Anjing", 120000, "Jaket", "Nylon", "Hitam", "Anjing", "L", "PawFashion")

    list_baju.append(Baju())
    list_baju[-1].addProduk_Baju(4, "Daster_Kucing_Floral", "Pakaian_Kucing", 65000, "Daster", "Katun", "Pink", "Kucing", "M", "FurryChic")

    list_baju.append(Baju())
    list_baju[-1].addProduk_Baju(5, "Baju_Tidur_Hamster_Lucu", "Pakaian_Hamster", 85000, "Piyama", "Satin", "Kuning", "Hamster", "XS", "ComfyPet")

    tabel_baju(list_baju)
    

    jumlah_input = int(input())
    for j in range(jumlah_input):
        id = list_baju[-1].getId() + 1
        nama_produk = input()
        kategori_produk = input()
        harga_produk = int(input())
        jenis = input()
        bahan = input()
        warna = input()
        untuk = input()
        size = input()
        merk = input()
        list_baju.append(Baju())
        list_baju[-1].addProduk_Baju(id, nama_produk, kategori_produk, harga_produk, jenis, bahan, warna, untuk, size, merk)
    
    tabel_baju(list_baju)

if __name__ == "__main__":
    main()  # Menjalankan fungsi main jika file ini dijalankan sebagai program utama

