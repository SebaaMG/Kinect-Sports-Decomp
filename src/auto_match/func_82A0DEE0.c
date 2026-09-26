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
extern unsigned int uStack_b8;
extern unsigned int uStack_bc;
extern unsigned int uStack_c0;


ulonglong fn_82A0DEE0(ulonglong param_1,ulonglong param_2,ulonglong param_3,uint param_4,
                       ulonglong param_5,uint param_6,ulonglong param_7,ulonglong param_8)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint uStack00000014;
  uint uStack_c0;
  uint uStack_bc;
  uint uStack_b8;
  undefined1 auStack_a8 [4];
  int iStack_a4;
  
  uStack00000014 = (uint)param_1;
  uVar5 = (uint)param_5;
  uStack_b8 = (uint)param_3;
  uVar9 = param_3;
  uStack_c0 = uStack_b8;
  if ((int)uVar5 <= (int)uStack_b8) {
    uVar9 = param_5 & 0xffffffff;
    uStack_c0 = uVar5;
  }
  if ((int)uStack_b8 <= (int)uVar5) {
    uStack_b8 = uVar5;
  }
  uStack_bc = param_4;
  if ((int)param_4 <= (int)param_6) {
    uStack_bc = param_6;
  }
  param_3 = param_7 - param_3;
  param_5 = param_5 - param_7;
  uVar10 = (uStack_bc - param_8) + 1;
  if ((((longlong)param_3 < 1) || ((int)param_5 < 1)) || ((int)uVar10 < 1)) {
    uVar9 = 0;
  }
  else {
    fn_8263C7D8(param_1,0,auStack_a8,0,0x10);
    trapWord(6,param_3,0);
    trapWord(6,param_5,0);
    trapWord(6,uVar10,0);
    uVar12 = 0;
    uVar11 = 0;
    uVar7 = 0;
    if ((param_8 & 0xffffffff) <= (ulonglong)uStack_bc) {
      while( true ) {
        lVar6 = 0x800000;
        iVar4 = (int)(uVar7 >> 0x18) * 0xd;
        uVar5 = (uint)param_8;
        if ((uVar9 & 0xffffffff) <= (param_7 & 0xffffffff)) {
          lVar8 = (param_7 - uVar9) + 1;
          do {
            uVar1 = (((uint)uVar9 & 7) + ((uint)((param_8 & 0xffffffff) << 2) & 0x18)) * 2;
            uVar3 = uVar9 & 0xfffffff8;
            uVar1 = (((uint)uVar9 >> 5) +
                    ((int)((param_8 & 0xffffffff) >> 5) +
                    ((uint)((param_8 & 0xffffffff) >> 3) & 0x1ffffffc)) * 2) * 0x100 +
                    ((uVar1 & 0xfffffff0) + (uVar5 & 1) * 8) * 2 + (uVar1 & 0xf) +
                    (uVar5 & 8) * 0x10;
            iVar2 = ((uint)((ulonglong)lVar6 >> 0x18) & 0xff) + iVar4;
            lVar6 = lVar6 + 0x6000000 / (param_3 & 0xffffffff);
            uVar9 = uVar9 + 1;
            uVar12 = (byte)(&lbl_8207F670)[iVar2] + uVar12;
            uVar11 = (-(ulonglong)
                       ((-(ulonglong)
                          (param_2 ==
                          ((ulonglong)
                           *(ushort *)
                            ((((uVar1 & 0xfffffe00) + (uVar5 & 0x10) * 0x10) * 2 + (uVar1 & 0x1c0))
                             * 4 + ((uint)((uVar3 + (param_8 & 0x7ffffffb) * 2 & 0xffffffff) << 3) &
                                   0xc0) + (uVar1 & 0x3f) + iStack_a4) & 3)) & param_2) ==
                       (longlong)(int)(uint)(byte)(&lbl_8207F5E8)[iVar2] * (longlong)(int)param_2) &
                     (ulonglong)(byte)(&lbl_8207F670)[iVar2]) + uVar11;
            lVar8 = lVar8 + -1;
          } while (lVar8 != 0);
          uVar9 = (ulonglong)uStack_c0;
        }
        lVar6 = 0x6800000;
        if ((param_7 & 0xffffffff) <= (ulonglong)uStack_b8) {
          lVar8 = (uStack_b8 - param_7) + 1;
          uVar9 = param_7;
          do {
            uVar1 = (((uint)uVar9 & 7) + ((uint)((param_8 & 0xffffffff) << 2) & 0x18)) * 2;
            uVar3 = uVar9 & 0xfffffff8;
            uVar1 = (((uint)uVar9 >> 5) +
                    ((int)((param_8 & 0xffffffff) >> 5) +
                    ((uint)((param_8 & 0xffffffff) >> 3) & 0x1ffffffc)) * 2) * 0x100 +
                    ((uVar1 & 0xfffffff0) + (uVar5 & 1) * 8) * 2 + (uVar1 & 0xf) +
                    (uVar5 & 8) * 0x10;
            iVar2 = ((uint)((ulonglong)lVar6 >> 0x18) & 0xff) + iVar4;
            lVar6 = lVar6 + 0x6000000 / (param_5 & 0xffffffff);
            uVar9 = uVar9 + 1;
            uVar12 = (byte)(&lbl_8207F670)[iVar2] + uVar12;
            uVar11 = (-(ulonglong)
                       ((-(ulonglong)
                          (param_2 ==
                          ((ulonglong)
                           *(ushort *)
                            ((((uVar1 & 0xfffffe00) + (uVar5 & 0x10) * 0x10) * 2 + (uVar1 & 0x1c0))
                             * 4 + ((uint)((uVar3 + (param_8 & 0x7ffffffb) * 2 & 0xffffffff) << 3) &
                                   0xc0) + (uVar1 & 0x3f) + iStack_a4) & 3)) & param_2) ==
                       (longlong)(int)(uint)(byte)(&lbl_8207F5E8)[iVar2] * (longlong)(int)param_2) &
                     (ulonglong)(byte)(&lbl_8207F670)[iVar2]) + uVar11;
            lVar8 = lVar8 + -1;
          } while (lVar8 != 0);
          uVar9 = (ulonglong)uStack_c0;
        }
        param_8 = param_8 + 1;
        if ((ulonglong)uStack_bc < (param_8 & 0xffffffff)) break;
        uVar7 = (ulonglong)(uint)((int)uVar7 + (int)(0xa000000 / (uVar10 & 0xffffffff)));
      }
      param_1 = (ulonglong)uStack00000014;
    }
    fn_8263C620(param_1,0);
    if ((uVar12 & 0xffffffff) == 0) {
      uVar12 = 1;
    }
    trapWord(6,uVar12,0);
    uVar9 = ((uVar11 & 0xffffff) * 0x100 - uVar11 & 0xffffffff) / (uVar12 & 0xffffffff) & 0xff;
  }
  return uVar9;
}

