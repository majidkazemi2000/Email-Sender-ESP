#include <EMailSender.h>
#include <ESP8266WiFi.h>

const char* ssid = "**ssid**";
const char* password = "**preshared key**";

EMailSender emailSend("**sender email**", "**password**");


void setup()
{
    Serial.begin(9600);
    WiFi.begin(ssid,password);
    Serial.println("");
    while(WiFi.status() != WL_CONNECTED){
      Serial.print(" . ");
      delay(300);
    }
    Serial.println("");

    EMailSender::EMailMessage message;
    message.subject = "**subject**";
    message.message = "**text**";
    EMailSender::Response resp = emailSend.send("**receiver email**", message);
    Serial.println("Sending status: ");
    Serial.println(resp.status);
}


/*
 * write by majidkazemi
 * github ==> github.com/majidkazemi2000/
 */

void loop()
{

}
