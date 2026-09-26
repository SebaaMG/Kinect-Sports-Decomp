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


void fn_82F07900(undefined8 param_1,short *param_2,short *param_3,int param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  int iVar5;
  
  if (*param_3 < 2) {
    return;
  }
  iVar2 = 0;
  iVar3 = 0;
  if (0 < param_5) {
    psVar4 = param_2;
    do {
      if (*psVar4 != 0) {
        iVar2 = iVar2 + 1;
      }
      if (iVar2 == *param_3 + -1) break;
      iVar3 = iVar3 + 1;
      psVar4 = psVar4 + 1;
    } while (iVar3 < param_5);
  }
  iVar5 = iVar3 + 1;
  iVar2 = 0;
  if (iVar5 < param_5) {
    psVar4 = param_2 + iVar5;
    do {
      if (*psVar4 != 0) {
        iVar2 = iVar5 - iVar3;
        break;
      }
      iVar5 = iVar5 + 1;
      psVar4 = psVar4 + 1;
    } while (iVar5 < param_5);
  }
  if (iVar2 <= *(int *)((param_5 >> 5) * 4 + param_4)) {
    return;
  }
  uVar1 = (int)param_2[iVar5] >> 0x1f;
  if ((int)(((int)param_2[iVar5] ^ uVar1) - uVar1) < 3) {
    param_2[iVar5] = 0;
    *param_3 = *param_3 + -1;
    return;
  }
  return;
}

