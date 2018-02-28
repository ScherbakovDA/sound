//
// Created by denis on 28.02.18.
//
#include<iostream>
#include"show_tracks.h"

int main()
{
    int list_tracks[10];
    int num_track = 0;

    void show_tracks();

    for(int i = 0; i < 10; i++)
    {
        std::cin >> num_track;
        if(num_track == 32) break;
        list_tracks[i] = num_track;
    }

    void play(list_tracks); // FIXIT; to use thread!

    return 0;
}
