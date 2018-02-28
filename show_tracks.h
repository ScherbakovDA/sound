//
// Created by denis on 28.02.18.
//
#include<iostream>

#ifndef SOUNDS_SHOW_TRACKS_H
#define SOUNDS_SHOW_TRACKS_H

void show_tracks()
{
    for(num = 1; num <= size; num++)
    {
        std::cout << tracks.show_name(num) << std::endl;
    }

}

#endif //SOUNDS_SHOW_TRACKS_H
