#include <iostream>
#include <string>

using namespace std;

class Petshop{  // Kelas Petshop
    // Private tipe data kelas Petshop
    private:
        int id;
        string nama_produk;
        float harga_produk;
        int stok_produk;

    public:
        Petshop(){  // Konstruktor
            this->id = 0;
            this->nama_produk = "";
            this->stok_produk = 0;
            this->harga_produk = 0;
        }

        Petshop(int id, string nama_produk,  float harga_produk, int stok_produk){    // Konstruktor dengan parameter
            this->id = id;
            this->nama_produk = nama_produk;
            this->harga_produk = harga_produk;
            this->stok_produk = stok_produk;
        }
        // Getter dan Setter
        int get_id(){   
            return this->id;
        }

        void set_id(int id){
            this->id = id;
        }

        string get_nama_produk(){
            return this->nama_produk;
        }

        void set_nama_produk(string nama_produk){
            this->nama_produk = nama_produk;
        }

        int get_stok_produk(){
            return this->stok_produk;
        }

        void set_stok_produk(int stok_produk){
            this->stok_produk = stok_produk;
        }

        float get_harga_produk(){
            return this->harga_produk;
        }

        void set_harga_produk(float harga_produk){
            this->harga_produk = harga_produk;
        }
        ~Petshop(){ // Destruktor
        }
};
