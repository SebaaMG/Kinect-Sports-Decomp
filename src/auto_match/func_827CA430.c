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


void fn_827CA430(int param_1,int param_2,int param_3,undefined4 *param_4)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  int iVar4;
  longlong lVar5;
  
  param_4 = (undefined4 *)*param_4;
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x114)) {
    param_3 = param_3 - (int)param_4;
    do {
      pbVar3 = *(byte **)(param_3 + (int)param_4);
      pbVar2 = (byte *)*param_4;
      bVar1 = *pbVar3;
      *pbVar2 = bVar1;
      pbVar3 = pbVar3 + 1;
      pbVar2[1] = (byte)((int)((uint)bVar1 * 3 + (uint)*pbVar3 + 2) >> 2);
      for (lVar5 = (ulonglong)*(uint *)(param_2 + 0x28) - 2; pbVar2 = pbVar2 + 2, lVar5 != 0;
          lVar5 = lVar5 + -1) {
        bVar1 = *pbVar3;
        *pbVar2 = (byte)((int)((uint)pbVar3[-1] + (uint)bVar1 * 3 + 1) >> 2);
        pbVar2[1] = (byte)((int)((uint)pbVar3[1] + (uint)bVar1 * 3 + 2) >> 2);
        pbVar3 = pbVar3 + 1;
      }
      bVar1 = *pbVar3;
      iVar4 = iVar4 + 1;
      param_4 = param_4 + 1;
      *pbVar2 = (byte)((int)((uint)pbVar3[-1] + (uint)bVar1 * 3 + 1) >> 2);
      pbVar2[1] = bVar1;
    } while (iVar4 < *(int *)(param_1 + 0x114));
  }
  return;
}

