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
extern unsigned int *auStack_110;
extern unsigned int *auStack_120;
extern unsigned int *auStack_c0;
extern unsigned int *auStack_d0;
extern int fn_8263C620();
extern int fn_8263C7D8();
extern int fn_82837DF0();
extern int fn_8284C428();
extern int fn_8284C528();
extern int fn_8284C5C8();
extern int fn_8284C628();
extern int fn_82A94368();
extern int fn_82A947A0();
extern int fn_82A94AA8();
extern int fn_82A94F60();
extern int fn_82A98408();
extern int fn_82A98F18();
extern unsigned int iStack_130;
extern unsigned int uStack_108;
extern unsigned int uStack_10c;
extern unsigned int uStack_118;
extern unsigned int uStack_11c;
extern unsigned int uStack_9c;
extern unsigned int uStack_a0;
extern unsigned int uStack_ac;
extern unsigned int uStack_e4;


void fn_8284CE28(int param_1,int param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  int iStack_130;
  int aiStack_12c [3];
  undefined1 auStack_120 [4];
  uint uStack_11c;
  uint uStack_118;
  undefined1 auStack_110 [4];
  undefined4 uStack_10c;
  undefined4 uStack_108;
  uint uStack_e4;
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [20];
  uint uStack_ac;
  uint uStack_a0;
  uint uStack_9c;
  
  iVar7 = *(int *)(param_1 + 0x38);
  aiStack_12c[0] = 0;
  lVar4 = 0;
  iStack_130 = 0;
  iVar5 = 0;
  iVar3 = 0;
  if (0 < iVar7) {
    do {
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar7);
  }
  iVar3 = 0;
  if (0 < iVar7) {
    iVar7 = 0;
    do {
      uVar6 = 0;
      if (param_2 == 1) {
        iVar5 = 1;
      }
      else if (param_2 == 2) {
        iVar5 = (*(uint *)(*(int *)(*(int *)(param_1 + 0x34) + iVar7) + 0x2c) >> 6 & 0xf) + 1;
      }
      lVar12 = 0;
      if (iVar5 != 0) {
        do {
          uVar1 = fn_82A94AA8(*(undefined4 *)(iVar7 + *(int *)(param_1 + 0x44)),
                                  *(undefined4 *)(*(int *)(param_1 + 0x48) + iVar7),0);
          fn_82A94368(*(undefined4 *)(iVar7 + *(int *)(param_1 + 0x34)),0,auStack_110);
          fn_82A947A0(*(undefined4 *)(iVar7 + *(int *)(param_1 + 0x34)),auStack_c0);
          fn_8284C5C8(*(undefined4 *)(param_1 + 0x18),auStack_120);
          fn_8284C428(uStack_10c,uStack_108,lVar12,aiStack_12c,&iStack_130);
          fn_8263C7D8(*(undefined4 *)(iVar7 + *(int *)(param_1 + 0x34)),lVar12,auStack_d0,0,0);
          if ((*(uint *)(*(int *)(iVar7 + *(int *)(param_1 + 0x34)) + 0x2c) & 0x3c0) != 0) {
            lVar4 = fn_82A94F60(*(undefined4 *)(iVar7 + *(int *)(param_1 + 0x44)),
                                    *(undefined4 *)(*(int *)(param_1 + 0x48) + iVar7),1,lVar12,
                                    *(uint *)(param_1 + 0x18) & 0x3f,
                                    *(uint *)(param_1 + 0x18) >> 8 & 1,0);
          }
          if ((int)lVar12 < (int)uVar1) {
            lVar2 = fn_8284C628(uStack_10c,uStack_108,auStack_120,lVar12);
            uVar13 = fn_8284C528(uStack_10c,auStack_120,lVar12);
            uVar9 = (uVar13 & 0xffffffff) / (ulonglong)uStack_e4;
            uVar8 = (ulonglong)((uStack_118 + iStack_130) - 1 & ~(uStack_118 - 1)) /
                    (ulonglong)uStack_118;
            uVar10 = uVar8;
            uVar11 = uVar9;
          }
          else {
            lVar2 = fn_8284C628(uStack_10c,uStack_108,auStack_120,uVar1);
            uVar9 = (ulonglong)uStack_a0;
            uVar8 = (ulonglong)uStack_9c;
            uVar13 = (ulonglong)uStack_ac;
            uVar10 = (ulonglong)((uStack_118 + iStack_130) - 1 & ~(uStack_118 - 1)) /
                     (ulonglong)uStack_118;
            uVar11 = (ulonglong)((uStack_11c + aiStack_12c[0]) - 1 & ~(uStack_11c - 1)) /
                     (ulonglong)uStack_11c;
          }
          lVar2 = ((ulonglong)*(uint *)(*(int *)(iVar7 + *(int *)(param_1 + 0x34)) + 0x20) &
                  0xfffff000) + lVar2;
          if ((*(uint *)(param_1 + 0x18) & 0x100) != 0) {
            fn_82A98F18(lVar2,uVar13,0,lVar2,uVar9,uVar8,0,uStack_e4);
          }
          fn_82837DF0(lVar2 + lVar4,*(undefined4 *)(param_1 + 0x18),uVar11,uVar10,uVar13,uVar6);
          if ((*(uint *)(param_1 + 0x18) & 0x100) != 0) {
            fn_82A98408(lVar2,uVar9,uVar8,0,lVar2,uVar13,0,uStack_e4);
          }
          fn_8263C620(*(undefined4 *)(iVar7 + *(int *)(param_1 + 0x34)),0);
          uVar6 = uVar6 + 1;
          lVar12 = lVar12 + 1;
          uVar6 = -(ulonglong)!CARRY8(8 - uVar6,uVar6 ^ 0x80000000) & uVar6;
        } while ((int)lVar12 < iVar5);
      }
      iVar3 = iVar3 + 1;
      iVar7 = iVar7 + 4;
    } while (iVar3 < *(int *)(param_1 + 0x38));
  }
  return;
}

