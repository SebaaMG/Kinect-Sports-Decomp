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
extern unsigned int *auStack_c0;
extern unsigned int *auStack_d0;
extern unsigned int *auStack_e0;
extern unsigned int *auStack_f0;
extern int fn_82CE5040();
extern int fn_82D80A40();
extern int fn_82D93168();
extern int fn_82DED480();
extern unsigned int lbl_82192734;
extern V16 vectorSubtractFloatingPoint();
extern void *memcpy(void *, const void *, unsigned int);


void fn_82571BB8(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined8 in_r0;
  int iVar6;
  undefined1 *puVar7;
  uint uVar8;
  double dVar9;
  undefined1 in_vs32 [16];
  undefined1 in_vs45 [16];
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined1 auStack_f0 [16];
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [112];
  undefined1 auStack_50 [80];
  
  uVar8 = *(uint *)(param_1 + 0x490);
  uVar1 = *(uint *)(param_1 + 0x494);
  if (uVar8 < uVar1) {
    dVar9 = (double)lbl_82192734;
    do {
      iVar6 = *(int *)(uVar8 + 0x20);
      iVar2 = *(int *)(iVar6 + 0x14);
      iVar3 = *(int *)(iVar6 + 0x18);
      iVar6 = fn_82DED480(iVar6,auStack_f0,auStack_d0);
      if (iVar6 == 1) {
        fn_82D80A40(*(undefined4 *)(iVar2 + 8));
        fn_82D93168(iVar2 + 0xe0);
        puVar7 = auStack_50;
      }
      else {
        fn_82D80A40(*(undefined4 *)(iVar2 + 8));
        fn_82D93168(iVar2 + 0xe0);
        fn_82CE5040(auStack_e0,auStack_c0,auStack_f0);
        puVar7 = auStack_e0;
      }
      puVar4 = (undefined4 *)((uint)(puVar7 + (int)in_r0) & 0xfffffff0);
      uVar10 = puVar4[1];
      uVar11 = puVar4[2];
      uVar12 = puVar4[3];
      iVar6 = *(int *)(uVar8 + 0x20);
      puVar5 = (undefined4 *)((int)in_r0 + uVar8 & 0xfffffff0);
      *puVar5 = *puVar4;
      puVar5[1] = uVar10;
      puVar5[2] = uVar11;
      puVar5[3] = uVar12;
      iVar6 = (**(code **)(**(int **)(iVar6 + 0xc) + 0x20))();
      if (iVar6 == 2) {
        iVar6 = *(int *)(*(int *)(uVar8 + 0x20) + 0xc);
        *(float *)(uVar8 + 0x2c) =
             (float)((double)*(float *)(*(int *)(*(int *)(*(int *)(uVar8 + 0x20) + 0x30) + 0x1c) +
                                       0x14) * dVar9);
        *(undefined4 *)(uVar8 + 0x24) = *(undefined4 *)(iVar6 + 0xc4);
        *(undefined4 *)(uVar8 + 0x28) = *(undefined4 *)(iVar6 + 200);
      }
      puVar4 = (undefined4 *)(iVar3 + 0x1c0U & 0xfffffff0);
      uVar10 = puVar4[1];
      uVar11 = puVar4[2];
      uVar12 = puVar4[3];{ V16 _vt0 = vectorSubtractFloatingPoint(in_vs45,in_vs32); memcpy(in_vs32, &_vt0, 16); }
      puVar5 = (undefined4 *)(uVar8 + 0x10 & 0xfffffff0);
      *puVar5 = *puVar4;
      puVar5[1] = uVar10;
      puVar5[2] = uVar11;
      puVar5[3] = uVar12;
      uVar8 = uVar8 + 0x60;
    } while (uVar8 < uVar1);
  }
  return;
}

