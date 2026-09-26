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
#define CARRY8(a,b) ((((U64)(a)) + ((U64)(b))) < ((U64)(a)))
extern unsigned int *auStack_120;
extern unsigned int *auStack_130;
extern unsigned int *auStack_e0;
extern int fn_8263C6F0();
extern int fn_82837DF0();
extern int fn_8284C428();
extern int fn_8284C528();
extern int fn_8284C5C8();
extern int fn_8284C628();
extern int fn_8284C6E0();
extern int fn_82A94368();
extern int fn_82A947A0();
extern int fn_82A94AA8();
extern int fn_82A94F60();
extern int fn_82A98408();
extern int fn_82A98F18();
extern unsigned int iStack_140;
extern unsigned int uStack_118;
extern unsigned int uStack_11c;
extern unsigned int uStack_128;
extern unsigned int uStack_12c;
extern unsigned int uStack_bc;
extern unsigned int uStack_c0;
extern unsigned int uStack_cc;
extern unsigned int uStack_f4;


void fn_8284D120(int param_1,int param_2)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  int iStack_140;
  int aiStack_13c [3];
  undefined1 auStack_130 [4];
  uint uStack_12c;
  uint uStack_128;
  undefined1 auStack_120 [4];
  undefined4 uStack_11c;
  undefined4 uStack_118;
  uint uStack_f4;
  undefined1 auStack_e0 [20];
  uint uStack_cc;
  uint uStack_c0;
  uint uStack_bc;
  
  aiStack_13c[0] = 0;
  lVar5 = 0;
  iStack_140 = 0;
  iVar7 = 0;
  uVar6 = 0;
  lVar4 = 0;
  fn_8263C6F0(*(undefined4 *)(param_1 + 0x34));
  if (param_2 == 1) {
    iVar7 = 1;
  }
  else if (param_2 == 2) {
    iVar7 = (*(uint *)(*(int *)(param_1 + 0x34) + 0x2c) >> 6 & 0xf) + 1;
  }
  uVar1 = fn_82A94AA8(*(undefined2 *)(param_1 + 0x24),*(undefined2 *)(param_1 + 0x26),0);
  fn_82A94368(*(undefined4 *)(param_1 + 0x34),0,auStack_120);
  fn_82A947A0(*(undefined4 *)(param_1 + 0x34),auStack_e0);
  fn_8284C5C8(*(undefined4 *)(param_1 + 0x18),auStack_130);
  if (param_2 == 1) {
    iVar7 = 1;
  }
  else if (param_2 == 2) {
    iVar7 = (*(uint *)(*(int *)(param_1 + 0x34) + 0x2c) >> 6 & 0xf) + 1;
  }
  lVar8 = 0;
  if (iVar7 != 0) {
    do {
      iVar3 = 0;
      if (0 < *(int *)(param_1 + 0x38)) {
        do {
          fn_8284C428(uStack_11c,uStack_118,lVar8,aiStack_13c,&iStack_140);
          if ((*(uint *)(*(int *)(param_1 + 0x34) + 0x2c) & 0x3c0) != 0) {
            lVar5 = fn_82A94F60(*(undefined2 *)(param_1 + 0x24),*(undefined2 *)(param_1 + 0x26),
                                    1,lVar8,*(uint *)(param_1 + 0x18) & 0x3f,
                                    *(uint *)(param_1 + 0x18) >> 8 & 1,0);
          }
          if ((int)lVar8 < (int)uVar1) {
            iVar2 = fn_8284C6E0(uStack_11c,uStack_118,auStack_130,lVar8);
            lVar13 = (longlong)iVar2 * (longlong)iVar3;
            uVar14 = fn_8284C528(uStack_11c,auStack_130,lVar8);
            uVar11 = (uVar14 & 0xffffffff) / (ulonglong)uStack_f4;
            uVar9 = (ulonglong)((uStack_128 + iStack_140) - 1 & ~(uStack_128 - 1)) /
                    (ulonglong)uStack_128;
            uVar10 = uVar9;
            uVar12 = uVar11;
          }
          else {
            iVar2 = fn_8284C6E0(uStack_11c,uStack_118,auStack_130,uVar1);
            uVar11 = (ulonglong)uStack_c0;
            uVar9 = (ulonglong)uStack_bc;
            uVar14 = (ulonglong)uStack_cc;
            lVar13 = (longlong)iVar2 * (longlong)iVar3;
            uVar10 = (ulonglong)((uStack_128 + iStack_140) - 1 & ~(uStack_128 - 1)) /
                     (ulonglong)uStack_128;
            uVar12 = (ulonglong)((uStack_12c + aiStack_13c[0]) - 1 & ~(uStack_12c - 1)) /
                     (ulonglong)uStack_12c;
          }
          lVar13 = ((ulonglong)*(uint *)(*(int *)(param_1 + 0x34) + 0x20) & 0xfffff000) + lVar4 +
                   lVar13;
          if ((*(uint *)(param_1 + 0x18) & 0x100) != 0) {
            fn_82A98F18(lVar13,uVar14,0,lVar13,uVar11,uVar9,0,uStack_f4);
          }
          fn_82837DF0(lVar13 + lVar5,*(undefined4 *)(param_1 + 0x18),uVar12,uVar10,uVar14,uVar6);
          if ((*(uint *)(param_1 + 0x18) & 0x100) != 0) {
            fn_82A98408(lVar13,uVar11,uVar9,0,lVar13,uVar14,0,uStack_f4);
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 < *(int *)(param_1 + 0x38));
      }
      if ((int)lVar8 < (int)uVar1) {
        iVar3 = fn_8284C628(uStack_11c,uStack_118,auStack_130,lVar8 + 1);
        lVar4 = (longlong)iVar3 * (longlong)*(int *)(param_1 + 0x38);
      }
      uVar6 = uVar6 + 1;
      lVar8 = lVar8 + 1;
      uVar6 = -(ulonglong)!CARRY8(8 - uVar6,uVar6 ^ 0x80000000) & uVar6;
    } while ((int)lVar8 < iVar7);
  }
  return;
}

