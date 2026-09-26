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
extern int fn_827C8EE0();
extern int fn_827C8EF0();


void fn_827C1650(int *param_1,longlong param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong lVar5;
  
  iVar1 = param_1[1];
  iVar4 = (int)param_2;
  if ((iVar4 < 0) || (1 < iVar4)) {
    *(undefined4 *)(*param_1 + 0x14) = 0xe;
    *(int *)(*param_1 + 0x18) = iVar4;
    (**(code **)*param_1)(param_1);
  }
  if (iVar4 == 1) {
    for (iVar4 = *(int *)(iVar1 + 0x44); iVar4 != 0; iVar4 = *(int *)(iVar4 + 0x24)) {
      if (*(char *)(iVar4 + 0x22) != '\0') {
        *(undefined1 *)(iVar4 + 0x22) = 0;
        (**(code **)(iVar4 + 0x30))(param_1,iVar4 + 0x28);
      }
    }
    iVar4 = *(int *)(iVar1 + 0x48);
    *(undefined4 *)(iVar1 + 0x44) = 0;
    for (; iVar4 != 0; iVar4 = *(int *)(iVar4 + 0x24)) {
      if (*(char *)(iVar4 + 0x22) != '\0') {
        *(undefined1 *)(iVar4 + 0x22) = 0;
        (**(code **)(iVar4 + 0x30))(param_1,iVar4 + 0x28);
      }
    }
    *(undefined4 *)(iVar1 + 0x48) = 0;
  }
  iVar4 = (int)((param_2 + 0xfU & 0xffffffff) << 2);
  puVar3 = *(undefined4 **)(iVar4 + iVar1);
  *(undefined4 *)(iVar4 + iVar1) = 0;
  while (puVar3 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)*puVar3;
    lVar5 = (ulonglong)(uint)puVar3[2] + (ulonglong)(uint)puVar3[1] + 0x10;
    fn_827C8EF0(param_1,puVar3,lVar5);
    *(int *)(iVar1 + 0x4c) = *(int *)(iVar1 + 0x4c) - (int)lVar5;
    puVar3 = puVar2;
  }
  iVar4 = (int)((param_2 + 0xdU & 0xffffffff) << 2);
  puVar3 = *(undefined4 **)(iVar4 + iVar1);
  *(undefined4 *)(iVar4 + iVar1) = 0;
  while (puVar3 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)*puVar3;
    lVar5 = (ulonglong)(uint)puVar3[2] + (ulonglong)(uint)puVar3[1] + 0x10;
    fn_827C8EE0(param_1,puVar3,lVar5);
    *(int *)(iVar1 + 0x4c) = *(int *)(iVar1 + 0x4c) - (int)lVar5;
    puVar3 = puVar2;
  }
  return;
}

