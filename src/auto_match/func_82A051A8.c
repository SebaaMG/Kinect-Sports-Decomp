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
extern unsigned int *auStack_50;
extern unsigned int fStack_28;
extern unsigned int fStack_2c;
extern unsigned int fStack_30;
extern unsigned int fStack_38;
extern unsigned int fStack_3c;
extern unsigned int fStack_40;
extern int fn_82A04FD0();
extern unsigned int lbl_8200D8BC;
extern unsigned int lbl_821AAD20;
extern unsigned int stack0x00000000;


/* WARNING: Removing unreachable block (ram,0x82a05200) */
/* WARNING: Removing unreachable block (ram,0x82a05208) */
/* WARNING: Removing unreachable block (ram,0x82a0522c) */
/* WARNING: Removing unreachable block (ram,0x82a0523c) */
/* WARNING: Removing unreachable block (ram,0x82a05224) */
/* WARNING: Removing unreachable block (ram,0x82a05240) */
/* WARNING: Removing unreachable block (ram,0x82a05268) */
/* WARNING: Removing unreachable block (ram,0x82a0524c) */
/* WARNING: Removing unreachable block (ram,0x82a0526c) */
/* WARNING: Removing unreachable block (ram,0x82a05288) */
/* WARNING: Removing unreachable block (ram,0x82a05294) */
/* WARNING: Removing unreachable block (ram,0x82a052a0) */

