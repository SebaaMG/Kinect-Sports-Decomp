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
#define NAN(x) ((x) != (x))
extern int fn_82522DF8();
extern unsigned int lbl_82191FC4;
extern unsigned int lbl_82192734;
extern unsigned int lbl_821954D8;
extern unsigned int lbl_82196750;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_83296AE0;
extern V16 loadVectorLeftIndexed128();


void fn_82566A18(double param_1,double param_2,uint *param_3,longlong param_4,int param_5,
                  undefined8 param_6,undefined4 param_7,undefined4 *param_8,undefined8 param_9,
                  undefined4 param_10)

{
  byte bVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int in_r0;
  int iVar6;
  double dVar7;
  double dVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 in_register_000104d0;
  undefined4 in_register_000104d4;
  undefined4 in_register_000104d8;
  undefined4 in_vr77;
  
  iVar6 = fn_82522DF8(param_4 * 0x30 + 0x160);
  dVar7 = (double)lbl_821CC160;
  dVar8 = dVar7;
  if (*(float *)(&lbl_821954D8 +
                ((uint)(byte)((param_1 < dVar7) << 2) | (uint)(NAN(param_1) || NAN(dVar7)) << 2)) <
      0.0) {
    dVar8 = param_1;
  }
  if (*(float *)(&lbl_821954D8 +
                ((uint)(byte)(((double)(float)(param_1 - param_2) < dVar7) << 2) |
                (uint)(NAN((double)(float)(param_1 - param_2)) || NAN(dVar7)) << 2)) < 0.0) {
    param_2 = param_1;
  }
  *(float *)(iVar6 + 0x9c) = (float)dVar8;
  *(float *)(iVar6 + 0xa0) = (float)param_2;
  if (lbl_83296AE0 != 0) {
    puVar3 = (undefined4 *)(lbl_83296AE0 + 0x10U & 0xfffffff0);
    in_register_000104d0 = *puVar3;
    in_register_000104d4 = puVar3[1];
    in_register_000104d8 = puVar3[2];
    in_vr77 = puVar3[3];
  }
  puVar3 = (undefined4 *)(iVar6 + 0xb0U & 0xfffffff0);
  *puVar3 = in_register_000104d0;
  puVar3[1] = in_register_000104d4;
  puVar3[2] = in_register_000104d8;
  puVar3[3] = in_vr77;
  if (lbl_83296AE0 != 0) {
    dVar7 = (double)*(float *)(lbl_83296AE0 + 0x60);
  }
  *(float *)(iVar6 + 0xa4) = (float)dVar7;
  *(undefined4 *)(iVar6 + 0xa8) = param_10;
  puVar3 = (undefined4 *)(lbl_83296AE0 + 0x40U & 0xfffffff0);
  uVar9 = *puVar3;
  uVar10 = puVar3[1];
  uVar11 = puVar3[2];
  uVar12 = puVar3[3];
  puVar3 = (undefined4 *)(in_r0 + iVar6 + 0xc0 & 0xfffffff0);
  *puVar3 = uVar9;
  puVar3[1] = uVar10;
  puVar3[2] = uVar11;
  puVar3[3] = uVar12;
  uVar2 = *(uint *)(iVar6 + 0xc0);
  if (((((((uVar2 & 0x7f800000) == 0x7f800000) && ((uVar2 & 0x7fffff) != 0)) ||
        ((uVar2 & 0x7fffffff) == 0x7f800000)) ||
       (((uVar2 = *(uint *)(iVar6 + 0xc4), (uVar2 & 0x7f800000) == 0x7f800000 &&
         ((uVar2 & 0x7fffff) != 0)) ||
        (((uVar2 & 0x7fffffff) == 0x7f800000 ||
         ((uVar2 = *(uint *)(iVar6 + 200), (uVar2 & 0x7f800000) == 0x7f800000 &&
          ((uVar2 & 0x7fffff) != 0)))))))) || ((uVar2 & 0x7fffffff) == 0x7f800000)) ||
     (((uVar2 = *(uint *)(iVar6 + 0xcc), (uVar2 & 0x7f800000) == 0x7f800000 &&
       ((uVar2 & 0x7fffff) != 0)) || ((uVar2 & 0x7fffffff) == 0x7f800000)))) {
    puVar3 = (undefined4 *)((uint)(&lbl_82196750 + in_r0) & 0xfffffff0);
    uVar9 = *puVar3;
    uVar10 = puVar3[1];
    uVar11 = puVar3[2];
    uVar12 = puVar3[3];
    puVar3 = (undefined4 *)(in_r0 + iVar6 + 0xc0 & 0xfffffff0);
    *puVar3 = uVar9;
    puVar3[1] = uVar10;
    puVar3[2] = uVar11;
    puVar3[3] = uVar12;
  }
  if (param_8 == (undefined4 *)0x0) {
    *(undefined4 *)(iVar6 + 0x80) = 0;
  }
  else {
    *(undefined4 *)(iVar6 + 0x80) = *param_8;
  }
  loadVectorLeftIndexed128(0xffffffff821ca45c,4);
  *(undefined1 *)(iVar6 + 0x24) = 1;
  uVar5 = lbl_821CA460;
  *(undefined4 *)(iVar6 + 0x128) = 0;
  *(undefined4 *)(iVar6 + 0x20) = uVar5;
  *(undefined4 *)(iVar6 + 0x28) = uVar5;
  *(uint **)(iVar6 + 0x60) = param_3;
  puVar3 = (undefined4 *)(iVar6 + 0x10U & 0xfffffff0);
  *puVar3 = uVar9;
  puVar3[1] = uVar10;
  puVar3[2] = uVar11;
  puVar3[3] = uVar12;
  bVar1 = *(byte *)(param_5 + 2);
  *(int *)(iVar6 + 0xd8) = iVar6 + 0x130;
  *(float *)(iVar6 + 0x94) = (float)param_1;
  *(undefined4 *)(iVar6 + 0x70) = 0;
  *(undefined4 *)(iVar6 + 0x78) = 0;
  *(int *)(iVar6 + 0xd0) = param_5;
  *(undefined4 *)(iVar6 + 0x84) = 0;
  *(int *)(iVar6 + 0xd4) = (int)param_4;
  *(uint *)(iVar6 + 0x74) = bVar1 - 1;
  uVar2 = *param_3;
  if (((ulonglong)uVar2 == 0) || ((ulonglong)uVar2 == 0xfffffffffffffcf4)) {
    *(undefined4 *)(iVar6 + 0xdc) = 0;
  }
  else {
    *(undefined4 *)(iVar6 + 0xdc) = *(undefined4 *)(uVar2 + 0x3e4);
  }
  *(undefined4 *)(iVar6 + 0x118) = param_7;
  *(undefined4 *)(iVar6 + 0xfc) = 0;
  *(undefined4 *)(iVar6 + 0x11c) = 0;
  *(undefined4 *)(iVar6 + 0x120) = 0;
  uVar9 = lbl_82192734;
  *(undefined4 *)(iVar6 + 0xf8) = lbl_82191FC4;
  *(undefined4 *)(iVar6 + 0x124) = uVar9;
  *(undefined4 *)(iVar6 + 0x50) = uVar9;
  *(undefined4 *)(iVar6 + 0x54) = uVar9;
  puVar3 = (undefined4 *)((uint)(&lbl_82196750 + in_r0) & 0xfffffff0);
  uVar9 = puVar3[1];
  uVar10 = puVar3[2];
  uVar11 = puVar3[3];
  puVar4 = (undefined4 *)(iVar6 + 0x40U & 0xfffffff0);
  *puVar4 = *puVar3;
  puVar4[1] = uVar9;
  puVar4[2] = uVar10;
  puVar4[3] = uVar11;
  *(undefined4 *)(iVar6 + 0xe4) = 0;
  *(undefined4 *)(iVar6 + 0xe8) = 0;
  *(undefined4 *)(iVar6 + 0xec) = 0;
  return;
}

