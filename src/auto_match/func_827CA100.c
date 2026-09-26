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


void fn_827CA100(int param_1,int param_2,int *param_3,undefined8 param_4,longlong param_5,
                  uint *param_6,longlong param_7)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  uint *puVar4;
  ulonglong uVar5;
  int iVar6;
  
  iVar1 = *(int *)(param_1 + 0x1a0);
  if (*(int *)(param_1 + 0x114) <= *(int *)(iVar1 + 0x5c)) {
    iVar6 = 0;
    uVar5 = (ulonglong)*(uint *)(param_1 + 0xc4);
    if (0 < *(int *)(param_1 + 0x24)) {
      puVar4 = (uint *)(param_2 + -4);
      iVar3 = iVar1 + 0xc;
      do {
        puVar4 = puVar4 + 1;
        (**(code **)(iVar3 + 0x28))
                  (param_1,uVar5,
                   ((longlong)*(int *)(iVar3 + 0x58) * (longlong)*param_3 & 0x3fffffffU) * 4 +
                   (ulonglong)*puVar4,iVar3);
        iVar6 = iVar6 + 1;
        iVar3 = iVar3 + 4;
        uVar5 = uVar5 + 0x54;
      } while (iVar6 < *(int *)(param_1 + 0x24));
    }
    *(undefined4 *)(iVar1 + 0x5c) = 0;
  }
  uVar5 = (ulonglong)*(uint *)(param_1 + 0x114) - (ulonglong)*(uint *)(iVar1 + 0x5c);
  if ((ulonglong)*(uint *)(iVar1 + 0x60) < (uVar5 & 0xffffffff)) {
    uVar5 = (ulonglong)*(uint *)(iVar1 + 0x60);
  }
  uVar2 = param_7 - (ulonglong)*param_6;
  if ((uVar2 & 0xffffffff) < (uVar5 & 0xffffffff)) {
    uVar5 = uVar2;
  }
  (**(code **)(*(int *)(param_1 + 0x1a4) + 4))
            (param_1,iVar1 + 0xc,(ulonglong)*(uint *)(iVar1 + 0x5c),
             ((ulonglong)*param_6 & 0x3fffffff) * 4 + param_5,uVar5);
  iVar6 = (int)uVar5;
  *param_6 = *param_6 + iVar6;
  iVar3 = iVar6 + *(int *)(iVar1 + 0x5c);
  *(int *)(iVar1 + 0x5c) = iVar3;
  *(int *)(iVar1 + 0x60) = *(int *)(iVar1 + 0x60) - iVar6;
  if (*(int *)(param_1 + 0x114) <= iVar3) {
    *param_3 = *param_3 + 1;
  }
  return;
}

