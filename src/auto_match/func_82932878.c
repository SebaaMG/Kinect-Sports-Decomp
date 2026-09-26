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
extern int fn_829301D0();
extern int fn_829302D0();
extern int fn_82934160();
extern int fn_82F68CC0();
extern unsigned int lbl_8202F170;


undefined4 * fn_82932878(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)fn_82934160();
  puVar1 = (undefined4 *)fn_829301D0(*puVar1,0x58,0x10);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[1] = 0xb;
    *puVar1 = &lbl_8202F170;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    puVar1[0xd] = 0;
    puVar1[0xe] = 0;
    puVar1[0xf] = 0;
    puVar1[0x10] = 0;
    puVar1[0x12] = 0;
    puVar1[0x13] = 0;
    puVar1[0x14] = 0;
    puVar1[0x15] = 0;
    puVar1[0x11] = 0;
    puVar1[6] = 0xffffffff;
    puVar1[7] = 0xffffffff;
    puVar1[8] = 0xffffffff;
    puVar1[9] = 0xffffffff;
  }
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[4] = *(undefined4 *)(param_1 + 0x10);
    puVar1[5] = *(undefined4 *)(param_1 + 0x14);
    puVar1[10] = *(undefined4 *)(param_1 + 0x28);
    puVar1[0xb] = *(undefined4 *)(param_1 + 0x2c);
    puVar1[0x13] = *(undefined4 *)(param_1 + 0x4c);
    puVar1[6] = *(undefined4 *)(param_1 + 0x18);
    puVar1[7] = *(undefined4 *)(param_1 + 0x1c);
    puVar1[8] = *(undefined4 *)(param_1 + 0x20);
    puVar1[9] = *(undefined4 *)(param_1 + 0x24);
    if (*(int **)(param_1 + 0x30) != (int *)0x0) {
      iVar2 = (**(code **)(**(int **)(param_1 + 0x30) + 4))();
      puVar1[0xc] = iVar2;
      if (iVar2 == 0) {
        return (undefined4 *)0x0;
      }
    }
    if (*(int **)(param_1 + 0x34) != (int *)0x0) {
      iVar2 = (**(code **)(**(int **)(param_1 + 0x34) + 4))();
      puVar1[0xd] = iVar2;
      if (iVar2 == 0) {
        return (undefined4 *)0x0;
      }
    }
    if (*(int **)(param_1 + 0x38) != (int *)0x0) {
      iVar2 = (**(code **)(**(int **)(param_1 + 0x38) + 4))();
      puVar1[0xe] = iVar2;
      if (iVar2 == 0) {
        return (undefined4 *)0x0;
      }
    }
    if (*(int **)(param_1 + 0x3c) != (int *)0x0) {
      iVar2 = (**(code **)(**(int **)(param_1 + 0x3c) + 4))();
      puVar1[0xf] = iVar2;
      if (iVar2 == 0) {
        return (undefined4 *)0x0;
      }
    }
    if (*(int **)(param_1 + 0x40) != (int *)0x0) {
      iVar2 = (**(code **)(**(int **)(param_1 + 0x40) + 4))();
      puVar1[0x10] = iVar2;
      if (iVar2 == 0) {
        return (undefined4 *)0x0;
      }
    }
    if (*(int **)(param_1 + 0x48) != (int *)0x0) {
      iVar2 = (**(code **)(**(int **)(param_1 + 0x48) + 4))();
      puVar1[0x12] = iVar2;
      if (iVar2 == 0) {
        return (undefined4 *)0x0;
      }
    }
    if (*(int **)(param_1 + 0x44) != (int *)0x0) {
      iVar2 = (**(code **)(**(int **)(param_1 + 0x44) + 4))();
      puVar1[0x11] = iVar2;
      if (iVar2 == 0) {
        return (undefined4 *)0x0;
      }
    }
    if (*(int *)(param_1 + 0x4c) == 0) {
      return puVar1;
    }
    iVar2 = fn_829302D0(*(int *)(param_1 + 0x4c) << 2,0x10);
    puVar1[0x14] = iVar2;
    if (iVar2 != 0) {
      iVar2 = fn_829302D0(*(int *)(param_1 + 0x14) << 2,0x10);
      puVar1[0x15] = iVar2;
      if (iVar2 != 0) {
        fn_82F68CC0(puVar1[0x14],*(undefined4 *)(param_1 + 0x50),*(int *)(param_1 + 0x4c) << 2);
        fn_82F68CC0(puVar1[0x15],*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x14) << 2);
        return puVar1;
      }
    }
  }
  return (undefined4 *)0x0;
}

