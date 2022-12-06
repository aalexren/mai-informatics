/* Problem:
 Find all words contain vowels 'y', 'o', 'u' only.
*/

#include<stdio.h>
#include"set.h"

char Word[20], S[2*N],              // S - set for word
Vowels[]="AEIOUYaeiouy", Sv[2*N],   // Sv - set for vowels
You[]="YOUyou", Sy[2*N], S1[2*N];   // Sy - set for letters y,o,u

int main()
{ int i, n, m=0; char oldc=' ', c;
    create_set(Vowels,Sv); create_set(You,Sy);
//      DisplaySet(Sv); DisplaySet(Sy);   // print for test
  while(i!=EOF)
  { i=getchar(); c=i;
    if(!letter(oldc)&&letter(c)){n=0;Word[0]=c;}  // begin of word
    if(letter(oldc)&&letter(c)) Word[++n]=c;
    if(letter(oldc)&&!letter(c))                  // end of word
    { Word[++n]='\0';
      create_set(Word,S); inters_set(S,Sv,S1);      // intersection of sets
//	DisplaySet(S); DisplaySet(S1);                    // print for test
       if(!empty_set(S1)&&include_set(S1,Sy))       // only our vowels
	 { printf("%s ",Word); if(!(++m%10)) printf("\n"); }
    }
   oldc=c;
  }

  return 0;
}
/* After:
	  to_lab13.exe <to_lab13.cpp >>to_lab13.cpp
   Result:

words y o u only Word for word for You 
YOUyou Sy Sy for y o u oldc You Sy 
Sy for oldc Word of word oldc Word oldc of 
word Word Word of for Sy only our Word oldc 

*/