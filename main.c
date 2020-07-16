/* project:         a test file                 */
/* brief:           just for test               */
/* auther:          zhusb                       */
/* date:            2020-07-16                  */
/* description:     None                        */
/************************************************/

#include <stdio.h>
#include "hello.h"

int main()
{
    int rt=0;
    rt=helloworld();
    if(rt==0)
    {
        printf("success!");
    }
    else
    {
        printf("failure!");
    }
    printf("This program is finished!");
    
    return 0
]

/* EOF */
