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
extern unsigned int *auStack_140;
extern unsigned int *auStack_150;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_c0;
extern int fn_82575FA8();
extern int fn_82A1EFC0();
extern unsigned int lbl_82192734;
extern unsigned int lbl_821CC160;
extern unsigned int uStack_60;
extern unsigned int uStack_64;
extern unsigned int uStack_68;
extern unsigned int uStack_7d;
extern unsigned int uStack_80;


void fn_82560100(double param_1,int param_2,undefined8 param_3,int param_4,undefined8 param_5,
                  int param_6,undefined8 param_7)

{
  undefined4 *puVar1;
  int in_r0;
  double dVar2;
  double dVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 in_register_00010480;
  undefined4 in_register_00010484;
  undefined4 in_register_00010488;
  undefined4 in_vr72;
  undefined1 auStack_150 [16];
  undefined1 auStack_140 [128];
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [48];
  undefined1 uStack_80;
  undefined1 uStack_7d;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  
  dVar3 = (double)*(float *)(param_2 + 0x828);
  fn_82A1EFC0(auStack_150,0,0x100);
  puVar1 = (undefined4 *)(in_r0 + param_4 & 0xfffffff0);
  uVar4 = *puVar1;
  uVar5 = puVar1[1];
  uVar6 = puVar1[2];
  uVar7 = puVar1[3];
  uStack_60 = 0xfeeb1e0;
  uStack_80 = 1;
  puVar1 = (undefined4 *)((uint)(auStack_c0 + in_r0) & 0xfffffff0);
  *puVar1 = uVar4;
  puVar1[1] = uVar5;
  puVar1[2] = uVar6;
  puVar1[3] = uVar7;
  puVar1 = (undefined4 *)((uint)(auStack_150 + in_r0) & 0xfffffff0);
  *puVar1 = uVar4;
  puVar1[1] = uVar5;
  puVar1[2] = uVar6;
  puVar1[3] = uVar7;
  if (param_6 == 0) {
    puVar1 = (undefined4 *)((uint)(auStack_b0 + in_r0) & 0xfffffff0);
    *puVar1 = in_register_00010480;
    puVar1[1] = in_register_00010484;
    puVar1[2] = in_register_00010488;
    puVar1[3] = in_vr72;
    puVar1 = (undefined4 *)((uint)(auStack_140 + in_r0) & 0xfffffff0);
    *puVar1 = in_register_00010480;
    puVar1[1] = in_register_00010484;
    puVar1[2] = in_register_00010488;
    puVar1[3] = in_vr72;
  }
  else {
    puVar1 = (undefined4 *)(in_r0 + param_6 & 0xfffffff0);
    uVar4 = *puVar1;
    uVar5 = puVar1[1];
    uVar6 = puVar1[2];
    uVar7 = puVar1[3];
    puVar1 = (undefined4 *)((uint)(auStack_b0 + in_r0) & 0xfffffff0);
    *puVar1 = uVar4;
    puVar1[1] = uVar5;
    puVar1[2] = uVar6;
    puVar1[3] = uVar7;
    puVar1 = (undefined4 *)((uint)(auStack_140 + in_r0) & 0xfffffff0);
    *puVar1 = uVar4;
    puVar1[1] = uVar5;
    puVar1[2] = uVar6;
    puVar1[3] = uVar7;
  }
  uStack_64 = 0;
  uStack_68 = 0xffffffff;
  uStack_7d = 0;
  dVar2 = param_1;
  if (param_1 == (double)lbl_821CC160) {
    dVar2 = (double)lbl_82192734;
  }
  fn_82575FA8(dVar3,dVar2,*(undefined4 *)(param_2 + 0x93c),param_3,auStack_150,
                    param_1 == (double)lbl_82192734,0,1,param_7);
  return;
}

