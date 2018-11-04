//
// Created by jon on 11/4/18.
//

#include "DES.c"

int testPadding();

//int main() {
//
//    printf("Starting tests....\n");
//
//    int succ = 0;
//    int total = 1;
//    succ += testPadding();
//
//    printf("Passed %i out of %i tests.\n", succ, total);
//
//    if(succ < total) {
//        return 1;
//    }
//
//    return 0;
//}

int testPadding() {

    BLOCKLIST blocklist = malloc(sizeof(BLOCK));

    blocklist->next = NULL;
    blocklist->block = 12;
    blocklist->size = 1;

    blocklist = pad_last_block(blocklist);

    if(blocklist->next != NULL) {
        return 1;
    } else {
        return 0;
    }
}