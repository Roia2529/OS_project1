#include "assign1.h"
#include <stdio.h>

int main()
{
    printf("Test byte_sort\n");
    unsigned long solution=0xefdebead04030201;
    printf("solution:%lu\n",solution);
    unsigned long r=byte_sort(0x0403deadbeef0201);
    printf("result  :%lu\n",r);
    if(r==solution)
        printf("correct!\n\n");

    printf("Test nibble_sort\n");
    solution=0xfeeeddba43210000;
    printf("solution:%lu\n",solution);
    r=nibble_sort(0xefdebead04030201);
    printf("result  :%lu\n",r);

    if(r==solution)
        printf("correct!\n\n");
    /*
    struct elt *list;
    list=name_list();
    while(list!=NULL)
    {
        printf("%c\n",list->val);
        list=list->link;
    }

    unsigned long test=0xffffffffffffffff;
    convert(BIN,test);
    printf("\n");
    convert(OCT,test);
    printf("\n");
    convert(HEX,test);
    printf("\n");
    printf("%lx",test);
    */

    return 0;
}

