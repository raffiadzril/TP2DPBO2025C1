<?php 

include 'Aksesoris.php';

class Baju extends Aksesoris {
    private $untuk;
    private $size;
    private $merk;

    public function __construct($untuk = '', $size = '', $merk = '') {
        parent::__construct();
        $this->untuk = $untuk;
        $this->size = $size;
        $this->merk = $merk;
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


    public function addBaju($id, $nama_produk,  $harga_produk, $stok_produk, $foto, $jenis, $bahan, $warna, $untuk, $size, $merk) {
        parent::setId($id);
        parent::setNama_produk($nama_produk);
        parent::setHarga_produk($harga_produk);
        parent::setstok_produk($stok_produk);
        parent::setFoto_produk($foto);
        parent::setJenis($jenis);
        parent::setBahan($bahan);
        parent::setWarna($warna);
        $this->untuk = $untuk;
        $this->size = $size;
        $this->merk = $merk;
        
    }
}
?>