#include "Baju.cpp"
#include <iostream>
#include <list>
#include <iterator>

using namespace std;

int get_length_atribut_baju(string atribut, list<Baju> list_baju){
    int length = 0;
    list<Baju>::iterator it;
    if(atribut == "id"){
        length = 2;
        for(it = list_baju.begin(); it != list_baju.end(); it++){
            if(to_string(it->get_id()).length() > length){
            length = to_string(it->get_id()).length();
            }
        }
    }else if(atribut == "nama_produk"){
        length = 11;
        for(it = list_baju.begin(); it != list_baju.end(); it++){
            if(it->get_nama_produk().length() > length){
                length = it->get_nama_produk().length();
            }
        }
    }else if(atribut == "stok_produk"){
        length = 11;
        for(it = list_baju.begin(); it != list_baju.end(); it++){
            if(to_string(it->get_stok_produk()).length() > length){
                length = to_string(it->get_stok_produk()).length();
            }
        }
    }else if(atribut == "harga_produk"){
        length = 12;
        for(it = list_baju.begin(); it != list_baju.end(); it++){
            if(to_string(it->get_harga_produk()).length() > length){
                length = to_string(it->get_harga_produk()).length();
            }
        }
    }else if(atribut == "jenis"){
        length = 5;
        for(it = list_baju.begin(); it != list_baju.end(); it++){
            if(it->get_jenis().length() > length){
                length = it->get_jenis().length();
            }
        }
    }else if(atribut == "warna"){
        length = 5;
        for(it = list_baju.begin(); it != list_baju.end(); it++){
            if(it->get_warna().length() > length){
                length = it->get_warna().length();
            }
        }
    }else if(atribut == "bahan"){
        length = 5;
        for(it = list_baju.begin(); it != list_baju.end(); it++){
            if(it->get_bahan().length() > length){
                length = it->get_bahan().length();
            }
        }
    }else if(atribut == "untuk"){
        length = 5;
        for(it = list_baju.begin(); it != list_baju.end(); it++){
            if(it->get_untuk().length() > length){
                length = it->get_untuk().length();
            }
        }
    }else if(atribut == "size"){
        length = 4;
        for(it = list_baju.begin(); it != list_baju.end(); it++){
            if(it->get_size().length() > length){
                length = it->get_size().length();
            }
        }
    }else if(atribut == "merk"){
        length = 4;
        for(it = list_baju.begin(); it != list_baju.end(); it++){
            if(it->get_merk().length() > length){
                length = it->get_merk().length();
            }
        }
    }
    return length;

}

