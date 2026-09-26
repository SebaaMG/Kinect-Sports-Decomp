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


void fn_82AAC3E8(int param_1,short *param_2,int param_3,int param_4,longlong param_5)

{
  int *piVar1;
  short *psVar2;
  int iVar3;
  short *psVar4;
  int *piVar5;
  longlong lVar6;
  
  if (0 < (int)param_5) {
    do {
      iVar3 = 0;
      psVar4 = param_2;
      if (0 < param_4) {
        do {
          *psVar4 = -1;
          piVar5 = (int *)(param_1 + -4);
          lVar6 = 3;
          psVar2 = psVar4;
          do {
            piVar5 = piVar5 + 1;
            psVar2 = psVar2 + 1;
            *psVar2 = *(short *)(*piVar5 + iVar3 * 2) + -0x8000;
            lVar6 = lVar6 + -1;
          } while (lVar6 != 0);
          iVar3 = iVar3 + 1;
          psVar4 = psVar4 + 7;
        } while (iVar3 < param_4);
      }
      piVar5 = (int *)(param_1 + -4);
      lVar6 = 3;
      do {
        piVar1 = piVar5 + 1;
        piVar5 = piVar5 + 1;
        *piVar5 = *piVar1 + param_4 * 2;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
      param_5 = param_5 + -1;
      param_2 = (short *)((int)param_2 + param_3);
    } while (param_5 != 0);
  }
  return;
}

