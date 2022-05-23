// which accept number from user and display it's multiplication factor

#include<stdio.h>

int MultFact(int iNo)
{
    int iCnt = 0;
    int iMult = 1;

    for(iCnt = 1 ; iCnt < iNo ; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iMult = iMult * iCnt;            
        }
    }
    return iMult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter a number: \n");
    scanf("%d",&iValue);

    iRet = MultFact(iValue);

    printf("%d",iRet);

    return 0;
}
////////////////////////////////////////////////////////////////
//
//          TEST CASES     
//      Enter a number:
//      12
//      144
//
//      Enter a number:
//      13
//      1
//
//      Enter a number:
//      10
//      10
//
//      Enter a number:
//      24
//      13824
//
//      Enter a number:
//      18
//      324
//
//////////////////////////////////////////////////////