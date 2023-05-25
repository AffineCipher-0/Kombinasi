void setup() {
  Serial.begin(9600);
}

void loop() {
  // Menggunakan 4 digit sebagai password numerik
  for (int i = 0; i < 10000; i++) {
    // Mengonversi i ke string 4 digit dengan padding nol di depan
    char password[5];
    sprintf(password, "%04d", i);

    // Coba password di sini, misalnya dengan membandingkan dengan password yang diketahui
    if (strcmp(password, "1234") == 0) {
      Serial.println("Password ditemukan: " + String(password));
      break;
    }
  }

  while (1) {
    // Berhenti di sini setelah menemukan password
  }
}

// Kode di atas mengiterasi melalui semua kombinasi numerik empat digit dari 0000 hingga 9999. Dalam contoh ini, password yang dicari adalah "1234". Jika password yang dicoba cocok dengan password yang diketahui, program akan mencetak pesan "Password ditemukan: 1234" dan berhenti.

// Namun, perlu dicatat bahwa contoh ini hanya merupakan implementasi sederhana dan belum mencakup penggunaan sebenarnya yang lebih kompleks. Implementasi yang lebih lengkap dan aman akan melibatkan metode enkripsi yang tepat dan penggunaan mekanisme keamanan yang kuat.

// Untuk pemahaman yang lebih mendalam tentang algoritma brute force dan implementasinya, disarankan untuk mempelajari konsep dasar kriptografi, keamanan komputer, dan bahasa pemrograman yang digunakan. Penting juga untuk memahami kebijakan dan etika yang terkait dengan penggunaan algoritma ini.