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
extern unsigned int *auStack_a8;
extern int fn_8263C620();
extern int fn_8263C7D8();
extern unsigned int iStack_a4;
extern unsigned int lbl_8207F5E8;
extern unsigned int lbl_8207F670;
extern unsigned int uStack00000014;
extern unsigned int uStack_b4;
extern unsigned int uStack_b8;
extern unsigned int uStack_bc;


ulonglong fn_82A0DAE0(ulonglong param_1,uint param_2,ulonglong param_3,uint param_4,
                       ulonglong param_5,uint param_6,ulonglong param_7,ulonglong param_8)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar7;
  longlong lVar6;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  uint uStack00000014;
  uint in_stack_00000054;
  uint uStack_bc;
  uint uStack_b8;
  uint uStack_b4;
  undefined1 auStack_a8 [4];
  int iStack_a4;
  
  uStack00000014 = (uint)param_1;
  uVar7 = (uint)param_5;
  uStack_b4 = (uint)param_3;
  uVar12 = param_3;
  uStack_bc = uStack_b4;
  if ((int)uVar7 <= (int)uStack_b4) {
    uVar12 = param_5 & 0xffffffff;
    uStack_bc = uVar7;
  }
  if ((int)uStack_b4 <= (int)uVar7) {
    uStack_b4 = uVar7;
  }
  uStack_b8 = param_4;
  if ((int)param_4 <= (int)param_6) {
    uStack_b8 = param_6;
  }
  param_3 = param_7 - param_3;
  param_5 = param_5 - param_7;
  uVar13 = (uStack_b8 - param_8) + 1;
  if ((((longlong)param_3 < 1) || ((int)param_5 < 1)) || ((int)uVar13 < 1)) {
    uVar12 = 0;
  }
  else {
    fn_8263C7D8(param_1,0,auStack_a8,0,0x10);
    trapWord(6,param_3,0);
    trapWord(6,param_5,0);
    trapWord(6,uVar13,0);
    uVar15 = 0;
    uVar14 = 0;
    uVar9 = 0;
    if ((param_8 & 0xffffffff) <= (ulonglong)uStack_b8) {
      lVar8 = (param_8 + (param_8 & 0x3fffffff) * 4 & 0x3ffffff) * 0x40 +
              (ulonglong)in_stack_00000054;
      while( true ) {
        lVar6 = 0x800000;
        iVar5 = (int)(uVar9 >> 0x18) * 0xd;
        uVar7 = (uint)param_8;
        iVar2 = (int)lVar8;
        if ((uVar12 & 0xffffffff) <= (param_7 & 0xffffffff)) {
          lVar10 = (param_7 - uVar12) + 1;
          do {
            uVar3 = (uint)uVar12;
            uVar1 = ((uVar3 & 7) + ((uint)((param_8 & 0xffffffff) << 2) & 0x18)) * 2;
            uVar1 = ((uVar3 >> 5) +
                    ((int)((param_8 & 0xffffffff) >> 5) +
                    ((uint)((param_8 & 0xffffffff) >> 3) & 0x1ffffffc)) * 2) * 0x100 +
                    ((uVar1 & 0xfffffff0) + (uVar7 & 1) * 8) * 2 + (uVar1 & 0xf) +
                    (uVar7 & 8) * 0x10;
            iVar4 = ((uint)((ulonglong)lVar6 >> 0x18) & 0xff) + iVar5;
            lVar6 = lVar6 + 0x6000000 / (param_3 & 0xffffffff);
            uVar15 = (byte)(&lbl_8207F670)[iVar4] + uVar15;
            uVar11 = -(ulonglong)
                      ((-(uint)(param_2 ==
                               (*(ushort *)
                                 ((((uVar1 & 0xfffffe00) + (uVar7 & 0x10) * 0x10) * 2 +
                                  (uVar1 & 0x1c0)) * 4 +
                                  ((uint)(((uVar12 & 0xfffffff8) + (param_8 & 0x7ffffffb) * 2 &
                                          0xffffffff) << 3) & 0xc0) + (uVar1 & 0x3f) + iStack_a4) &
                               3)) & param_2) == (byte)(&lbl_8207F5E8)[iVar4] * param_2) &
                     (ulonglong)(byte)(&lbl_8207F670)[iVar4];
            uVar14 = uVar11 + uVar14;
            *(byte *)(iVar2 + uVar3) = ((int)uVar11 == 0) + 1U | *(byte *)(iVar2 + uVar3);
            uVar12 = uVar12 + 1;
            lVar10 = lVar10 + -1;
          } while (lVar10 != 0);
          uVar12 = (ulonglong)uStack_bc;
        }
        lVar6 = 0x6800000;
        if ((param_7 & 0xffffffff) <= (ulonglong)uStack_b4) {
          lVar10 = (uStack_b4 - param_7) + 1;
          uVar12 = param_7;
          do {
            uVar3 = (uint)uVar12;
            uVar1 = ((uVar3 & 7) + ((uint)((param_8 & 0xffffffff) << 2) & 0x18)) * 2;
            uVar1 = ((uVar3 >> 5) +
                    ((int)((param_8 & 0xffffffff) >> 5) +
                    ((uint)((param_8 & 0xffffffff) >> 3) & 0x1ffffffc)) * 2) * 0x100 +
                    ((uVar1 & 0xfffffff0) + (uVar7 & 1) * 8) * 2 + (uVar1 & 0xf) +
                    (uVar7 & 8) * 0x10;
            iVar4 = ((uint)((ulonglong)lVar6 >> 0x18) & 0xff) + iVar5;
            lVar6 = lVar6 + 0x6000000 / (param_5 & 0xffffffff);
            uVar15 = (byte)(&lbl_8207F670)[iVar4] + uVar15;
            uVar11 = -(ulonglong)
                      ((-(uint)(param_2 ==
                               (*(ushort *)
                                 ((((uVar1 & 0xfffffe00) + (uVar7 & 0x10) * 0x10) * 2 +
                                  (uVar1 & 0x1c0)) * 4 +
                                  ((uint)(((uVar12 & 0xfffffff8) + (param_8 & 0x7ffffffb) * 2 &
                                          0xffffffff) << 3) & 0xc0) + (uVar1 & 0x3f) + iStack_a4) &
                               3)) & param_2) == (byte)(&lbl_8207F5E8)[iVar4] * param_2) &
                     (ulonglong)(byte)(&lbl_8207F670)[iVar4];
            uVar14 = uVar11 + uVar14;
            *(byte *)(iVar2 + uVar3) = ((int)uVar11 == 0) + 1U | *(byte *)(iVar2 + uVar3);
            uVar12 = uVar12 + 1;
            lVar10 = lVar10 + -1;
          } while (lVar10 != 0);
          uVar12 = (ulonglong)uStack_bc;
        }
        param_8 = param_8 + 1;
        lVar8 = lVar8 + 0x140;
        if ((ulonglong)uStack_b8 < (param_8 & 0xffffffff)) break;
        uVar9 = (ulonglong)(uint)((int)uVar9 + (int)(0xa000000 / (uVar13 & 0xffffffff)));
      }
      param_1 = (ulonglong)uStack00000014;
    }
    fn_8263C620(param_1,0);
    if ((uVar15 & 0xffffffff) == 0) {
      uVar15 = 1;
    }
    uVar13 = ((uVar14 & 0xffffff) * 0x100 - uVar14 & 0xffffffff) / (uVar15 & 0xffffffff);
    trapWord(6,uVar15,0);
    uVar12 = uVar13 & 0xff;
    *(char *)(param_2 + in_stack_00000054 + 0x12c02) = (char)uVar13;
  }
  return uVar12;
}

