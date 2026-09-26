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


bool fn_8278B2C8(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  
  piVar1 = *(int **)(param_1 + 8);
  if (piVar1 == param_2) {
    return true;
  }
  if (((piVar1 == (int *)0x0) || (param_2 == (int *)0x0)) || (*piVar1 != *param_2)) {
    return false;
  }
  iVar2 = *piVar1 * 4;
  pbVar4 = (byte *)(param_2 + 1);
  pbVar6 = (byte *)(piVar1 + 1);
  lVar3 = 0;
  if (iVar2 != 0) {
    pbVar5 = pbVar6 + iVar2;
    do {
      lVar3 = (ulonglong)*pbVar6 - (ulonglong)*pbVar4;
      if (lVar3 != 0) break;
      pbVar6 = pbVar6 + 1;
      pbVar4 = pbVar4 + 1;
    } while (pbVar6 != pbVar5);
  }
  return (int)lVar3 == 0;
}

