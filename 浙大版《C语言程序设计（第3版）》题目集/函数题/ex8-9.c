#include "header.h"
#define MAXS 15

void StringCount( char *s );
void ReadString( char *s ); /* 由裁判实现，略去不表 */

int main()
{
    char s[MAXS] = "aZ&*? 093 Az";

    // ReadString(s);
    
    StringCount(s);

    return 0;
}

/* Your function will be put here */
void StringCount( char *s ){
    int cap_letter=0, low_letter=0, space=0, number=0, other=0;
    while (*s)
    {
        if (*s >= 'A' && *s <= 'Z'){
            cap_letter++;
        }else if (*s >= 'a' && *s <= 'z'){
            low_letter++;
        }else if (*s == ' '){
            space++;
        }else if (*s >= '0' && *s <= '9'){
            number++;
        }else{
            other++;
        }
        s++;
    }
    printf("%d %d %d %d %d", cap_letter, low_letter, space, number, other);
}