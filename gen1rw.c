#include <stdio.h>
#include "gen1rw.h"

int readSave(){
    FILE *file = fopen("file.sav", "rb");
    if (file == NULL)
    {
        return -1; // or any error code you prefer
    }
    else
    {
        // process the file
        fclose(file);
        return 1; // or any success code you prefer
    }
}