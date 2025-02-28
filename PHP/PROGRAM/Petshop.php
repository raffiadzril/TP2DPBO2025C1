<?php

/* Saya RAFFI ADZRIL ALFAIZ dengan NIM 2308355 kelas C1 mengerjakan evaluasi Latihan Praktikum dalam mata kuliah Desain Pemrograman Berbasis Objek
Materi Kelas Enkapsulasi untuk keberkahanNya maka saya tidak melakukan kecurangan 
seperti yang telah dispesifikasikan. Aamiin. */

class Petshop { // Mendeklarasikan kelas Petshop
    private $id; // Mendeklarasikan variabel id dengan akses private
    private $nama_produk; // Mendeklarasikan variabel nama_produk dengan akses private
    private $stok_produk; // Mendeklarasikan variabel stok_produk dengan akses private
    private $harga_produk; // Mendeklarasikan variabel harga_produk dengan akses private
    private $foto_produk; // Mendeklarasikan variabel foto_produk dengan akses private
   

    public function __construct($id = 0, $nama_produk = "", $harga_produk = 0.0,  $stok_produk = 0, $foto_produk =""){// Konstruktor dengan parameter default
        $this->id = $id; // Menginisialisasi variabel id
        $this->nama_produk = $nama_produk; // Menginisialisasi variabel nama_produk
        $this->harga_produk = $harga_produk; // Menginisialisasi variabel harga_produk
        $this->stok_produk = $stok_produk; // Menginisialisasi variabel stok_produk
        $this->foto_produk = $foto_produk; // Menginisialisasi variabel foto_produk
       
    }

    // Getter dan Setter untuk variabel id
    public function getId() {
        return $this->id; // Mengembalikan nilai id
    }

    public function setId($id) {
        $this->id = $id; // Mengatur nilai id
    }

    // Getter dan Setter untuk variabel nama_produk
    public function getNama_produk() {
        return $this->nama_produk; // Mengembalikan nilai nama_produk
    }

    public function setNama_produk($nama_produk) {
        $this->nama_produk = $nama_produk; // Mengatur nilai nama_produk
    }

    // Getter dan Setter untuk variabel stok_produk
    public function getstok_produk() {
        return $this->stok_produk; // Mengembalikan nilai stok_produk
    }

    public function setstok_produk($stok_produk) {
        $this->stok_produk = $stok_produk; // Mengatur nilai stok_produk
    }

    // Getter dan Setter untuk variabel harga_produk
    public function getHarga_produk() {
        return $this->harga_produk; // Mengembalikan nilai harga_produk
    }

    public function setHarga_produk($harga_produk) {
        $this->harga_produk = $harga_produk; // Mengatur nilai harga_produk
    }
    public function getFoto_produk() {
        return $this->foto_produk; // Mengembalikan nilai foto_produk
    }
    public function setFoto_produk($foto_produk) {
        $this->foto_produk = $foto_produk; // Mengatur nilai foto_produk
    }
    public function __destruct(){ // Destruktor
        // Kosong
    }


    
}