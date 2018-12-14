# Post-Get JSON menggunakan NodeMcu
Dokumentasi IoT pada AizD menggunakan NodeMcu

## POST - GET Method Arduino IDE with Nodemcu
Melakukan komunikasi melalui internet menggunakan post-get pada NodeMCU melalui Arduino IDE.

### How-To Do-It
1.	Download Library yang dibutuhkan ESP8266WiFi.h, ESP8266HTTPClient.h, ArduinoJson.h lalu include pada post_get_main
 
2.	Atur SSID dan Password pada Arduino IDE, sesuai dengan hotspot yang tersedia (Tanpa Proxy) pada tab post_get_main
 
3.	Masukkan url api pada tab post_get_loop. Untuk melakukan get, masukkan pada url_get. Untuk melakukan post, masukkan pada url_post.
 
4.	Tambahkan content type pada content_type_post (Sesuai dengan yang tersedia di program back-end) di dalam tab post_get_loop untuk melakukan post.
 
5.	Lakukan deklarasi untuk membuat tulisan dengan format json pada tab post_get_loop
 
6.	Menarik data menggunakan fungsi get_request yang dipanggil di fungsi post_get_loop dengan url_get sebagai parameter. (Untuk melihat program dari fungsi terdapat pada tab post_get_function)
 
7.	Mengirim data menggunakan fungsi post_request yang dipanggil di fungsi post_get_loop dengan url_post, content_type_post, dan JSONmessageBuffer sebagai parameter. (Untuk melihat program dari fungsi terdapat pada tab post_get_function)
 
8.	Compile, Upload, selesai 😊 


