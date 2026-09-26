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
extern int fn_82AA66A8();
extern int fn_82AF8780();
extern int fn_82B24700();
extern int fn_82B42098();
extern int fn_82B4A218();
extern int fn_82B4B248();
extern int fn_82B4B2A0();
extern int fn_82B4F178();
extern unsigned int iStack_58;
extern unsigned int uStack_5c;


void fn_82B500F0(int param_1,undefined4 *param_2,undefined8 param_3)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  ulonglong uVar8;
  uint *puStack_60;
  uint uStack_5c;
  int iStack_58;
  
  uVar1 = (uint)param_2[1] >> 0x11;
  iVar7 = uVar1 * 0x28;
  uVar8 = (ulonglong)((uint)param_2[1] >> 2) & 0x3fff;
  if ((*(uint *)(*(int *)(param_1 + 0xc) + iVar7 + 4) & 4) == 0) {
                    /* WARNING: Subroutine does not return */
    fn_82AA66A8(param_1,0x12c0);
  }
  if ((*(uint *)(param_1 + 0x2c) & 2) != 0) {
    fn_82B24700(&puStack_60,*(undefined4 *)(param_1 + 0x248));
    bVar3 = false;
    if ((puStack_60[1] & 1) == 0) {
      uStack_5c = (*puStack_60 & 0xfffffffe) - 4;
    }
    else {
      uStack_5c = 0;
    }
    if (uStack_5c == 0) {
      iStack_58 = 0;
    }
    else {
      iStack_58 = *(int *)(uStack_5c + 8);
    }
    do {
      piVar4 = (int *)fn_82B4B2A0(&puStack_60);
    } while (*piVar4 != 0);
    if ((*(uint *)(*(int *)(param_1 + 0xc) + iVar7) & 7) != 1) {
      fn_82B24700(&puStack_60,*(undefined4 *)(param_1 + 0x24c));
      uStack_5c = piVar4[1];
      iStack_58 = piVar4[2];
      do {
        do {
          if ((iStack_58 != 0) ||
             (bVar2 = true, uStack_5c != (-(uint)((puStack_60[1] & 1) == 0) & puStack_60[1]))) {
            bVar2 = false;
          }
          if (bVar2) goto LAB_82b50278;
          iVar5 = fn_82B4B248(&puStack_60);
          iVar5 = *(int *)(iVar5 + 4);
          piVar6 = (int *)fn_82AF8780(&puStack_60);
        } while (((*piVar6 != 3) || (iVar5 == 0)) || (*(int *)(iVar5 + 4) != 6));
        if (*(int *)(iVar5 + 0x10) != 1) {
                    /* WARNING: Subroutine does not return */
          fn_82AA66A8(param_1,0x12c0);
        }
      } while ((*(int *)(*(int *)(iVar5 + 0x18) + 0x14) == 0) ||
              (*(uint *)(*(int *)(iVar5 + 0x18) + 0x10) != uVar1));
    }
    bVar3 = true;
LAB_82b50278:
    if ((bVar3) &&
       (iVar5 = fn_82B4A218(piVar4[3],uVar1,param_1), *(int *)((int)(uVar8 << 3) + iVar5) == 0
       )) {
      fn_82B42098(param_1,piVar4[3],uVar1,uVar8,1);
    }
  }
  if ((param_2[1] & 3) == 0) {
    iVar5 = fn_82B4A218(*(undefined4 *)(param_1 + 0x234),uVar1,param_1);
    *(undefined8 *)(iVar5 + (int)(uVar8 << 3)) = param_3;
    iVar7 = *(int *)(param_1 + 0xc) + iVar7;
    *(uint *)(iVar7 + 4) = *(uint *)(iVar7 + 4) | 2;
  }
  else if (((uint)param_2[1] >> 0x10 & 1) == 0) {
    *(undefined8 *)*param_2 = param_3;
  }
  else {
    fn_82B4F178(param_1,(undefined8 *)*param_2,*(undefined8 *)*param_2,0,param_3);
  }
  return;
}

