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
extern int fn_82F68B7C();


void fn_82DD8618(byte *param_1,int param_2)

{
  byte bVar1;
  longlong lVar2;
  int iVar3;
  byte *pbVar4;
  
  bVar1 = param_1[2];
  iVar3 = bVar1 - 1;
  param_1[2] = (byte)iVar3;
  pbVar4 = param_1 + iVar3 * 8 + 4;
  *(undefined4 *)(param_1 + param_2 * 8 + 4) = *(undefined4 *)pbVar4;
  *(undefined4 *)(param_1 + param_2 * 8 + 8) = *(undefined4 *)(param_1 + iVar3 * 8 + 8);
  lVar2 = (longlong)((int)((uint)param_1[1] + (uint)*param_1 + -1) >> 1);
  if (-1 < lVar2) {
    lVar2 = lVar2 + 1;
    iVar3 = ((uint)bVar1 * 8 + 4) - (int)pbVar4;
    do {
      *(undefined4 *)pbVar4 = *(undefined4 *)(pbVar4 + (int)(param_1 + iVar3));
      pbVar4 = pbVar4 + 4;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  fn_82F68B7C();
  return;
}

