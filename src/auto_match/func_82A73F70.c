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
extern unsigned int *auStack_90;
extern int fn_82A6D090();
extern int fn_82F68CC0();
extern int fn_82F691F0();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_820288CC;


undefined8 fn_82A73F70(int *param_1)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  float *pfVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  uint auStack_90 [2];
  longlong lStack_88;
  
  iVar2 = *param_1;
  auStack_90[0] = 0;
  uVar7 = 0;
  uVar1 = *(ushort *)(iVar2 + 0x22);
  if (param_1[0x6d] != 4) {
    dVar8 = (double)lbl_820288CC;
    dVar9 = (double)lbl_82002C5C;
    dVar10 = (double)lbl_82002AE0;
    do {
      uVar3 = param_1[0x6d];
      if (uVar3 < 4) {
        if (uVar3 == 1) {
          auStack_90[0] = 0;
          uVar7 = fn_82A6D090(param_1 + 0x38,1,auStack_90);
          if ((int)uVar7 < 0) {
            return uVar7;
          }
          param_1[0x6e] = (uint)(auStack_90[0] != 0);
          param_1[0x6d] = (-(uint)(auStack_90[0] != 0) & 0xfffffffe) + 4;
        }
        else {
          if (uVar3 == 2) {
            auStack_90[0] = 0;
            uVar7 = fn_82A6D090(param_1 + 0x38,1,auStack_90);
            if ((int)uVar7 < 0) {
              return uVar7;
            }
            param_1[0x6f] = (uint)(auStack_90[0] != 0);
            if (auStack_90[0] != 0) {
              param_1[0x71] = 0;
              param_1[0x6d] = 3;
              goto LAB_82a741cc;
            }
            if ((*(short *)(iVar2 + 0x22) == 6) && (*(int *)(iVar2 + 0x68) == 0x3f)) {
              pfVar4 = (float *)param_1[0x70];
              if (pfVar4 != (float *)0x0) {
                pfVar4[0x23] = (float)dVar10;
                pfVar4[0x1c] = (float)dVar10;
                pfVar4[0x15] = (float)dVar10;
                pfVar4[7] = (float)dVar10;
                *pfVar4 = (float)dVar10;
                pfVar4[0xd] = (float)dVar9;
                pfVar4[0xc] = (float)dVar9;
              }
            }
            else {
              param_1[0x6e] = 0;
            }
          }
          else {
            uVar6 = (uint)uVar1;
            if (uVar3 == 0) {
              param_1[0x73] = param_1[0x6e];
              if ((param_1[0x74] != 0) && (param_1[0x70] != 0)) {
                fn_82F68CC0(param_1[0x74],param_1[0x70],
                             (longlong)(int)(uint)uVar1 * (longlong)(int)(uint)uVar1 * 4 &
                             0xfffffffc);
              }
              param_1[0x6e] = 0;
              param_1[0x6f] = 0;
              if (param_1[0x70] != 0) {
                    /* WARNING: Subroutine does not return */
                fn_82F691F0(param_1[0x70],0,
                             (longlong)(int)(uint)uVar1 * (longlong)(int)uVar6 * 4 & 0xfffffffc);
              }
              if (((2 < *(int *)(iVar2 + 0x3c)) && (1 < uVar1)) && (*(int *)(iVar2 + 0xb0) != 1)) {
                param_1[0x6d] = 1;
                goto LAB_82a741cc;
              }
            }
            else if (param_1[0x71] < (int)(uVar6 * uVar6)) {
              do {
                uVar7 = fn_82A6D090(param_1 + 0x38,4,auStack_90);
                if ((int)uVar7 < 0) {
                  return uVar7;
                }
                if ((auStack_90[0] & 8) != 0) {
                  auStack_90[0] = auStack_90[0] | 0xfffffff0;
                }
                lStack_88 = (longlong)(int)auStack_90[0];
                *(float *)(param_1[0x71] * 4 + param_1[0x70]) = (float)((double)lStack_88 * dVar8);
                iVar5 = param_1[0x71];
                param_1[0x71] = iVar5 + 1;
              } while (iVar5 + 1 < (int)(uVar6 * uVar6));
            }
          }
          param_1[0x6d] = 4;
        }
      }
LAB_82a741cc:;} while (param_1[0x6d] != 4);
  }
  return uVar7;
}

