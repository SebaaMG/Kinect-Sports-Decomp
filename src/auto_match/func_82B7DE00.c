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
extern int fn_82AB15D0();


void fn_82B7DE00(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  puVar1 = *(undefined4 **)(param_1 + 0x18);
  iVar2 = *(int *)(param_1 + 0x28);
  iVar3 = *(int *)(param_1 + 0x1c);
  iVar4 = *(int *)(param_1 + 0x20);
  *puVar1 = 0x10;
  if (0x7f < (**(uint **)(param_1 + 0x18) & 0xfffffff8)) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820db908,0xffffffff820db938,0x1ea);
  }
  (*(int **)(param_1 + 0x18))[1] = **(int **)(param_1 + 0x18) - 1U >> 3 & 0xf;
  puVar1[2] = 0x20;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0x20002000;
  puVar1[7] = puVar1[7] & 0xfc00f000 | 0x60000;
  puVar1[4] = puVar1[4] & 0xfffef000;
  puVar1[5] = puVar1[5] & 0xfc00f000 | 0x60000;
  puVar1[3] = puVar1[3] & 0xfc00f000 | 0x60000;
  puVar1[6] = puVar1[6] & 0xfc00f000 | 0x60000;
  **(undefined4 **)(param_1 + 0x1c) = 5;
  if (0x7f < (**(uint **)(param_1 + 0x1c) & 0xfffffff8)) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820db8dc,0xffffffff820db938,0x204);
  }
  (*(int **)(param_1 + 0x1c))[1] = **(int **)(param_1 + 0x1c) - 1U >> 3 & 0xf;
  *(undefined4 *)(iVar3 + 8) = 0x10010104;
  *(undefined4 *)(iVar3 + 0x10) = 0xffff;
  **(undefined4 **)(param_1 + 0x20) = 0xc;
  if (0x7f < (**(uint **)(param_1 + 0x20) & 0xfffffff8)) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820db8b0,0xffffffff820db938,0x216);
  }
  (*(int **)(param_1 + 0x20))[1] = **(int **)(param_1 + 0x20) - 1U >> 3 & 0xf;
  *(undefined4 *)(iVar4 + 0xc) = 0x40004;
  *(undefined4 *)(iVar4 + 0x2c) = 0x40004;
  *(undefined4 *)(iVar4 + 0x30) = 0x40004;
  *(undefined4 *)(iVar4 + 0x34) = 0x40004;
  *(undefined4 *)(iVar4 + 0x14) = 0x40004;
  *(undefined4 *)(iVar4 + 8) = 0;
  *(undefined4 *)(iVar4 + 0x28) = 4;
  *(undefined4 *)(iVar4 + 0x18) = 0x10000;
  *(undefined4 *)(iVar4 + 0x10) = 7;
  *(uint *)(iVar4 + 0x1c) = *(uint *)(iVar4 + 0x1c) & 0xfe7fffff;
  **(undefined4 **)(param_1 + 0x24) = 0x14;
  if (0x7f < (**(uint **)(param_1 + 0x24) & 0xfffffff8)) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820db884,0xffffffff820db938,0x232);
  }
  (*(int **)(param_1 + 0x24))[1] = **(int **)(param_1 + 0x24) - 1U >> 3 & 0xf;
  **(undefined4 **)(param_1 + 0x28) = 0x26;
  if (0x7f < (**(uint **)(param_1 + 0x28) & 0xfffffff8)) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820db858,0xffffffff820db938,0x23a);
  }
  (*(int **)(param_1 + 0x28))[1] = **(int **)(param_1 + 0x28) - 1U >> 3 & 0xf;
  *(undefined4 *)(iVar2 + 0x50) = 0xffffffff;
  *(undefined4 *)(iVar2 + 100) = 0x10;
  *(undefined4 *)(iVar2 + 0x60) = 0xe;
  *(undefined4 *)(iVar2 + 0x70) = 0x20;
  *(uint *)(iVar2 + 0x28) = *(uint *)(iVar2 + 0x28) & 0xffe00e00 | 0xff000;
  *(uint *)(iVar2 + 0x24) = *(uint *)(iVar2 + 0x24) & 0xffe00e00 | 0xff100;
  **(undefined4 **)(param_1 + 0x2c) = 0x20;
  if (0x7f < (**(uint **)(param_1 + 0x2c) & 0xfffffff8)) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820db82c,0xffffffff820db938,0x25d);
  }
  (*(int **)(param_1 + 0x2c))[1] = **(int **)(param_1 + 0x2c) - 1U >> 3 & 0xf;
  return;
}

