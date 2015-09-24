// library for seeed Graphic programming project
// loovee @ 2015-9-24
// under MIT license
#ifndef __GROVE_SPEAKER_G_H__
#define __GROVE_SPEAKER_G_H__
#include <Arduino.h>

#define NOTE_1  320
#define NOTE_2  360
#define NOTE_3  400
#define NOTE_4  425
#define NOTE_5  480
#define NOTE_6  532
#define NOTE_7  600
#define NOTE_8  651

#define NO_NOTE 0 


class grove_speaker_g{
    
public:

    void SpeakerWrite(int PinName,int Note)
    {
        if(Note > 8)Note = 0;
        
        int __note[8] = {NOTE_1, NOTE_2, NOTE_3, NOTE_4, NOTE_5, NOTE_6, NOTE_7, NOTE_8};
        
        if(Note == 0)noTone(PinName);
        else
        {
            tone(PinName, __note[Note-1], 0);
        }
    }
};


#endif