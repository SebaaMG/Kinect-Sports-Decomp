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
extern int fn_829BAAE8();
extern int fn_82BA02A8();


void fn_829B69D8(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  
  lVar4 = 1;
  do {
    iVar1 = param_1[1];
    iVar5 = (int)lVar4;
    if ((iVar5 < 0) || (1 < iVar5)) {
      *(undefined4 *)(*param_1 + 0x14) = 0xe;
      *(int *)(*param_1 + 0x18) = iVar5;
      (**(code **)*param_1)(param_1);
    }
    if (iVar5 == 1) {
      for (iVar5 = *(int *)(iVar1 + 0x44); iVar5 != 0; iVar5 = *(int *)(iVar5 + 0x2c)) {
        if (*(int *)(iVar5 + 0x28) != 0) {
          *(undefined4 *)(iVar5 + 0x28) = 0;
          (**(code **)(iVar5 + 0x38))(param_1,iVar5 + 0x30);
        }
      }
      iVar5 = *(int *)(iVar1 + 0x48);
      *(undefined4 *)(iVar1 + 0x44) = 0;
      for (; iVar5 != 0; iVar5 = *(int *)(iVar5 + 0x2c)) {
        if (*(int *)(iVar5 + 0x28) != 0) {
          *(undefined4 *)(iVar5 + 0x28) = 0;
          (**(code **)(iVar5 + 0x38))(param_1,iVar5 + 0x30);
        }
      }
      *(undefined4 *)(iVar1 + 0x48) = 0;
    }
    iVar5 = (int)((lVar4 + 0xfU & 0xffffffff) << 2);
    puVar3 = *(undefined4 **)(iVar5 + iVar1);
    *(undefined4 *)(iVar5 + iVar1) = 0;
    while (puVar3 != (undefined4 *)0x0) {
      puVar2 = (undefined4 *)*puVar3;
      lVar6 = (ulonglong)(uint)puVar3[2] + (ulonglong)(uint)puVar3[1] + 0x10;
      fn_829BAAE8(param_1,puVar3,lVar6);
      *(int *)(iVar1 + 0x4c) = *(int *)(iVar1 + 0x4c) - (int)lVar6;
      puVar3 = puVar2;
    }
    iVar5 = (int)((lVar4 + 0xdU & 0xffffffff) << 2);
    puVar3 = *(undefined4 **)(iVar5 + iVar1);
    *(undefined4 *)(iVar5 + iVar1) = 0;
    while (puVar3 != (undefined4 *)0x0) {
      puVar2 = (undefined4 *)*puVar3;
      lVar6 = (ulonglong)(uint)puVar3[2] + (ulonglong)(uint)puVar3[1] + 0x10;
      fn_829BAAE8(param_1,puVar3,lVar6);
      *(int *)(iVar1 + 0x4c) = *(int *)(iVar1 + 0x4c) - (int)lVar6;
      puVar3 = puVar2;
    }
    lVar4 = lVar4 + -1;
  } while (-1 < lVar4);
  fn_829BAAE8(param_1,param_1[1],0x54);
  param_1[1] = 0;
  fn_82BA02A8(param_1);
  return;
}

