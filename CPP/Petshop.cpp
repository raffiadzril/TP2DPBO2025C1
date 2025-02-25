#include <iostream>
#include <string>

using namespace std;

class Petshop{  // Kelas Petshop
    // Private tipe data kelas Petshop
    private:
        int id;
        string nama_produk;
        string kategori_produk;
        float harga_produk;

    public:
        Petshop(){  // Konstruktor
            this->id = 0;
            this->nama_produk = "";
            this->kategori_produk = "";
            this->harga_produk = 0;
        }

        Petshop(int id, string nama_produk, string kategori_produk, float harga_produk){    // Konstruktor dengan parameter
            this->id = id;
            this->nama_produk = nama_produk;
            this->kategori_produk = kategori_produk;
            this->harga_produk = harga_produk;
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

        string get_kategori_produk(){
            return this->kategori_produk;
        }

        void set_kategori_produk(string kategori_produk){
            this->kategori_produk = kategori_produk;
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