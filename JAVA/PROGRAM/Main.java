import java.util.Scanner; // untuk menerima inputan dari user
import java.util.ArrayList; 

public class Main {

    private static int get_length_atribut_baju(String atribut, ArrayList<Baju> listbaju) {
        int length = 0;
        if(atribut.equals("id")) {
            length = 2;
            for(int i = 0; i < listbaju.size(); i++) {
                if(String.valueOf(listbaju.get(i).getId()).length() > length) {
                    length = String.valueOf(listbaju.get(i).getId()).length();
                }
            }
        }
        if(atribut.equals("nama_produk")) {
            length = 11;
            for(int i = 0; i < listbaju.size(); i++) {
                if(listbaju.get(i).getNama_produk().length() > length) {
                    length = listbaju.get(i).getNama_produk().length();
                }
            }
        }
        if(atribut.equals("stok_produk")) {
            length = 11;
            for(int i = 0; i < listbaju.size(); i++) {
                if(String.valueOf(listbaju.get(i).getStok_produk()).length() > length) {
                    length = String.valueOf(listbaju.get(i).getStok_produk()).length();
                }
            }
        }
        if(atribut.equals("harga_produk")) {
            length = 12;
            for(int i = 0; i < listbaju.size(); i++) {
                if(String.valueOf(listbaju.get(i).getHarga_produk()).length() > length) {
                    length = String.valueOf(listbaju.get(i).getHarga_produk()).length();
                }
            }
        }
        if(atribut.equals("jenis")) {
            length = 5;
            for(int i = 0; i < listbaju.size(); i++) {
                if(listbaju.get(i).getJenis().length() > length) {
                    length = listbaju.get(i).getJenis().length();
                }
            }
        }
        if(atribut.equals("bahan")) {
            length = 5;
            for(int i = 0; i < listbaju.size(); i++) {
                if(listbaju.get(i).getBahan().length() > length) {
                    length = listbaju.get(i).getBahan().length();
                }
            }
        }
        if(atribut.equals("warna")) {
            length = 5;
            for(int i = 0; i < listbaju.size(); i++) {
                if(listbaju.get(i).getWarna().length() > length) {
                    length = listbaju.get(i).getWarna().length();
                }
            }
        }
        if(atribut.equals("untuk")) {
            length = 5;
            for(int i = 0; i < listbaju.size(); i++) {
                if(listbaju.get(i).getUntuk().length() > length) {
                    length = listbaju.get(i).getUntuk().length();
                }
            }
        }
        if(atribut.equals("size")) {
            length = 4;
            for(int i = 0; i < listbaju.size(); i++) {
                if(listbaju.get(i).getSize().length() > length) {
                    length = listbaju.get(i).getSize().length();
                }
            }
        }
        if(atribut.equals("merk")) {
            length = 4;
            for(int i = 0; i < listbaju.size(); i++) {
                if(listbaju.get(i).getMerk().length() > length) {
                    length = listbaju.get(i).getMerk().length();
                }
            }
        }
        return length;
    }

