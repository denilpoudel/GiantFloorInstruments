import ddf.minim.*;
import ddf.minim.signals.*;
import ddf.minim.analysis.*;  //importing library's
import ddf.minim.effects.*;
import processing.serial.*;


AudioSample player_1;
AudioSample player_2;
AudioSample player_3;

Minim minim;
Serial port;


void setup()
{
  println(Serial.list());
  minim = new Minim(this);
  port = new Serial(this, Serial.list()[0], 9600);
  frameRate(60);
 
  player_1 = minim.loadSample("toneTest.mp3");
  player_2 = minim.loadSample("tone2.mp3");
  player_3 = minim.loadSample("tone3.mp3");
}

void draw()
{  
  while(port.available() > 0){
    int myChar = (port.read());
    
    if(myChar == 'A'){
      player_1.trigger();
    }    
    
    if(myChar == 'B'){
      player_2.trigger();
    }
    
    if(myChar == 'C'){
      player_3.trigger();
    
    }
  }
}  

void stop()
{
  player_1.close();
  player_2.close();
  player_3.close();
  
  minim.stop();
  super.stop();
}
