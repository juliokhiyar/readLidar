# Lidar Test Node

Node ROS sederhana untuk membaca data dari sensor Lidar dan menampilkan jarak objek di arah depan, belakang, kiri, dan kanan. Program ini bertujuan untuk menguji sensor Lidar dan memahami penggunaan ROS subscriber dengan data LaserScan.

## Deskripsi

Node ini berlangganan ke topik `/scan` untuk menerima data dari sensor Lidar dalam bentuk pesan `sensor_msgs/LaserScan`. Program ini menghitung jarak objek berdasarkan sudut tertentu:
- **0° (Depan)**
- **90° (Kiri)**
- **180° (Belakang)**
- **270° (Kanan)**

Jarak objek ditampilkan di terminal menggunakan `ROS_INFO`.

## Tujuan

- **Menguji sensor Lidar**: Memastikan data dari sensor Lidar terbaca dengan benar melalui ROS.
- **Monitoring Jarak Objek**: Menampilkan jarak objek di arah depan, belakang, kiri, dan kanan.
- **Pembelajaran ROS**: Contoh sederhana implementasi subscriber dan callback pada ROS.

## Cara Kerja

1. Inisialisasi Node ROS bernama `lidar_test_node`.
2. Berlangganan ke topik `/scan` untuk menerima data Lidar.
3. Fungsi callback menghitung jarak objek berdasarkan sudut tertentu.
4. Jarak objek ditampilkan ke terminal.
