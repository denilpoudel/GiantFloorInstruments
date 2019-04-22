import ddf.minim.*;
import ddf.minim.signals.*;
import ddf.minim.analysis.*;  //importing library's
import ddf.minim.effects.*;
import processing.serial.*;

AudioSample Note_C;
AudioSample Note_C_sharp;
AudioSample Note_D;
AudioSample Note_D_sharp;
AudioSample Note_E;
AudioSample Note_E_sharp;
AudioSample Note_F;
AudioSample Note_F_sharp;
AudioSample Note_G;
AudioSample Note_G_sharp;
AudioSample Note_A;
AudioSample Note_A_sharp;
AudioSample Note_B;

AudioSample Note_Cn;
AudioSample Note_Cn_sharp;
AudioSample Note_Dn;
AudioSample Note_Dn_sharp;
AudioSample Note_En;

//makes sure that the song is only played once to the player
boolean playOnce;

//if the user selects to play a game or not
boolean playGame = false;

//speed of the song. this is declared in each song mode.
int songSpeed;

Minim minim;
Serial port;
AudioSample[] arr;
//arraylist containing the preset pattern song
ArrayList<Integer> notes;
//arraylist containing what the user plays when they select to play a game
ArrayList<Integer> userNotes;
boolean passSong;
int[] hi;
boolean clearList;

void setup()
{
  size(600, 600);

  println(Serial.list());
  minim = new Minim(this);
  port = new Serial(this, "COM6", 9600);
  frameRate(60);

// loads all of the sounds
  Note_C = minim.loadSample("C4.mp3"); //left
  Note_C_sharp = minim.loadSample("Db4.mp3");
  Note_D = minim.loadSample("D4.mp3"); //left
  Note_D_sharp = minim.loadSample("Eb4.mp3"); //middle
  Note_E = minim.loadSample("E4.mp3"); //left
  Note_F = minim.loadSample("F4.mp3"); //left
  Note_F_sharp = minim.loadSample("Gb4.mp3"); //left
  Note_G = minim.loadSample("G4.mp3"); //left
  Note_G_sharp = minim.loadSample("Ab4.mp3"); //left
  Note_A = minim.loadSample("A4.mp3"); //left
  Note_A_sharp = minim.loadSample("Bb4.mp3"); //left
  Note_B = minim.loadSample("B4.mp3");
  
  Note_Cn = minim.loadSample("C5.mp3"); //left
  Note_Cn_sharp = minim.loadSample("Db5.mp3");
  Note_Dn = minim.loadSample("D5.mp3"); //left
  Note_Dn_sharp = minim.loadSample("Eb5.mp3"); //middle
  Note_En = minim.loadSample("E5.mp3"); //left

  arr = new AudioSample[17];
  notes = new ArrayList<Integer>();
  userNotes = new ArrayList<Integer>();
  
  userNotes.add(1);
  userNotes.add(2);
  userNotes.add(3);
  userNotes.add(4);
  userNotes.add(5);
  
  arr[0] = Note_C; 
  arr[1] = Note_C_sharp; 
  arr[2] = Note_D; 
  arr[3] = Note_D_sharp;
  arr[4] = Note_E;
  arr[5] = Note_F;
  arr[6] = Note_F_sharp;
  arr[7] = Note_G;
  arr[8] = Note_G_sharp;
  arr[9] = Note_A;
  arr[10] = Note_A_sharp;
  arr[11] = Note_B;
  arr[12] = Note_Cn;
  arr[13] = Note_Cn_sharp; 
  arr[14] = Note_Dn; 
  arr[15] = Note_Dn_sharp;
  arr[16] = Note_En;
  
  playOnce = false;
  
  passSong = true;
  clearList = false;
}

