#include "Petshop.cpp"

class Aksesoris : public Petshop{   // Kelas Aksesoris yang merupakan turunan dari kelas Petshop
    private:
        string jenis;
        string warna;
        string bahan;
    public:
        Aksesoris(){    // Konstruktor
            this->jenis = "";
            this->warna = "";
            this->bahan = "";
        }

        Aksesoris(int id, string nama_produk,  float harga_produk, int stok_produk, string jenis, string warna, string bahan){    // Konstruktor dengan parameter
            this->set_id(id);
            this->set_nama_produk(nama_produk);
            this->set_harga_produk(harga_produk);
            this->set_stok_produk(stok_produk);
            this->jenis = jenis;
            this->warna = warna;
            this->bahan = bahan;
        }
        // Getter dan Setter
        string get_jenis(){
            return this->jenis;
        }

        void set_jenis(string jenis){
            this->jenis = jenis;
        }

        string get_warna(){
            return this->warna;
        }

        void set_warna(string warna){
            this->warna = warna;
        }

        string get_bahan(){
            return this->bahan;
        }

        void set_bahan(string bahan){
            this->bahan = bahan;
        }
        ~Aksesoris(){   // Destruk
        }
};