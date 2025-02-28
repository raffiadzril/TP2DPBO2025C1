<?php 

include 'Aksesoris.php';

class Baju extends Aksesoris {
    private $untuk;
    private $size;
    private $merk;
    private $foto;

    public function __construct($untuk = '', $size = '', $merk = '', $foto = '') {
        parent::__construct();
        $this->untuk = $untuk;
        $this->size = $size;
        $this->merk = $merk;
        $this->foto = $foto;
    }

    public function getUntuk() {
        return $this->untuk;
    }

    public function setUntuk($untuk) {
        $this->untuk = $untuk;
    }

    public function getSize() {
        return $this->size;
    }

    public function setSize($size) {
        $this->size = $size;
    }

    public function getMerk() {
        return $this->merk;
    }

    public function setMerk($merk) {
        $this->merk = $merk;
    }

    public function getFoto() {
        return $this->foto;
    }

    public function setFoto($foto) {
        $this->foto = $foto;
    }

    public function addBaju($id, $nama_produk,  $harga_produk, $stok_produk, $jenis, $bahan, $warna, $untuk, $size, $merk, $foto) {
        parent::setId($id);
        parent::setNama_produk($nama_produk);
        parent::setstok_produk($stok_produk);
        parent::setHarga_produk($harga_produk);
        parent::setJenis($jenis);
        parent::setBahan($bahan);
        parent::setWarna($warna);
        $this->untuk = $untuk;
        $this->size = $size;
        $this->merk = $merk;
        $this->foto = $foto;
    }
}
?>