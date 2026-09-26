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


void fn_82AAC290(int param_1,short *param_2,int param_3,int param_4,longlong param_5)

{
  int *piVar1;
  int iVar2;
  short *psVar3;
  int *piVar4;
  longlong lVar5;
  
  if (0 < (int)param_5) {
    do {
      iVar2 = 0;
      psVar3 = param_2;
      if (0 < param_4) {
        do {
          piVar4 = (int *)(param_1 + -4);
          lVar5 = 2;
          do {
            piVar4 = piVar4 + 1;
            *psVar3 = *(short *)(*piVar4 + iVar2 * 2) + -0x8000;
            psVar3 = psVar3 + 1;
            lVar5 = lVar5 + -1;
          } while (lVar5 != 0);
          iVar2 = iVar2 + 1;
        } while (iVar2 < param_4);
      }
      piVar4 = (int *)(param_1 + -4);
      lVar5 = 2;
      do {
        piVar1 = piVar4 + 1;
        piVar4 = piVar4 + 1;
        *piVar4 = *piVar1 + param_4 * 2;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
      param_5 = param_5 + -1;
      param_2 = (short *)((int)param_2 + param_3);
    } while (param_5 != 0);
  }
  return;
}

