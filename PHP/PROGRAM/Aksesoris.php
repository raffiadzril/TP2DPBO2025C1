<?php
include 'Petshop.php';

class Aksesoris extends Petshop {
    private $jenis;
    private $bahan;
    private $warna;

    public function __construct($jenis = '', $bahan = '', $warna = '') {
        parent::__construct();
        $this->jenis = $jenis;
        $this->bahan = $bahan;
        $this->warna = $warna;
    }

    public function getJenis() {
        return $this->jenis;
    }

    public function setJenis($jenis) {
        $this->jenis = $jenis;
    }

    public function getBahan() {
        return $this->bahan;
    }

    public function setBahan($bahan) {
        $this->bahan = $bahan;
    }

    public function getWarna() {
        return $this->warna;
    }

    public function setWarna($warna) {
        $this->warna = $warna;
    }

    public function __destruct(){

    }

}