void draw()
{  
  //draws all of the different modes
  background(0);
  fill(200, 0, 0);
  rect(150, 150, 100, 100);
  fill(0, 0, 0, 100);
  rect(350, 150, 100, 100);
  fill(0, 255, 0, 100);
  rect(350, 150, 100, 100);
  fill(0, 255, 100, 100);
  rect(100, 350, 400, 200);
  fill(255);
  textSize(20);
  text("Decently\nHard", 360, 200);
  text("Easyyyy", 155, 200);
  textSize(40);
  text("DEATH MODE", 130, 600);
  
  int a = 150;
  int b = 250;
  int c = 100;
  
  //EASY MODE
  if (mouseX>=150 && mouseY>=150 && mouseX<=250 && mouseY<=250) {
    fill(0, 0, 0, 100);
    rect(150, 150, 100, 100);
    if (mousePressed==true) {
      /*
      fill(0, 255, 0, 100);
      rect(150, 150, 100, 100);
      fill(255, 0, 0);
      rect(350, 150, 100, 100);              //MORE INTERFACE INTERACTRION
      fill(255);
      */
      text("play free", 360, 200);
      text("get fucked", 155, 200);
      
      //Removes all of the notes that were put into this arraylist by clicking a song
      notes.removeAll(notes);
      
      //Adds the preset notes into the empty arraylist, populating them with a new pattern of notes
      //0: C | 1: C# | 2: D | 3:D# | 4: E | 5: F |  6: F# | 7: G | 8: G# | 9: A | 10: A# | 11: B
      notes.add(0);
      notes.add(4);
      notes.add(7);
      notes.add(4);
      notes.add(0);
      
      //SPEED OF THE SONG
      songSpeed = 700;
      
      userNotes.removeAll(userNotes);

      playGame = true;
      playOnce = true;
    }
  }
  
  //DECENTLY HARD
  if (mouseX>=350 && mouseY>=150 && mouseX<=450 && mouseY<=250) {
    fill(0, 0, 0, 100);
    rect(350, 150, 100, 100);
    if (mousePressed==true) {

      text("play free", 360, 200);
      text("get fucked", 155, 200);
      
      notes.removeAll(notes);
      //0: C | 1: C# | 2: D | 3:D# | 4: E | 5: F |  6: F# | 7: G | 8: G# | 9: A | 10: A# | 11: B
      
      notes.add(1);
      notes.add(2);
      notes.add(4);
      notes.add(1);
      notes.add(5);
      
      songSpeed = 500;
      userNotes.removeAll(userNotes);
      playGame = true;
      playOnce = true;
    }
  }
  
  //DEATH MODE
  if (mouseX>=100 && mouseY>=350 && mouseX<=750 && mouseY<=500) {
    fill(0, 0, 0, 100);
    rect(350, 150, 100, 100);
    if (mousePressed==true) {

      text("play free", 360, 200);
      text("get fucked", 155, 200);
      
      notes.removeAll(notes);
      //0: C | 1: C# | 2: D | 3:D# | 4: E | 5: F |  6: F# | 7: G | 8: G# | 9: A | 10: A# | 11: B
      
      notes.add(0);
      notes.add(11);
      notes.add(2);
      notes.add(9);
      notes.add(4);
      notes.add(7);
      
      for(int i = 0; i < 12; i++)
      {
        notes.add(i);
      }
      
      songSpeed = 200;
      
      userNotes.removeAll(userNotes);

      playGame = true;
      playOnce = true;
    }
  }
  
  //if user selected to play a game, this will play the song for them to attempt to memorize
  if(playGame == true)
  {
    //plays the song ONCE
    if(playOnce == true)
    {
      playOnce = false;
      //for the note inside the preset pattern of notes
      for(int i: notes)
      {
        //will play each individual notes of the preset pattern song
        arr[i].trigger();
        //port.write(arr[i]); I THINK THIS IS HOW YOU WRITE TO THE ARDUINO (ignore the arr[i] argument) TO LIGHT UP THE RESPECTIVE LIGHT TO THE NOTE, SO THAT THE PLAYER CAN SEE THE LIGHT WITH THE SOUND. 
        // it should some argument that lights up the right LED strip depending on the note being played.
        delay(songSpeed);
      }
    }
    
    //if the user has clicked enough keys
    if(userNotes.size() == notes.size())
    {
      //if the notes match
      if(userNotes.equals(notes))
      {
        println("u: " + userNotes + " n: " + notes);
        println("YOU PASSED");
        passSong = true;
      }
      //if user fails
      else
      {
        passSong = false;
      }
    }
    
     if(passSong == false)
      {
        println("u: " + userNotes + " n: " + notes);
        playGame = false;
        passSong = true;
        println("YOU SUCK ASS BITCH");
      }
  }

  /////////////////

// upon button press, the sound will play and if a game is occuring, the userNotes arraylist will populate to be compared to the preset pattern song Notes (arraylist)
  while (port.available() > 0) {
    int myChar = (port.read());
    println(myChar);
    if (myChar == 'A') {
      Note_C.trigger();
      userNotes.add(0);
    }    

    if (myChar == 'B') {
      Note_C_sharp.trigger();
      userNotes.add(1);
    }

    if (myChar == 'C') {
      Note_D.trigger();
      userNotes.add(2);
    }
    if (myChar == 'D') {
      Note_D_sharp.trigger();
      userNotes.add(3);
    }
    if (myChar == 'E') {
      Note_E.trigger();
      userNotes.add(4);
    }
    if (myChar == 'F') {
      Note_F.trigger();
      userNotes.add(5);
    }
    if (myChar == 'G') {
      Note_F_sharp.trigger();
      userNotes.add(6);
    }
    if (myChar == 'H') {
      Note_G.trigger();
      userNotes.add(7);
    }
    if (myChar == 'I') {
      Note_G_sharp.trigger();
      userNotes.add(8);
    }
    if (myChar == 'J') {
      Note_A.trigger();
      userNotes.add(9);
    }
    if (myChar == 'K') {
      Note_A_sharp.trigger();
      userNotes.add(10);
    }
    if (myChar == 'L') {
      Note_B.trigger();
      userNotes.add(11);
    }
  }
}  

void stop()
{
  Note_C_sharp.close();
  Note_D.close();
  Note_D_sharp.close();
  Note_E.close();
  Note_E_sharp.close();
  Note_F.close();

  minim.stop();
  super.stop();
}

 /*
   if (playGame == true) {
    for(int i: notes)
    {
      arr[i].trigger();
      delay(500);
    }
    print("yeet");
    playGame = false;
  }
  */
  //notes.size() length of the song
 
   /*
  if(playGame == true){
 //println(userNotes); 
 
    for(int i = 0; i < notes.size() +1; i++)
    {
      if(userNotes.get(i + notes.size()  - 1 ) == notes.get(i + notes.size() - 1) || userNotes.get(i) == 0)
      {
        print(i + ". - " + " 1: " + userNotes.get(i) + " 2: " + notes.get(i) + "\n");
        passSong = true;
      }
      else
        passSong = false;
    }
      
      if(passSong == false)
      {
        playGame = false;
        print("YOU SUCK ASS BITCH");
      }
    
  }
  */
