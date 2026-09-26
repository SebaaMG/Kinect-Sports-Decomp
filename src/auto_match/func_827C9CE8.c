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


void fn_827C9CE8(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,int *param_6)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  longlong lVar4;
  uint *puVar5;
  
  iVar1 = *(int *)(param_1 + 0x18c);
  puVar5 = (uint *)(iVar1 + 0x18);
  if (*(int *)(iVar1 + 0x18) == 0) {
    uVar3 = (**(code **)(*(int *)(param_1 + 4) + 0x1c))
                      (param_1,*(undefined4 *)(iVar1 + 8),*(undefined4 *)(iVar1 + 0x14),
                       *(undefined4 *)(iVar1 + 0x10),1);
    *(undefined4 *)(iVar1 + 0xc) = uVar3;
  }
  uVar2 = *puVar5;
  (**(code **)(*(int *)(param_1 + 0x1a0) + 4))
            (param_1,param_2,param_3,param_4,*(undefined4 *)(iVar1 + 0xc),puVar5,
             *(undefined4 *)(iVar1 + 0x10));
  if ((ulonglong)uVar2 < (ulonglong)*puVar5) {
    lVar4 = (ulonglong)*puVar5 - (ulonglong)uVar2;
    (**(code **)(*(int *)(param_1 + 0x1a8) + 4))
              (param_1,((ulonglong)uVar2 & 0x3fffffff) * 4 + (ulonglong)*(uint *)(iVar1 + 0xc),0,
               lVar4);
    *param_6 = *param_6 + (int)lVar4;
  }
  if (*(uint *)(iVar1 + 0x10) <= *puVar5) {
    *puVar5 = 0;
    *(uint *)(iVar1 + 0x14) = *(int *)(iVar1 + 0x14) + *(uint *)(iVar1 + 0x10);
  }
  return;
}

