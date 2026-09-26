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
extern int fn_82CFC058();


void fn_82CFA528(int param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x1c);
  if ((int)uVar1 < 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  else {
    uVar4 = (ulonglong)*(uint *)(param_1 + 0x10) - (ulonglong)uVar1;
    iVar5 = (int)uVar4;
    if (*(int *)(param_1 + 0x20) < iVar5) {
      *(undefined4 *)(param_1 + 0x10) = 0;
      *(undefined4 *)(param_1 + 0x14) = 0;
      *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
    }
    else if (0 < (int)uVar1) {
      lVar3 = uVar4 + ((longlong)(iVar5 >> 9) + (ulonglong)(iVar5 < 0 && (uVar4 & 0x1ff) != 0) &
                      0x7fffff) * -0x200;
      lVar2 = 0x200 - lVar3;
      if (lVar3 == 0) {
        lVar2 = 0;
      }
      fn_82CFC058((ulonglong)*(uint *)(param_1 + 0xc) + lVar2,
                      (ulonglong)*(uint *)(param_1 + 0xc) + (ulonglong)uVar1,uVar4);
      *(int *)(param_1 + 0x1c) = (int)lVar2;
      iVar5 = ((uint)(lVar3 != 0) + (iVar5 >> 9) + (uint)(iVar5 < 0 && (uVar4 & 0x1ff) != 0)) *
              0x200;
      *(int *)(param_1 + 0x10) = iVar5;
      *(int *)(param_1 + 0x14) = iVar5;
    }
  }
  return;
}

