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
extern int fn_825603C8();
extern int fn_82566CA8();
extern int fn_82566E58();
extern unsigned int lbl_821CC160;
extern unsigned int lbl_83297910;
extern unsigned int lbl_83297920;


void fn_823545A8(int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  int in_r0;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 in_register_000104d0;
  undefined4 in_register_000104d4;
  undefined4 in_register_000104d8;
  undefined4 in_vr77;
  
  if (*(int *)(param_1 + 0xa0) == 0) {
    fn_825603C8(0,param_1 + 0xb0,1);
    *(undefined4 *)(param_1 + 0xa0) = 1;
  }
  if (*(int *)(param_1 + 0x294) != 0) {
    fn_82566E58(*(int *)(param_1 + 0x294),*(undefined4 *)(*(int *)(param_1 + 0x14) + 0x844));
    *(undefined4 *)(param_1 + 0x294) = 0;
  }
  if (*(int *)(param_1 + 0x234) == 0) {
    puVar1 = (undefined4 *)(param_1 + 0x240U & 0xfffffff0);
    uVar4 = *puVar1;
    uVar5 = puVar1[1];
    uVar6 = puVar1[2];
    uVar7 = puVar1[3];
    *(undefined4 *)(param_1 + 0x180) = 1;
    puVar1 = (undefined4 *)(param_1 + 0xc0U & 0xfffffff0);
    *puVar1 = uVar4;
    puVar1[1] = uVar5;
    puVar1[2] = uVar6;
    puVar1[3] = uVar7;
    uVar3 = lbl_83297920;
    uVar2 = lbl_83297920 & 1;
    *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(param_1 + 0x250);
    *(undefined4 *)(param_1 + 0x104) = *(undefined4 *)(param_1 + 0x254);
    *(undefined4 *)(param_1 + 0x108) = *(undefined4 *)(param_1 + 600);
    *(undefined4 *)(param_1 + 0x180) = 1;
    if (uVar2 == 0) {
      lbl_83297920 = uVar3 | 1;
      puVar1 = (undefined4 *)((int)&lbl_83297910 + in_r0 & 0xfffffff0);
      *puVar1 = in_register_000104d0;
      puVar1[1] = in_register_000104d4;
      puVar1[2] = in_register_000104d8;
      puVar1[3] = in_vr77;
    }
    else {
      puVar1 = (undefined4 *)((int)&lbl_83297910 + in_r0 & 0xfffffff0);
      in_register_000104d0 = *puVar1;
      in_register_000104d4 = puVar1[1];
      in_register_000104d8 = puVar1[2];
      in_vr77 = puVar1[3];
    }
    *(undefined4 *)(param_1 + 0x180) = 1;
    puVar1 = (undefined4 *)(param_1 + 0xd0U & 0xfffffff0);
    *puVar1 = in_register_000104d0;
    puVar1[1] = in_register_000104d4;
    puVar1[2] = in_register_000104d8;
    puVar1[3] = in_vr77;
  }
  else {
    uVar4 = fn_82566CA8((double)lbl_821CC160,*(undefined4 *)(*(int *)(param_1 + 0x14) + 0x844)
                              ,param_1 + 0x234,0,param_1 + 0xb0,0,0,*(int *)(param_1 + 0x14),0);
    *(undefined4 *)(param_1 + 0x294) = uVar4;
  }
  return;
}

