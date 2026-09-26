typedef unsigned char undefined1;
typedef unsigned char byte;
typedef unsigned char undefined;
typedef unsigned char bool;
#define true 1
#define false 0
typedef unsigned short undefined2;
typedef unsigned short ushort;
typedef unsigned short word;
typedef unsigned int undefined4;
typedef unsigned int uint;
typedef unsigned int dword;
typedef unsigned int ulong;
typedef unsigned __int64 undefined8;
typedef unsigned __int64 ulonglong;
typedef unsigned __int64 qword;
typedef __int64 longlong;
typedef int (*code)();
typedef unsigned char U8;
typedef unsigned short U16;
typedef unsigned int U32;
typedef unsigned __int64 U64;
typedef signed char S8;
typedef signed short S16;
typedef signed int S32;
typedef __int64 S64;
typedef struct { U64 lo, hi; } V16;
extern int fn_826BCD88();


int * fn_827A5498(int *param_1,int *param_2)

{
  short sVar1;
  short *psVar2;
  int iVar3;
  int iVar4;
  short *psVar5;
  
  if (param_2[2] == 10) {
    iVar4 = 10;
    param_1[1] = 0;
    param_1[2] = 0;
    goto LAB_827a5898;
  }
  psVar5 = (short *)(param_2[4] * 2 + *param_2);
  psVar2 = (short *)param_2[1];
  *param_2 = (int)psVar5;
  param_2[4] = 1;
  param_2[5] = param_2[5] + param_2[7];
  param_2[3] = (int)psVar5;
  param_2[6] = param_2[6] + param_2[8];
  param_2[7] = 0;
  param_2[8] = 0;
  if (psVar5 == psVar2) {
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[2] = 10;
  }
  else {
    sVar1 = *psVar5;
    iVar4 = fn_826BCD88(0xffffffff820094c8,sVar1);
    if (iVar4 == 0) {
      iVar4 = fn_826BCD88(0xffffffff82008a68,sVar1);
      if (((iVar4 == 0) && (sVar1 != 0x5f)) && (sVar1 != 0x2e)) {
        if (sVar1 == 0x22) {
          psVar5 = psVar5 + 1;
          param_2[8] = 1;
          if (psVar5 != psVar2) {
            do {
              if (*psVar5 == 0x22) break;
              psVar5 = psVar5 + 1;
              param_2[4] = param_2[4] + 1;
              param_2[8] = param_2[8] + 1;
            } while (psVar5 != (short *)param_2[1]);
          }
          param_2[2] = 1;
          param_2[8] = param_2[8] + 1;
          param_2[4] = param_2[4] + 1;
        }
        else {
          iVar4 = fn_826BCD88(0xffffffff82009108,sVar1);
          if (iVar4 == 0) {
            if (sVar1 == 0x23) {
              psVar5 = psVar5 + 1;
              param_2[8] = 1;
              if (psVar5 != psVar2) {
                do {
                  iVar4 = fn_826BCD88(0xffffffff82009748,*psVar5);
                  if (iVar4 == 0) break;
                  psVar5 = psVar5 + 1;
                  param_2[4] = param_2[4] + 1;
                  param_2[8] = param_2[8] + 1;
                } while (psVar5 != (short *)param_2[1]);
              }
              iVar4 = 4;
              goto LAB_827a57ac;
            }
            if (sVar1 == 0x2c) {
              iVar4 = 5;
            }
            else if (sVar1 == 0x3a) {
              iVar4 = 9;
            }
            else if (sVar1 == 0x3b) {
              iVar4 = 8;
            }
            else if (sVar1 == 0x7b) {
              iVar4 = 6;
            }
            else if (sVar1 == 0x7d) {
              iVar4 = 7;
            }
            else {
              iVar4 = 0xb;
            }
            param_2[2] = iVar4;
            param_2[8] = 1;
          }
          else {
            psVar5 = psVar5 + 1;
            param_2[8] = 1;
            if (psVar5 != psVar2) {
              do {
                sVar1 = *psVar5;
                iVar4 = fn_826BCD88(0xffffffff82009108,sVar1);
                if ((iVar4 == 0) && (sVar1 != 0x2e)) break;
                psVar5 = psVar5 + 1;
                param_2[4] = param_2[4] + 1;
                param_2[8] = param_2[8] + 1;
              } while (psVar5 != (short *)param_2[1]);
            }
            param_2[2] = 3;
            if (*psVar5 == 0x2e) {
              psVar5 = psVar5 + 2;
              param_2[4] = param_2[4] + 1;
              param_2[8] = param_2[8] + 2;
              if (psVar5 != (short *)param_2[1]) {
                do {
                  iVar4 = fn_826BCD88(0xffffffff82009108,*psVar5);
                  if (iVar4 == 0) break;
                  psVar5 = psVar5 + 1;
                  param_2[4] = param_2[4] + 1;
                  param_2[8] = param_2[8] + 1;
                } while (psVar5 != (short *)param_2[1]);
              }
            }
          }
        }
      }
      else {
        psVar5 = psVar5 + 1;
        param_2[8] = 1;
        if (psVar5 != psVar2) {
          do {
            sVar1 = *psVar5;
            iVar4 = fn_826BCD88(0xffffffff820083c8,sVar1);
            if (((iVar4 == 0) && (sVar1 != 0x2d)) && (sVar1 != 0x5f)) break;
            psVar5 = psVar5 + 1;
            param_2[4] = param_2[4] + 1;
            param_2[8] = param_2[8] + 1;
          } while (psVar5 != (short *)param_2[1]);
        }
        param_2[2] = 0;
      }
    }
    else {
      while( true ) {
        if (*psVar5 == 10) {
          param_2[8] = 0;
          param_2[7] = param_2[7] + 1;
        }
        psVar5 = psVar5 + 1;
        param_2[8] = param_2[8] + 1;
        if ((psVar5 == psVar2) || (iVar4 = fn_826BCD88(0xffffffff820094c8,*psVar5), iVar4 == 0))
        break;
        param_2[4] = param_2[4] + 1;
      }
      iVar4 = 2;
LAB_827a57ac:
      param_2[2] = iVar4;
    }
  }
  iVar3 = param_2[4];
  iVar4 = param_2[2];
  param_1[1] = param_2[3];
  param_1[2] = iVar3;
LAB_827a5898:
  *param_1 = iVar4;
  return param_1;
}

