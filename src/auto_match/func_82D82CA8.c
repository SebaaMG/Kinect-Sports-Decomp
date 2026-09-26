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


void fn_82D82CA8(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  uVar4 = (ulonglong)*(uint *)(param_1 + 0x2c);
  if (-1 < (longlong)(uVar4 - 1)) {
    lVar5 = (uVar4 - 1 & 0x3fffffff) << 2;
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0x28) + (int)lVar5);
      uVar3 = ((longlong)(*(int *)(iVar1 + 0x1c) / 0x50) + 4U & 0x7fffffff) * 2;
      iVar2 = ((int)((uVar3 + (uVar3 & 0x7fffffff) * 2 + (ulonglong)*(uint *)(iVar1 + 0x14) &
                     0xffffffff) << 2) + 0x17U & 0xfffffff0) +
              (int)((((ulonglong)*(uint *)(iVar1 + 0x4c) & 0x1fffffff) * 8 + uVar3 + 10 & 0xffffffff
                    ) << 4) + *(int *)(iVar1 + 0xc);
      param_2[1] = param_2[1] + iVar2;
      if (*param_2 < iVar2) {
        *param_2 = iVar2;
        param_2[2] = iVar1;
      }
      lVar5 = lVar5 + -4;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  return;
}

