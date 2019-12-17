#include <stdio.h>
#include <string.h>

char cyphertext[]="GXXGS EZJIJ TEBCE HGJUB ZRBDE ZGYED AKJJE HRKCU IIRTE DKXED NBHJK EIDGP JTEJE ZJTIJ GZDAP NBHNK HJTEH UZIJH KRJUB ZIJTE PMUXX NBXXB MJTEM EGCBZ MUXXA EDEXU LEHED BZJTE EUSTJ TGZDJ TEJGH SEJMU XXAEU DEZJU NUEDU ZJTEE YGUXP BKMUX XHERE ULEBZ JTEZU ZJTJT ESBIU SZGXM UXXAE IEZJB ZJTEY BHZUZ SBNJT EJEZJ T";
char alphabet[]="abcdefghijklmnopqrstuvwxyz";

int main(void) 
{
    int i;
    char * name = "Your Name\0";

    printf("Hello %s, ", name);

    // removing spaces, printing forward
    for (i = 0; i < strlen(name); i++) {
      if (name[i] != ' ') printf("%c", name[i]);
    }
    printf(" or ");

    // keeping spaces, printing backwards
    for (i = strlen(name); i >= 0; i--) {
      printf("%c", name[i]);
    }
     printf("\n");

  printf("\nThe cypher challenge text is :\n");
  for (i = 0; i < strlen(cyphertext); i++){
    if (i%30 == 0) printf("\n");
    printf("%c", cyphertext[i]);
  }

    printf("\n\n");
    printf("[We think we know: \"JTE\" is \"the\"]\n");
    printf("[We are trying . : \"D\" as \"a\" and \"V\" as \"s\"]\n");

    printf("\nAaand, translated the text is :\n");
    for (i=0; i<strlen(cyphertext); i++){
      // formatting
      //if (i%30 == 0) printf("\n");

      // translated letters
      if (cyphertext[i] == 'J') printf("t"); else
      if (cyphertext[i] == 'T') printf("h"); else
      if (cyphertext[i] == 'E') printf("e"); else

      // trying these ones
      if (cyphertext[i] == 'Z') printf("n"); else
      if (cyphertext[i] == 'K') printf("u"); else
      if (cyphertext[i] == 'H') printf("r"); else
      if (cyphertext[i] == 'C') printf("p"); else
      if (cyphertext[i] == 'I') printf("s"); else
      if (cyphertext[i] == 'D') printf("d"); else
      if (cyphertext[i] == 'G') printf("a"); else
      if (cyphertext[i] == 'P') printf("y"); else
      if (cyphertext[i] == ' ') printf(""); else

      // display the letter we don't know yet
      printf("%c", cyphertext[i]);
    }
    printf("\n");
    return 0;
} 

