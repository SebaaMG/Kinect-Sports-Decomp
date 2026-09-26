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
extern int fn_8251E4D0();
extern int fn_82522D98();
extern int fn_825A1388();
extern int fn_825A1440();
extern int fn_82A1EFC0();
extern unsigned int lbl_83297910;
extern unsigned int lbl_83297920;


int * fn_825A1260(undefined8 param_1,int param_2,int param_3,int param_4,undefined8 param_5)

{
  undefined4 *puVar1;
  int in_r0;
  int *piVar2;
  int *piVar3;
  int iVar4;
  longlong lVar5;
  undefined4 in_register_000104d0;
  undefined4 in_register_000104d4;
  undefined4 in_register_000104d8;
  undefined4 in_vr77;
  
  piVar2 = (int *)fn_82522D98(0x140);
  iVar4 = 1;
  if (*(int *)(param_2 + 0xb28) != 0) {
    iVar4 = *(int *)(param_2 + 0xb28);
  }
  fn_82A1EFC0(piVar2,0,0x140);
  *piVar2 = param_2;
  piVar2[1] = param_3;
  piVar2[4] = 0;
  piVar2[3] = param_4;
  piVar2[0x4c] = 0;
  piVar2[5] = iVar4;
  fn_82A1EFC0(piVar2 + 8,0,0xc0);
  piVar3 = piVar2 + 0x14;
  lVar5 = 0x20;
  do {
    piVar3 = piVar3 + 1;
    *piVar3 = -1;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  piVar2[0x12] = (int)piVar2;
  piVar2[0x10] = -1;
  piVar2[0x11] = -1;
  piVar2[0x13] = piVar2[0x13] | 0x10;
  piVar3 = (int *)fn_8251E4D0(param_1);
  *piVar3 = (int)piVar2;
  piVar3[1] = param_3;
  if (*(int *)(param_2 + 0xb10) != 0) {
    fn_825A1388((ulonglong)*(uint *)(param_2 + 0x4c) + 0x7e8);
    *(undefined4 *)(param_2 + 0xb10) = 0;
  }
  *(int **)(param_2 + 0xb10) = piVar2;
  if ((lbl_83297920 & 1) == 0) {
    lbl_83297920 = lbl_83297920 | 1;
    puVar1 = (undefined4 *)((int)&lbl_83297910 + in_r0 & 0xfffffff0);
    *puVar1 = in_register_000104d0;
    puVar1[1] = in_register_000104d4;
    puVar1[2] = in_register_000104d8;
    puVar1[3] = in_vr77;
  }
  fn_825A1440(piVar2,param_5);
  return piVar2;
}

