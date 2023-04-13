/*****************************************************************
*                           Mini BASIC                           *
*                        by Malcolm McLean                       *
*                           version 1.0                          *
* You can do virtually anything you like with this code,         *
* including incorporating it into your own programs, or          *
* modifying as the basis for a scripting language of your own.   *
* It would be nice to be acknowledged but I don't insist on it   *
* - you can pretend that you created the program on your own if  *
* it makes your boss happy. The only thing you can't do is       *
* restrict my rights in the program in any way. So any           *
* derivative works or enhancements I can use as I see fit.       *
*****************************************************************/

/*
  driver file for MiniBasic.
  by Malcolm Mclean
  Leeds University
*/

#include <stdio.h>
#include <stdlib.h>

#include "basic.h"

char *loadfile(char *path);

char *basename(char *n) {
        int i;
        i = 0;
        while(n[i] != 0) {
                i++;
        }
        while((i >= 0) && (n[i] != '\\') && (n[i] != '/')) {
                i--;
        }
        i++;
        return n + i;
}

void usage(char *path) {
    printf("MiniBasic Version 1.0. Copyright (c) by Malcolm McLean\n\n");
    printf("Usage:\n");
    printf("\t%s filename.bas\n\n", basename(path));
    printf("See documentation for BASIC syntax and LICENSE.TXT for license.\n");
    exit(EXIT_FAILURE);
}

/*
  call with the name of the Minibasic script file
*/
int main(int argc, char **argv) {
    char *scr;

    if(argc != 2) {
        /* comment out usage call to run test script */
        usage(argv[0]);
    } else {
        scr = loadfile(argv[1]);
        if(scr) {
            basic(scr, stdin, stdout, stderr);
            free(scr);
        }
    }

    return 0;
}

/*
  function to slurp in an ASCII file
  Params: path - path to file
  Returns: malloced string containing whole file
*/
char *loadfile(char *path) {
    FILE *fp;
    int ch;
    long i = 0;
    long size = 0;
    char *answer;

    fp = fopen(path, "r");
    if(!fp) {
        printf("Can't open %s\n", path);
        return 0;
    }

    fseek(fp, 0, SEEK_END);
    size = ftell(fp);
    fseek(fp, 0, SEEK_SET);

    answer = malloc(size + 100);
    if(!answer) {
        printf("Out of memory\n");
        fclose(fp);
        return 0;
    }

    while( (ch = fgetc(fp)) != EOF) {
        answer[i++] = ch;
    }

    answer[i++] = 0;

    fclose(fp);

    return answer;
}
