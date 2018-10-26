import ddf.minim.*;
import ddf.minim.signals.*;
import ddf.minim.analysis.*;  //importing library's
import ddf.minim.effects.*;
import processing.serial.*;


AudioSample player_1;
AudioSample player_2;
AudioSample player_3;
AudioSample player_4;
AudioSample player_5;
AudioSample player_6;

Minim minim;
Serial port;


void setup()
{
  println(Serial.list());
  minim = new Minim(this);
  port = new Serial(this, Serial.list()[0], 9600);
  frameRate(60);
 
  player_1 = minim.loadSample("tone1.mp3");
  player_2 = minim.loadSample("tone2.mp3"); //left
  player_3 = minim.loadSample("tone3.mp3"); //middle
  player_4 = minim.loadSample("tone4.mp3"); //left
  player_5 = minim.loadSample("tone5.mp3"); //left
  player_6 = minim.loadSample("tone6.mp3"); //left

}

void draw()
{  
  while(port.available() > 0){
    int myChar = (port.read());
    println(myChar);
    if(myChar == 'A'){
      player_1.trigger();
    }    
    
    if(myChar == 'B'){
      player_2.trigger();
    }
    
    if(myChar == 'C'){
      player_3.trigger();
    
    }
        if(myChar == 'D'){
      player_4.trigger();
    
    }
        if(myChar == 'E'){
      player_5.trigger();
    
    }
        if(myChar == 'F'){
      player_6.trigger();
    
    }
  }
}  

void stop()
{
  player_1.close();
  player_2.close();
  player_3.close();
  player_4.close();
  player_5.close();
  player_6.close();
  
  minim.stop();
  super.stop();
}