void tabel_baju(list<Baju> list_baju){
    int length_id = get_length_atribut_baju("id", list_baju);
    int length_nama_produk = get_length_atribut_baju("nama_produk", list_baju);
    int length_stok_produk = get_length_atribut_baju("stok_produk", list_baju);
    int length_harga_produk = get_length_atribut_baju("harga_produk", list_baju);
    int length_jenis = get_length_atribut_baju("jenis", list_baju);
    int length_warna = get_length_atribut_baju("warna", list_baju);
    int length_bahan = get_length_atribut_baju("bahan", list_baju);
    int length_untuk = get_length_atribut_baju("untuk", list_baju);
    int length_size = get_length_atribut_baju("size", list_baju);
    int length_merk = get_length_atribut_baju("merk", list_baju);

    cout << string(length_id + length_nama_produk + length_stok_produk + length_harga_produk + length_jenis + length_warna + length_bahan + length_untuk + length_size + length_merk + 11, '-') << endl;
    cout << "|ID" << string(length_id - 2, ' ') 
    << "|Nama Produk" << string(length_nama_produk - 11, ' ')
    << "|Harga Produk" << string(length_harga_produk - 12, ' ')
    << "|Stok Produk" << string(length_stok_produk - 11, ' ')
    << "|Jenis" << string(length_jenis - 5, ' ')
    << "|Bahan" << string(length_bahan - 5, ' ')
    << "|Warna" << string(length_warna - 5, ' ')
    << "|Untuk" << string(length_untuk - 5, ' ')
    << "|Size" << string(length_size - 4, ' ')
    << "|Merk" << string(length_merk - 4, ' ')
    << "|" << endl;
    cout << string(length_id + length_nama_produk + length_stok_produk + length_harga_produk + length_jenis + length_warna + length_bahan + length_untuk + length_size + length_merk + 11, '-') << endl;
    list<Baju>::iterator it;
    for(it = list_baju.begin(); it != list_baju.end(); it++){
        cout << "|" << it->get_id() << string(length_id - to_string(it->get_id()).length(), ' ')
        << "|" << it->get_nama_produk() << string(length_nama_produk - it->get_nama_produk().length(), ' ')
        << "|" << it->get_stok_produk() << string(length_stok_produk - to_string(it->get_stok_produk()).length(), ' ')
        << "|" << it->get_harga_produk() << string(length_harga_produk - (to_string(it->get_harga_produk()).length() - 7), ' ')
        << "|" << it->get_jenis() << string(length_jenis - it->get_jenis().length(), ' ')
        << "|" << it->get_bahan() << string(length_bahan - it->get_bahan().length(), ' ')
        << "|" << it->get_warna() << string(length_warna - it->get_warna().length(), ' ')
        << "|" << it->get_untuk() << string(length_untuk - it->get_untuk().length(), ' ')
        << "|" << it->get_size() << string(length_size - it->get_size().length(), ' ')
        << "|" << it->get_merk() << string(length_merk - it->get_merk().length(), ' ')
        << "|" << endl;
    }
    cout << string(length_id + length_nama_produk + length_stok_produk + length_harga_produk + length_jenis + length_warna + length_bahan + length_untuk + length_size + length_merk + 11, '-') << endl;
}
int main(){
    list<Baju> list_baju;   // Membuat list dari kelas Baju
        // // Menambahkan data ke array list
        // Baju baju = new Baju(1, "Baju_Anjing_Sporty", "Pakaian_Anjing", 75000, "Jersey", "Polyester", "Merah", "Anjing", "M", "PetStyle");
        // listbaju.add(baju);
        // baju = new Baju(2, "Sweater_Kucing_Winter", "Pakaian_Kucing", 90000, "Sweater", "Wool", "Biru", "Kucing", "S", "MeowWear");
        // listbaju.add(baju);
        // baju = new Baju(3, "Jaket_Anjing_Waterproof", "Pakaian_Anjing", 120000, "Jaket", "Nylon", "Hitam", "Anjing", "L", "PawFashion");
        // listbaju.add(baju);
        // baju = new Baju(4, "Daster_Kucing_Floral", "Pakaian_Kucing", 65000, "Daster", "Katun", "Pink", "Kucing", "M", "FurryChic");
        // listbaju.add(baju);
        // baju = new Baju(5, "Baju_Tidur_Hamster_Lucu", "Pakaian_Hamster", 85000, "Piyama", "Satin", "Kuning", "Hamster", "XS", "ComfyPet");
        // listbaju.add(baju);

    Baju baju;
    baju.addBaju(1, "Baju_Anjing_Sporty", 23, 75000, "Jersey", "Polyester", "Merah", "Anjing", "M", "PetStyle");
    list_baju.push_back(baju);
    baju.addBaju(2, "Sweater_Kucing_Winter", 44, 90000, "Sweater", "Wool", "Biru", "Kucing", "S", "MeowWear");
    list_baju.push_back(baju);
    baju.addBaju(3, "Jaket_Anjing_Waterproof", 23, 120000, "Jaket", "Nylon", "Hitam", "Anjing", "L", "PawFashion");
    list_baju.push_back(baju);
    baju.addBaju(4, "Daster_Kucing_Floral", 44, 65000, "Daster", "Katun", "Pink", "Kucing", "M", "FurryChic");
    list_baju.push_back(baju);
    baju.addBaju(5, "Baju_Tidur_Hamster_Lucu", 65, 85000, "Piyama", "Satin", "Kuning", "Hamster", "XS", "ComfyPet");
    list_baju.push_back(baju);

    tabel_baju(list_baju);
    int jumlah_baju = 0;
    int id, stok_produk;
    string nama_produk, jenis, warna, bahan, untuk, size, merk;
    float harga_produk = 0;

    cin >> jumlah_baju;
    for(int i = 0; i < jumlah_baju; i++){
        id = list_baju.size() + 1;
        cin >> nama_produk;
        cin >> stok_produk;
        cin >> harga_produk;
        cin >> jenis;
        cin >> warna;
        cin >> bahan;
        cin >> untuk;
        cin >> size;
        cin >> merk;
        baju.addBaju(id, nama_produk, harga_produk, stok_produk,  jenis, warna, bahan, untuk, size, merk);
        list_baju.push_back(baju);
    }

    tabel_baju(list_baju);


}
