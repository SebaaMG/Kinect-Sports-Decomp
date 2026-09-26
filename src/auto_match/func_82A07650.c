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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern unsigned int *auStack_80;
extern unsigned int *auStack_b0;
extern int fn_82A03570();
extern int fn_82A07430();
extern int fn_82F6A548();
extern int fn_82F6A594();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;
extern unsigned int stack0x00000040;
extern unsigned int uStack_90;
extern unsigned int uStack_98;
extern unsigned int uStack_a0;
extern unsigned int uStack_a8;


void fn_82A07650(undefined8 param_1,undefined8 param_2,longlong param_3,longlong param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined8 in_r0;
  ulonglong uVar3;
  int iVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  longlong lVar7;
  double extraout_f1;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 in_vs32 [16];
  undefined1 in_vs43 [16];
  undefined4 in_register_00010010;
  undefined4 in_register_00010014;
  undefined4 in_register_00010018;
  undefined4 in_vr1;
  undefined4 uVar11;
  undefined4 uVar12;
  float in_stack_0000004c;
  uint auStack_b0 [2];
  ulonglong uStack_a8;
  ulonglong uStack_a0;
  ulonglong uStack_98;
  ulonglong uStack_90;
  undefined1 auStack_80 [128];
  
  iVar4 = (int)param_5;
  uVar5 = (undefined4)((ulonglong)param_5 >> 0x20);
  uVar3 = fn_82F6A548();
  puVar1 = (undefined4 *)((uint)(&stack0x00000040 + (int)in_r0) & 0xfffffff0);
  *puVar1 = in_register_00010010;
  puVar1[1] = in_register_00010014;
  puVar1[2] = in_register_00010018;
  puVar1[3] = in_vr1;
  dVar10 = (double)lbl_821AAD20;
  if ((dVar10 < (double)in_stack_0000004c) && (iVar4 != 0)) {
    lVar7 = CONCAT44(uVar5,iVar4);
    dVar8 = (double)lbl_82002AE0;
    dVar9 = extraout_f1;
    do {
      if (dVar10 < (double)*(float *)((int)param_3 + 0xc)) {
        puVar1 = (undefined4 *)((int)in_r0 + (int)param_3 & 0xfffffff0);
        uVar5 = puVar1[1];
        uVar11 = puVar1[2];
        uVar12 = puVar1[3];
        puVar2 = (undefined4 *)((uint)(auStack_80 + (int)in_r0) & 0xfffffff0);
        *puVar2 = *puVar1;
        puVar2[1] = uVar5;
        puVar2[2] = uVar11;
        puVar2[3] = uVar12;
        if (dVar10 < dVar9) {
          iVar4 = fn_82A03570(dVar9,uVar3,auStack_80);
          altv207_13(in_vs32,in_vs43);
          if ((iVar4 != 0) &&
             (uVar3 = fn_82A07430(param_2,param_6,auStack_b0), auStack_b0[0] != 0)) {
            uStack_a0 = (ulonglong)auStack_b0[0];
            uStack_a8 = uVar3 & 0xffffffff;
          }
        }
        uVar3 = fn_82A07430(param_2,param_6,auStack_b0);
        uVar6 = (ulonglong)auStack_b0[0];
        if (uVar6 != 0) {
          if (uVar6 <= (uVar3 & 0xffffffff)) {
            uVar3 = uVar6 - 1;
          }
          uStack_98 = uVar3 & 0xffffffff;
          uStack_90 = (ulonglong)auStack_b0[0];
          *(float *)param_4 =
               (float)(dVar8 - (double)((float)uStack_98 / (float)uStack_90)) * *(float *)param_4;
        }
      }
      lVar7 = lVar7 + -1;
      param_3 = param_3 + 0x10;
      param_4 = param_4 + 4;
    } while (lVar7 != 0);
  }
  fn_82F6A594();
  return;
}