undefined1 * fn_82A051A8(undefined1 *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int in_r0;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined4 *puVar5;
  longlong lVar6;
  double dVar7;
  undefined1 in_vs32 [16];
  undefined1 in_vs35 [16];
  undefined1 in_vs37 [16];
  undefined1 in_vs38 [16];
  undefined1 in_vs39 [16];
  undefined1 in_vs40 [16];
  undefined1 in_vs42 [16];
  undefined1 in_vs43 [16];
  undefined4 in_register_00010380;
  undefined4 in_register_00010384;
  undefined4 in_register_00010388;
  undefined4 in_vr56;
  undefined4 in_register_00010390;
  undefined4 in_register_00010394;
  undefined4 in_register_00010398;
  undefined4 in_vr57;
  undefined4 in_register_000103a0;
  undefined4 in_register_000103a4;
  undefined4 in_register_000103a8;
  undefined4 in_vr58;
  undefined4 in_register_000103b0;
  undefined4 in_register_000103b4;
  undefined4 in_register_000103b8;
  undefined4 in_vr59;
  undefined4 in_register_000103c0;
  undefined4 in_register_000103c4;
  undefined4 in_register_000103c8;
  undefined4 in_vr60;
  undefined4 in_register_000103d0;
  undefined4 in_register_000103d4;
  undefined4 in_register_000103d8;
  undefined4 in_vr61;
  undefined4 in_register_000103f0;
  undefined4 in_register_000103f4;
  undefined4 in_register_000103f8;
  undefined4 in_vr63;
  undefined1 auStack_50 [16];
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  
  dVar7 = (double)lbl_821AAD20;
  if ((double)*(float *)(param_1 + 0x40c8) != dVar7) {
    puVar3 = (undefined1 *)
             fn_82A04FD0((double)lbl_8200D8BC,param_1,&stack0x00000000 + -0x40,
                               &stack0x00000000 + -0x50);
    altv207_13(in_vs32,in_vs43);
    puVar5 = (undefined4 *)((int)&fStack_30 + in_r0 & 0xfffffff0);
    *puVar5 = in_register_000103f0;
    puVar5[1] = in_register_000103f4;
    puVar5[2] = in_register_000103f8;
    puVar5[3] = in_vr63;
    if ((((double)fStack_30 != dVar7) || ((double)fStack_2c != dVar7)) ||
       ((double)fStack_28 != dVar7)) {
      uVar1 = *(undefined4 *)(param_1 + 0x40f4);
      puVar5 = (undefined4 *)((int)&fStack_30 + in_r0 & 0xfffffff0);
      *puVar5 = in_register_000103f0;
      puVar5[1] = in_register_000103f4;
      puVar5[2] = in_register_000103f8;
      puVar5[3] = in_vr63;
      altv207_13(in_vs32,in_vs40);
      puVar5 = (undefined4 *)((uint)(param_1 + in_r0 + 0x10) & 0xfffffff0);
      *puVar5 = in_register_000103d0;
      puVar5[1] = in_register_000103d4;
      puVar5[2] = in_register_000103d8;
      puVar5[3] = in_vr61;
      *(undefined4 *)(param_1 + 0x40f4) = uVar1;
    }
    puVar4 = param_1 + 0x20;
    lVar6 = 4;
    puVar5 = (undefined4 *)(param_1 + 0x40f4);
    param_1 = puVar3;
    do {
      altv207_13(in_vs42,in_vs40);
      puVar2 = (undefined4 *)((int)&fStack_40 + in_r0 & 0xfffffff0);
      *puVar2 = in_register_000103f0;
      puVar2[1] = in_register_000103f4;
      puVar2[2] = in_register_000103f8;
      puVar2[3] = in_vr63;
      if ((((double)fStack_40 != dVar7) || ((double)fStack_3c != dVar7)) ||
         ((double)fStack_38 != dVar7)) {
        param_1 = &stack0x00000000 + -0x30;
        uVar1 = puVar5[-1];
        puVar2 = (undefined4 *)((int)&fStack_30 + in_r0 & 0xfffffff0);
        *puVar2 = in_register_000103f0;
        puVar2[1] = in_register_000103f4;
        puVar2[2] = in_register_000103f8;
        puVar2[3] = in_vr63;
        altv207_13(in_vs32,in_vs35);
        puVar2 = (undefined4 *)((uint)(puVar4 + -0x20) & 0xfffffff0);
        *puVar2 = in_register_000103c0;
        puVar2[1] = in_register_000103c4;
        puVar2[2] = in_register_000103c8;
        puVar2[3] = in_vr60;
        puVar5[-1] = uVar1;
      }
      altv207_13(in_vs42,in_vs37);
      puVar2 = (undefined4 *)((int)&fStack_40 + in_r0 & 0xfffffff0);
      *puVar2 = in_register_000103f0;
      puVar2[1] = in_register_000103f4;
      puVar2[2] = in_register_000103f8;
      puVar2[3] = in_vr63;
      if ((((double)fStack_40 != dVar7) || ((double)fStack_3c != dVar7)) ||
         ((double)fStack_38 != dVar7)) {
        param_1 = &stack0x00000000 + -0x30;
        uVar1 = *puVar5;
        puVar2 = (undefined4 *)((int)&fStack_30 + in_r0 & 0xfffffff0);
        *puVar2 = in_register_000103f0;
        puVar2[1] = in_register_000103f4;
        puVar2[2] = in_register_000103f8;
        puVar2[3] = in_vr63;
        altv207_13(in_vs32,in_vs35);
        puVar2 = (undefined4 *)((uint)(puVar4 + -0x10) & 0xfffffff0);
        *puVar2 = in_register_000103b0;
        puVar2[1] = in_register_000103b4;
        puVar2[2] = in_register_000103b8;
        puVar2[3] = in_vr59;
        *puVar5 = uVar1;
      }
      altv207_13(in_vs32,in_vs42);
      puVar2 = (undefined4 *)((int)&fStack_40 + in_r0 & 0xfffffff0);
      *puVar2 = in_register_000103f0;
      puVar2[1] = in_register_000103f4;
      puVar2[2] = in_register_000103f8;
      puVar2[3] = in_vr63;
      if ((((double)fStack_40 != dVar7) || ((double)fStack_3c != dVar7)) ||
         ((double)fStack_38 != dVar7)) {
        param_1 = &stack0x00000000 + -0x30;
        uVar1 = puVar5[1];
        puVar2 = (undefined4 *)((int)&fStack_30 + in_r0 & 0xfffffff0);
        *puVar2 = in_register_000103f0;
        puVar2[1] = in_register_000103f4;
        puVar2[2] = in_register_000103f8;
        puVar2[3] = in_vr63;
        altv207_13(in_vs32,in_vs35);
        puVar2 = (undefined4 *)((uint)(puVar4 + in_r0) & 0xfffffff0);
        *puVar2 = in_register_000103a0;
        puVar2[1] = in_register_000103a4;
        puVar2[2] = in_register_000103a8;
        puVar2[3] = in_vr58;
        puVar5[1] = uVar1;
      }
      altv207_13(in_vs42,in_vs38);
      puVar2 = (undefined4 *)((int)&fStack_40 + in_r0 & 0xfffffff0);
      *puVar2 = in_register_000103f0;
      puVar2[1] = in_register_000103f4;
      puVar2[2] = in_register_000103f8;
      puVar2[3] = in_vr63;
      if ((((double)fStack_40 != dVar7) || ((double)fStack_3c != dVar7)) ||
         ((double)fStack_38 != dVar7)) {
        param_1 = &stack0x00000000 + -0x30;
        uVar1 = puVar5[2];
        puVar2 = (undefined4 *)((int)&fStack_30 + in_r0 & 0xfffffff0);
        *puVar2 = in_register_000103f0;
        puVar2[1] = in_register_000103f4;
        puVar2[2] = in_register_000103f8;
        puVar2[3] = in_vr63;
        altv207_13(in_vs32,in_vs35);
        puVar2 = (undefined4 *)((uint)(puVar4 + 0x10) & 0xfffffff0);
        *puVar2 = in_register_00010390;
        puVar2[1] = in_register_00010394;
        puVar2[2] = in_register_00010398;
        puVar2[3] = in_vr57;
        puVar5[2] = uVar1;
      }
      altv207_13(in_vs42,in_vs39);
      puVar2 = (undefined4 *)((int)&fStack_40 + in_r0 & 0xfffffff0);
      *puVar2 = in_register_000103f0;
      puVar2[1] = in_register_000103f4;
      puVar2[2] = in_register_000103f8;
      puVar2[3] = in_vr63;
      if ((((double)fStack_40 != dVar7) || ((double)fStack_3c != dVar7)) ||
         ((double)fStack_38 != dVar7)) {
        param_1 = &stack0x00000000 + -0x30;
        uVar1 = puVar5[3];
        puVar2 = (undefined4 *)((int)&fStack_30 + in_r0 & 0xfffffff0);
        *puVar2 = in_register_000103f0;
        puVar2[1] = in_register_000103f4;
        puVar2[2] = in_register_000103f8;
        puVar2[3] = in_vr63;
        altv207_13(in_vs32,in_vs35);
        puVar2 = (undefined4 *)((uint)(puVar4 + 0x20) & 0xfffffff0);
        *puVar2 = in_register_00010380;
        puVar2[1] = in_register_00010384;
        puVar2[2] = in_register_00010388;
        puVar2[3] = in_vr56;
        puVar5[3] = uVar1;
      }
      puVar4 = puVar4 + 0x50;
      puVar5 = puVar5 + 5;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  return param_1;
}

