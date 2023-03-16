#include <mp4v2/mp4v2.h>
#include <stdio.h>

#include <inttypes.h>

int main()
{

    /* open file for read */
    const MP4FileHandle file = MP4Read("/home/lucy/Documents/runinswithlaw/DUI2020/tick379273065-tick379276718-video0.mp4"); 
    if( file == MP4_INVALID_FILE_HANDLE ) {
        printf( "MP4Read failed\n" );
        return 1;
    }



    /* dump file contents */
    if( !MP4Dump( file, 1 ))
        printf( "MP4Dump failed\n" );
    
    uint32_t a=0, b=1;


    printf("Track zero has this many edits : %lu\n", MP4GetTrackNumberOfEdits(file, a));
    printf("Track 1 has this many edits : %lu\n", MP4GetTrackNumberOfEdits(file, b));


    /* cleanup and close */
    MP4Close( file );

}
