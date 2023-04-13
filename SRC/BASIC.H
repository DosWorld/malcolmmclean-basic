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

#ifndef _BASIC_H_
#define _BASIC_H_
/*
  Minibasic header file
  By Malcolm Mclean
*/

int basic(const char *script, FILE *in, FILE *out, FILE *err);

#endif


