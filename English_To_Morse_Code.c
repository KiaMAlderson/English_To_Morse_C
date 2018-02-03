#include <stdio.h>
#include <ctype.h>
#include <string.h>

char alphabet[26][6] ={".- ","-... ","-.-. ", //A B C
                       "-.. ",". ","..-. ", //D E F
                       "--. ",".... ",".. ", //G H I
                       ".--- ","-.- ",".-.. ", //J K L
                       "-- ","-. ","--- ", //M N O
                       ".--. ","--.- ",".-. ", //P Q R
                       "... ","- ","..- ", //S T U
                       "...- ",".-- ","-..- ", //V W X
                       "-.-- ","--.. "}; //Y Z

int charToIndex(char c){
  switch(tolower(c)){
    case 'a': return 0;
    case 'b': return 1;
    case 'c': return 2;
    case 'd': return 3;
    case 'e': return 4;
    case 'f': return 5;
    case 'g': return 6;
    case 'h': return 7;
    case 'i': return 8;
    case 'j': return 9;
    case 'k': return 10;
    case 'l': return 11;
    case 'm': return 12;
    case 'n': return 13;
    case 'o': return 14;
    case 'p': return 15;
    case 'q': return 16;
    case 'r': return 17;
    case 's': return 18;
    case 't': return 19;
    case 'u': return 20;
    case 'v': return 21;
    case 'w': return 22;
    case 'x': return 23;
    case 'y': return 24;
    case 'z': return 25;
  }
  return -1;
}

int main(){
  printf("Enter a string of letters to convert to Morse : \n");
  char englishString[64];
  char result[316] = "";
  scanf("%s", englishString);

  for (unsigned int i = 0; i < strlen(englishString); i ++){
    char letter = englishString[i];

    if(letter == ' '){
      strcpy(&result[strlen(result)], "/ ");
      continue;
    }

    int index = charToIndex(letter);
    if(index == -1){
      continue;
    }
    strcpy(&result[strlen(result)], alphabet[index]);
  }

  for(int k = 0; k < 300; k++){
    printf("%c", result[k]);
  }
return 1;
}
