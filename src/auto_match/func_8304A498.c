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
extern unsigned int *auStack_20;
extern unsigned int iStack_1c;


undefined8 fn_8304A498(int param_1,uint param_2)

{
  uint *puVar1;
  int iVar3;
  undefined8 uVar2;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined1 auStack_20 [4];
  int iStack_1c;
  
  puVar1 = *(uint **)(param_1 + 0x38);
  iVar5 = 0;
  if (*puVar1 < param_2) {
    iVar3 = 0;
    do {
      iVar4 = iVar5;
      iVar3 = iVar3 + 4;
      iVar5 = iVar4 + 1;
    } while (*(uint *)(iVar3 + (int)puVar1) < param_2);
    if (iVar5 != 0) {
      uVar6 = puVar1[iVar4];
      goto LAB_8304a4fc;
    }
  }
  uVar6 = 0;
LAB_8304a4fc:
  iVar5 = *(int *)(param_1 + 0x40) * iVar5;
  *(uint *)(param_1 + 0x44) = param_2 - uVar6;
  *(int *)(param_1 + 0x34) = iVar5;
  iVar5 = *(int *)(param_1 + 0x54) + iVar5;
  iVar3 = (**(code **)(**(int **)(param_1 + 0x2c) + 0x28))
                    (*(int **)(param_1 + 0x2c),iVar5,0,auStack_20);
  if (iVar3 == 1) {
    uVar2 = 1;
    *(int *)(param_1 + 0x30) = iVar5 - iStack_1c;
  }
  else {
    uVar2 = 2;
  }
  return uVar2;
}

