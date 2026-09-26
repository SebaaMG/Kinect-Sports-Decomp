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
extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern int fn_8265C940();
extern int fn_8265C990();
extern int fn_82935220();
extern int fn_82935258();
extern int fn_829352D0();
extern int fn_82F65FE0();
extern int fn_82F691F0();
extern unsigned int uStack_58;
extern unsigned int uStack_60;
extern unsigned int uStack_68;


longlong fn_828FE958(int param_1)

{
  int iVar1;
  int *piVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [8];
  ulonglong uStack_68;
  ulonglong uStack_60;
  undefined4 uStack_58;
  
  lVar8 = 0;
  fn_82935220(auStack_80,0x464e4946);
  iVar1 = *(int *)(param_1 + 0x7c);
  lVar6 = 0;
  lVar7 = 0;
  uVar3 = (ulonglong)*(uint *)(iVar1 + 0xac) + (ulonglong)*(uint *)(iVar1 + 0xa8) +
          (ulonglong)*(uint *)(iVar1 + 0xa4) + (ulonglong)*(uint *)(iVar1 + 0xa0) +
          (ulonglong)*(uint *)(iVar1 + 0x9c);
  if (uVar3 != 0) {
    lVar6 = fn_8265C940((uVar3 & 0x3fffffff) << 2,0x24810000);
    if (lVar6 != 0) {
      piVar2 = *(int **)(param_1 + 0x7c);
      uVar3 = 0;
      lVar7 = 7;
      do {
        iVar1 = *piVar2;
        if (iVar1 != 0) {
          lVar8 = (uVar3 & 0x3fffffff) * 4 + lVar6 + -4;
          do {
            lVar8 = lVar8 + 4;
            *(int *)lVar8 = iVar1;
            uVar3 = uVar3 + 1;
            iVar1 = *(int *)(iVar1 + 0x20);
          } while (iVar1 != 0);
        }
        piVar2 = piVar2 + 1;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
      lVar7 = 0;
      piVar2 = (int *)(*(int *)(param_1 + 0x7c) + 0x70);
      uVar3 = (ulonglong)*(uint *)(*(int *)(param_1 + 0x7c) + 0xac);
      lVar8 = 7;
      do {
        iVar1 = *piVar2;
        if (iVar1 != 0) {
          lVar4 = (lVar7 + uVar3 & 0x3fffffff) * 4 + lVar6 + -4;
          do {
            lVar4 = lVar4 + 4;
            *(int *)lVar4 = iVar1;
            lVar7 = lVar7 + 1;
            iVar1 = *(int *)(iVar1 + 0x20);
          } while (iVar1 != 0);
        }
        piVar2 = piVar2 + 1;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
      lVar7 = 0;
      piVar2 = (int *)(*(int *)(param_1 + 0x7c) + 0x1c);
      lVar4 = 7;
      lVar8 = *(uint *)(*(int *)(param_1 + 0x7c) + 0xa8) + uVar3;
      do {
        iVar1 = *piVar2;
        if (iVar1 != 0) {
          lVar5 = (lVar7 + lVar8 & 0x3fffffffU) * 4 + lVar6 + -4;
          do {
            lVar5 = lVar5 + 4;
            *(int *)lVar5 = iVar1;
            lVar7 = lVar7 + 1;
            iVar1 = *(int *)(iVar1 + 0x20);
          } while (iVar1 != 0);
        }
        piVar2 = piVar2 + 1;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
      lVar7 = 0;
      piVar2 = (int *)(*(int *)(param_1 + 0x7c) + 0x38);
      lVar4 = 7;
      lVar8 = (ulonglong)*(uint *)(*(int *)(param_1 + 0x7c) + 0x9c) + lVar8;
      do {
        iVar1 = *piVar2;
        if (iVar1 != 0) {
          lVar5 = (lVar7 + lVar8 & 0x3fffffffU) * 4 + lVar6 + -4;
          do {
            lVar5 = lVar5 + 4;
            *(int *)lVar5 = iVar1;
            lVar7 = lVar7 + 1;
            iVar1 = *(int *)(iVar1 + 0x20);
          } while (iVar1 != 0);
        }
        piVar2 = piVar2 + 1;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
      lVar7 = 0;
      piVar2 = (int *)(*(int *)(param_1 + 0x7c) + 0x54);
      lVar4 = 7;
      lVar8 = (ulonglong)*(uint *)(*(int *)(param_1 + 0x7c) + 0xa0) + lVar8;
      do {
        iVar1 = *piVar2;
        if (iVar1 != 0) {
          lVar5 = (lVar7 + lVar8 & 0x3fffffffU) * 4 + lVar6 + -4;
          do {
            lVar5 = lVar5 + 4;
            *(int *)lVar5 = iVar1;
            lVar7 = lVar7 + 1;
            iVar1 = *(int *)(iVar1 + 0x20);
          } while (iVar1 != 0);
        }
        piVar2 = piVar2 + 1;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
      uVar3 = (ulonglong)*(uint *)(*(int *)(param_1 + 0x7c) + 0xa4) + lVar8;
      fn_82F65FE0(lVar6,uVar3,4,0xffffffff828fc870);
      lVar7 = fn_8265C940(uVar3 * 0x14,0x24810000);
      if (lVar7 != 0) {
        uStack_58 = 0;
        uStack_68 = uVar3 & 0xffffffff;
        uStack_60 = (ulonglong)*(uint *)(param_1 + 0x3c) | 4;
        lVar8 = fn_829352D0(auStack_80,auStack_70,0x1c,1,0,3);
        if (-1 < lVar8) {
                    /* WARNING: Subroutine does not return */
          fn_82F691F0(lVar7,0,uVar3 * 0x14);
        }
        goto LAB_828fed54;
      }
    }
    lVar8 = -0x7ff8fff2;
  }
LAB_828fed54:
  fn_8265C990(lVar6,0x24810000);
  fn_8265C990(lVar7,0x24810000);
  fn_82935258(auStack_80);
  return lVar8;
}

