<?php
include 'Baju.php';
session_start();

// Cek apakah session listBajuHewan sudah ada
if (!isset($_SESSION['listBajuHewan'])) {
    $_SESSION['listBajuHewan'] = [];
    
    $bajucontoh1 = new Baju();
    $bajucontoh1->addBaju(1, "Baju_Anjing_Sporty",  75000, 35,"asset/jersey_merah.jpg",  "Jersey", "Polyester", "Merah", "Anjing", "M", "PetStyle");
    
    $bajucontoh2 = new Baju();
    $bajucontoh2->addBaju(2, "Sweater_Kucing_Winter",  90000, 19, "asset/sweater_biru.jpg", "Sweater", "Wool", "Biru", "Kucing", "S", "MeowWear");
    
    $bajucontoh3 = new Baju();
    $bajucontoh3->addBaju(3, "Jaket_Anjing_Waterproof",  120000, 35, "asset/jaket_hitam.jpg", "Jaket", "Nylon", "Hitam", "Anjing", "L", "PawFashion");
    
    $bajucontoh4 = new Baju();
    $bajucontoh4->addBaju(4, "Daster_Kucing_Floral",  65000, 19, "asset/daster_pink.jpg", "Daster", "Katun", "Pink", "Kucing", "M", "FurryChic", );
    $bajucontoh5 = new Baju();
    $bajucontoh5->addBaju(5, "Baju_Tidur_Hamster_Lucu", 65, 85000, "asset/piyama_kuning.png", "Piyama", "Satin", "Kuning", "Hamster", "XS", "ComfyPet");
    
    // Menyimpan ke session
    $_SESSION['listBajuHewan'] = [$bajucontoh1, $bajucontoh2, $bajucontoh3, $bajucontoh4, $bajucontoh5];
}

// Ambil data dari session
$listBajuHewan = $_SESSION['listBajuHewan'];

if ($_SERVER['REQUEST_METHOD'] == 'POST' && isset($_POST['add'])) {
    // Menambah produk baru
    $newId = count($listBajuHewan) + 1;
    $tambah_baju = new Baju();
    $tambah_baju->addBaju(
        $newId, 
        htmlspecialchars($_POST['nama_produk']), 
        (int) $_POST['harga_produk'], 
        htmlspecialchars($_POST['stok_produk']), 
        htmlspecialchars($_POST['foto_produk']),
        htmlspecialchars($_POST['jenis_produk']), 
        htmlspecialchars($_POST['bahan_produk']), 
        htmlspecialchars($_POST['warna_produk']), 
        htmlspecialchars($_POST['untuk_produk']), 
        htmlspecialchars($_POST['size_produk']), 
        htmlspecialchars($_POST['merk_produk'])
    );

    // Tambahkan ke session tanpa reset
    $_SESSION['listBajuHewan'][] = $tambah_baju;
    
    // Redirect untuk mencegah duplikasi saat refresh
    header("Location: ".$_SERVER['PHP_SELF']);
    exit();
}
?>


<<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Baju - Zrill Petshop</title>
    <link href="https://cdn.jsdelivr.net/npm/bootstrap@5.3.0/dist/css/bootstrap.min.css" rel="stylesheet">
