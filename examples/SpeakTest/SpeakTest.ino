#include "Speaker.h"

grove_speaker_g speaker;

const int pinSpeaker = A5;

void setup() 
{

}

void loop() 
{
  for(int i=0; i<=8; i++)
  {
    speaker.SpeakerWrite(pinSpeaker, i);
    delay(500);
  }
}

/*********************************************************************************************************
  END FILE
*********************************************************************************************************/
