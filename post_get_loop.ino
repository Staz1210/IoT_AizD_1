void loop() {
 
  if (WiFi.status() == WL_CONNECTED) { //Check WiFi connection status
    
    Serial.println("BEGIN"); //Debug sederhana (Optional)
    StaticJsonBuffer<300> JSONbuffer;   //Declaring static JSON buffer. Tidak harus 300, sesuai kebutuhuan
    JsonObject& JSONencoder = JSONbuffer.createObject(); 

    //Mendeklarasikan data yang akan dirubah dalam bentuk json
    //menggunakan library ArduinoJson.h
    
    JSONencoder["pot_node_id"] = "5c11373f57a8b329abbc3ee6";
    JSONencoder["moisture1"] = 12;
    JSONencoder["moisture2"] = 14;
    JSONencoder["moisture3"] = 16;
    JSONencoder["moisture4"] = 18;
    JSONencoder["temperature1"] = 12;
    JSONencoder["temperature2"] = 14;
    JSONencoder["temperature3"] = 16;
    JSONencoder["temperature4"] = 18;

    char JSONmessageBuffer[300];
    JSONencoder.prettyPrintTo(JSONmessageBuffer, sizeof(JSONmessageBuffer)); //Mengatur tulisan agar dicetak dalam format json
    Serial.println("Bellow is data that will be posted:");
    Serial.println(JSONmessageBuffer); //Mencetak dalam format json

    //MELAKUKAN GET..
    String url_get = "http://aizd.herokuapp.com/api/v1/pot-nodes"; //Masukkan url api untuk melakukan get
    String hasil_get = get_request(url_get); //Memanggil fungsi get_request lalu disimpan pada pada string hasil_get
    Serial.println("Berikut adalah hasil dari get:");
    Serial.println(hasil_get);
    //////////////////

    //MELAKUKAN POST..
    String url_post = "http://aizd.herokuapp.com/api/v1/pot-nodes/data"; //Masukkan url api untuk melakukan post
    String content_type_post = "application/json"; //Masukkan content-type sesuai dengan program pada back-end
    String hasil_post = post_request(url_post, content_type_post, JSONmessageBuffer);
    Serial.println("Berikut adalah hasil dari post:");
    Serial.println(hasil_post);
    ////////////////////
 
  }
  delay(7000);    //Melakukan request (get-post) setiap 7 detik. (optional)
}
