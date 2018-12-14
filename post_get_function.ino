//FUNGSI UNTUK MELAKUKAN GET
String get_request(String url_api_get){
  HTTPClient http_get;
  http_get.begin(url_api_get);

  String payload;

  int httpCode_get = http_get.GET(); //Melakukan method GET
  Serial.println(httpCode_get);
    if (httpCode_get > 0) { //Check the returning code
 
      payload = http_get.getString();       //Mengambil data pada get berupa string
      Serial.println(payload);              //Melihat data hasil dari get
      Serial.println("COMPLETE");           //Debug sederhana (Optional)
    }
  http_get.end(); //menutup koneksi http_get
  return payload;
}
/////////////////////////////

//FUNGSI UNTUK MELAKUKAN POST
String post_request(String url_api_post, String content_type, char jsonMessage[]){
  HTTPClient http_post;
  http_post.begin(url_api_post);
  http_post.addHeader("Content-Type", content_type);

  String payload;

  int httpCode_post = http_post.POST(jsonMessage);
  Serial.println(httpCode_post);
    if (httpCode_post > 0) { //Check the returning code
 
      payload = http_post.getString();   //Mengambil request respon akibat dari post
      Serial.println(payload);                     //Print the response payload2
      Serial.println("COMPLETE");
    }
  http_post.end(); //menutup koneksi http_get
  return payload;
}
//////////////////////////////////



