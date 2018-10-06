import ddf.minim.*;
import ddf.minim.signals.*;
import ddf.minim.analysis.*;  //importing library's
import ddf.minim.effects.*;
import processing.serial.*;

AudioPlayer player_1;
AudioPlayer player_2;
AudioPlayer player_3;

Minim minim;
Serial port;

void setup()
{
 
 println(Serial.list());
 minim = new Minim(this);
 port = new Serial(this, Serial.list()[0], 9600);
 
 frameRate(60);
 
 player_1 = minim.loadFile("tone1.mp3");
 player_2 = minim.loadFile("tone2.mp3");
 player_3 = minim.loadFile("tone3.mp3");
}

void draw()
{
  while(port.available() > 0){
    int myChar = (port.read());
    if(myChar == 'A'){
      player_1.cue(0);
      player_1.play();
    }
    
    if(myChar == 'B'){
      player_2.cue(0);
      player_1.play();
    }
    
    if(myChar == 'C'){
      player_3.cue(0);
      player_1.play();
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
