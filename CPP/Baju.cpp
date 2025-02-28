#include "Aksesoris.cpp"

class Baju : public Aksesoris{
    private :
        string untuk;
        string size;
        string merk;
    public:
        Baju(){
            this->untuk = "";
            this->size = "";
            this->merk = "";
        }

        Baju(int id, string nama_produk,  float harga_produk, int stok_produk, string jenis, string warna, string bahan,  string untuk, string size, string merk){
            this->set_id(id);
            this->set_nama_produk(nama_produk);
            this->set_harga_produk(harga_produk);
            this->set_stok_produk(stok_produk);
            this->set_jenis(jenis);
            this->set_warna(warna);
            this->set_bahan(bahan);
            this->untuk = untuk;
            this->size = size;
            this->merk = merk;
        }

        string get_untuk(){
            return this->untuk;
        }

        void set_untuk(string untuk){
            this->untuk = untuk;
        }

        string get_size(){
            return this->size;
        }

        void set_size(string size){
            this->size = size;
        }

        string get_merk(){
            return this->merk;
        }

        void set_merk(string merk){
            this->merk = merk;
        }

        void addBaju(int id, string nama_produk,  float harga_produk, int stok_produk, string jenis, string warna, string bahan, string untuk, string size, string merk){
            this->set_id(id);
            this->set_nama_produk(nama_produk);
            this->set_harga_produk(harga_produk);
            this->set_stok_produk(stok_produk);
            this->set_jenis(jenis);
            this->set_warna(warna);
            this->set_bahan(bahan);
            this->untuk = untuk;
            this->size = size;
            this->merk = merk;
        }

        ~Baju(){
        }
};