</head>
<body>
<div class="container mt-5">
    <h2 class="text-center mb-4">Zrill Petshop</h2>
    <div class="row">
        <!-- FORM TAMBAH PRODUK -->
        <div class="col-md-4">
            <div class="card p-3">
                <h4 class="text-center">Tambah Produk</h4>
                <form method="POST">
                    <div class="mb-2">
                        <label class="form-label">Nama Produk</label>
                        <input type="text" class="form-control" name="nama_produk" required>
                    </div>
                    <div class="mb-2">
                        <label class="form-label">Harga</label>
                        <input type="number" class="form-control" name="harga_produk" required>
                    </div>
                    <div class="mb-2">
                        <label class="form-label">Stok Produk</label>
                        <input type="number" class="form-control" name="stok_produk" required>
                    </div>
                    <div class="mb-2">
                        <label class="form-label">Jenis</label>
                        <input type="text" class="form-control" name="jenis_produk" required>
                    </div>
                    <div class="mb-2">
                        <label class="form-label">Bahan</label>
                        <input type="text" class="form-control" name="bahan_produk" required>
                    </div>
                    <div class="mb-2">
                        <label class="form-label">Warna</label>
                        <input type="text" class="form-control" name="warna_produk" required>
                    </div>
                    <div class="mb-2">
                        <label class="form-label">Untuk</label>
                        <input type="text" class="form-control" name="untuk_produk" required>
                    </div>
                    <div class="mb-2">
                        <label class="form-label">Size</label>
                        <input type="text" class="form-control" name="size_produk" required>
                    </div>
                    <div class="mb-2">
                        <label class="form-label">Merk</label>
                        <input type="text" class="form-control" name="merk_produk" required>
                    </div>
                    <div class="mb-3">
                        <label class="form-label">Foto</label>
                        <div class="d-flex flex-wrap gap-2">
                            <label class="form-check-label">
                                <input class="form-check-input" type="radio" name="foto_produk" value="asset/jersey_merah.jpg" checked>
                                <img src="asset/jersey_merah.jpg" width="50">
                            </label>
                            <label class="form-check-label">
                                <input class="form-check-input" type="radio" name="foto_produk" value="asset/sweater_biru.jpg">
                                <img src="asset/sweater_biru.jpg" width="50">
                            </label>
                            <label class="form-check-label">
                                <input class="form-check-input" type="radio" name="foto_produk" value="asset/jaket_hitam.jpg">
                                <img src="asset/jaket_hitam.jpg" width="50">
                            </label>
                            <label class="form-check-label">
                                <input class="form-check-input" type="radio" name="foto_produk" value="asset/daster_pink.jpg">
                                <img src="asset/daster_pink.jpg" width="50">
                            </label>
                            <label class="form-check-label">
                                <input class="form-check-input" type="radio" name="foto_produk" value="asset/piyama_kuning.png">
                                <img src="asset/piyama_kuning.png" width="50">
                            </label>
                        </div>
                    </div>
                    <button type="submit" name="add" class="btn btn-primary w-100">Tambah</button>
                </form>
            </div>
        </div>
        
        <!-- TABEL PRODUK BAJU -->
        <div class="col-md-8">
            <h4 class="mt-3">List Produk</h4>
            <table class="table table-bordered table-striped">
                <thead class="table-dark">
                    <tr>
                        <th>ID</th>
                        <th>Nama</th>
                        <th>Harga</th>
                        <th>Stok Produk</th>
                        <th>Jenis</th>
                        <th>Bahan</th>
                        <th>Warna</th>
                        <th>Untuk</th>
                        <th>Size</th>
                        <th>Merk</th>
                        <th>Foto</th>
                    </tr>
                </thead>
                <tbody>
                    <?php foreach ($listBajuHewan as $baju): ?>
                        <tr>
                            <td><?= $baju->getId() ?></td>
                            <td><?= $baju->getNama_produk() ?></td>
                            <td><?= $baju->getHarga_produk() ?></td>
                            <td><?= $baju->getstok_produk() ?></td>
                            <td><?= $baju->getJenis() ?></td>
                            <td><?= $baju->getBahan() ?></td>
                            <td><?= $baju->getWarna() ?></td>
                            <td><?= $baju->getUntuk() ?></td>
                            <td><?= $baju->getSize() ?></td>
                            <td><?= $baju->getMerk() ?></td>
                            <td><img src="<?= $baju->getFoto_produk() ?>" width="50"></td>
                        </tr>
                    <?php endforeach; ?>
                </tbody>
            </table>
        </div>
    </div>
</div>
</body>
</html>