    private static void tabel_baju(ArrayList<Baju> listbaju) {
        int length_id = get_length_atribut_baju("id", listbaju);
        int length_nama_produk = get_length_atribut_baju("nama_produk", listbaju);
        int length_stok_produk = get_length_atribut_baju("stok_produk", listbaju);
        int length_harga_produk = get_length_atribut_baju("harga_produk", listbaju);
        int length_jenis = get_length_atribut_baju("jenis", listbaju);
        int length_bahan = get_length_atribut_baju("bahan", listbaju);
        int length_warna = get_length_atribut_baju("warna", listbaju);
        int length_untuk = get_length_atribut_baju("untuk", listbaju);
        int length_size = get_length_atribut_baju("size", listbaju);
        int length_merk = get_length_atribut_baju("merk", listbaju);

        System.out.println("-".repeat(length_id + length_nama_produk + length_stok_produk + length_harga_produk + length_jenis + length_bahan + length_warna + length_untuk + length_size + length_merk + 11));
        System.out.println("|ID" + " ".repeat(length_id - 2) +
                        "|Nama Produk" + " ".repeat(length_nama_produk - 11) +
                        "|Stok Produk" + " ".repeat(length_stok_produk - 11) +
                        "|Harga Produk" + " ".repeat(length_harga_produk - 12) +
                        "|Jenis" + " ".repeat(length_jenis - 5) +
                        "|Bahan" + " ".repeat(length_bahan - 5) +
                        "|Warna" + " ".repeat(length_warna - 5) +
                        "|Untuk" + " ".repeat(length_untuk - 5) +
                        "|Size" + " ".repeat(length_size - 4) +
                        "|Merk" + " ".repeat(length_merk - 4) + "|");
        System.out.println("-".repeat(length_id + length_nama_produk + length_stok_produk + length_harga_produk + length_jenis + length_bahan + length_warna + length_untuk + length_size + length_merk + 11));
        for(int i = 0; i < listbaju.size(); i++) {
            System.out.println("|" + listbaju.get(i).getId() + " ".repeat(length_id - String.valueOf(listbaju.get(i).getId()).length()) +
                            "|" + listbaju.get(i).getNama_produk() + " ".repeat(length_nama_produk - listbaju.get(i).getNama_produk().length()) +
                            "|" + listbaju.get(i).getStok_produk() + " ".repeat(length_stok_produk - String.valueOf(listbaju.get(i).getStok_produk()).length()) +
                            "|" + listbaju.get(i).getHarga_produk() + " ".repeat(length_harga_produk - String.valueOf(listbaju.get(i).getHarga_produk()).length()) +
                            "|" + listbaju.get(i).getJenis() + " ".repeat(length_jenis - listbaju.get(i).getJenis().length()) +
                            "|" + listbaju.get(i).getBahan() + " ".repeat(length_bahan - listbaju.get(i).getBahan().length()) +
                            "|" + listbaju.get(i).getWarna() + " ".repeat(length_warna - listbaju.get(i).getWarna().length()) +
                            "|" + listbaju.get(i).getUntuk() + " ".repeat(length_untuk - listbaju.get(i).getUntuk().length()) +
                            "|" + listbaju.get(i).getSize() + " ".repeat(length_size - listbaju.get(i).getSize().length()) +
                            "|" + listbaju.get(i).getMerk() + " ".repeat(length_merk - listbaju.get(i).getMerk().length()) + "|");
        }
        System.out.println("-".repeat(length_id + length_nama_produk + length_stok_produk + length_harga_produk + length_jenis + length_bahan + length_warna + length_untuk + length_size + length_merk + 11));
    }
    
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in); // membuat scanner baru
        ArrayList<Baju> listbaju = new ArrayList<Baju>(); // membuat array list baru

        // Menambahkan data ke array list
        Baju baju = new Baju(1, "Baju_Anjing_Sporty", 75000, 42, "Jersey", "Polyester", "Merah", "Anjing", "M", "PetStyle");
        listbaju.add(baju);
        baju = new Baju(2, "Sweater_Kucing_Winter", 90000, 35, "Sweater", "Wool", "Biru", "Kucing", "S", "MeowWear");
        listbaju.add(baju);
        baju = new Baju(3, "Jaket_Anjing_Waterproof", 120000, 42, "Jaket", "Nylon", "Hitam", "Anjing", "L", "PawFashion");
        listbaju.add(baju);
        baju = new Baju(4, "Daster_Kucing_Floral", 65000, 35, "Daster", "Katun", "Pink", "Kucing", "M", "FurryChic");
        listbaju.add(baju);
        baju = new Baju(5, "Baju_Tidur_Hamster_Lucu", 85000, 35, "Piyama", "Satin", "Kuning", "Hamster", "XS", "ComfyPet");
        listbaju.add(baju);

        tabel_baju(listbaju); // menampilkan data array list
        int id, stok_produk;
        String nama_produk, jenis, bahan, warna, untuk, size, merk;
        float harga_produk;
        int jumlah_input = input.nextInt(); // menginput jumlah data yang akan dimasukkan
        for(int i = 0; i < jumlah_input; i++) {
            id = listbaju.get(listbaju.size() - 1).getId() + 1;
            nama_produk = input.next();
            harga_produk = input.nextFloat();
            stok_produk = input.nextInt();
            jenis = input.next();
            bahan = input.next();
            warna = input.next();
            untuk = input.next();
            size = input.next();
            merk = input.next();
            baju = new Baju(id, nama_produk, harga_produk, stok_produk, jenis, bahan, warna, untuk, size, merk);
            listbaju.add(baju);
        }
        tabel_baju(listbaju); // menampilkan data array list
        input.close(); // menutup scanner

    }
}
