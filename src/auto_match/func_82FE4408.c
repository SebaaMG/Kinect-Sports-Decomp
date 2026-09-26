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
extern int fn_82F655D8();
extern int fn_82F6A548();
extern int fn_82F6A594();
extern unsigned int lbl_82002C40;
extern unsigned int lbl_82006848;
extern unsigned int lbl_82021544;
extern unsigned int uStack_6c;


void fn_82FE4408(undefined8 param_1,undefined8 param_2,undefined8 param_3,float *param_4,
                  float *param_5,ulonglong param_6,ulonglong param_7,ulonglong param_8)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  ushort uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  double extraout_f1;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  uint uStack_6c;
  
  puVar5 = (uint *)fn_82F6A548();
  if (((((param_6 & 0xffffffff) == 0) || (0x40 < (param_6 & 0xffffffff))) ||
      ((param_7 & 0xffffffff) == 0)) || (0x40 < (param_7 & 0xffffffff))) {
LAB_82fe46ec:
    fn_82F6A594(2);
  }
  else {
    dVar11 = (double)fn_82F655D8(lbl_82002C40,
                                       (double)(float)(extraout_f1 * (double)lbl_82021544));
    dVar16 = (double)(float)dVar11;
    dVar12 = (double)*(float *)((int)param_5 + (int)((param_7 & 0xffffffff) << 3) + -8);
    dVar11 = (double)*(float *)((int)param_4 + (int)((param_6 & 0xffffffff) << 3) + -8);
    dVar14 = (double)*param_5;
    if ((float)((double)*param_4 - (double)*param_5) < 0.0) {
      dVar14 = (double)*param_4;
    }
    dVar13 = (double)lbl_82006848;
    dVar15 = (double)(param_8 & 0xffffffff);
    dVar14 = (double)(float)(dVar14 * dVar16);
    if ((float)(dVar11 - dVar12) < 0.0) {
      dVar11 = dVar12;
    }
    uStack_6c = (uint)(longlong)
                      ((double)(float)((double)(float)(dVar11 * dVar16 - dVar14) * dVar15) * dVar13)
    ;
    if (uStack_6c < 4) {
      uStack_6c = 4;
    }
    else if (0xffff < uStack_6c) goto LAB_82fe46ec;
    *puVar5 = uStack_6c & 0xfffc;
    uVar6 = (**(code **)(*(int *)param_2 + 4))(param_2,(uStack_6c & 0xfffc) << 2);
    puVar5[1] = uVar6;
    if (uVar6 == 0) {
      fn_82F6A594(0x34);
    }
    else {
      uVar6 = 0;
      *(undefined2 *)(puVar5 + 0xc3) = 0;
      uVar7 = 0;
      if ((param_6 & 0xffffffff) != 0) {
        uVar8 = 0;
        uVar9 = 0xffffffffffffffff;
        do {
          iVar3 = (int)(uVar8 << 3);
          uVar2 = *puVar5;
          uVar10 = (longlong)
                   ((double)(float)((double)(float)((double)*(float *)(iVar3 + (int)param_4) *
                                                    dVar16 - dVar14) * dVar15) * dVar13) &
                   0xfffffffc;
          if (uVar2 <= uVar10) {
            uVar10 = (ulonglong)uVar2 - 4;
          }
          if ((uVar10 & 0xffffffff) != (uVar9 & 0xffffffff)) {
            iVar4 = (uVar6 + 0x106) * 2;
            *(short *)(iVar4 + (int)puVar5) = (short)uVar2 - (short)uVar10;
            if ((uVar10 & 0xffffffff) == 0) {
              *(undefined2 *)(iVar4 + (int)puVar5) = 0;
            }
            puVar5[uVar6 + 3] = *(uint *)((int)param_4 + iVar3 + 4);
            uVar1 = *(ushort *)(iVar4 + (int)puVar5);
            if (uVar7 < uVar1) {
              *(short *)(puVar5 + 0xc3) = (short)uVar6;
              uVar7 = uVar1;
            }
            uVar6 = uVar6 + 1 & 0xffff;
          }
          uVar8 = uVar8 + 1 & 0xffff;
          uVar9 = uVar10;
        } while (uVar8 < (param_6 & 0xffffffff));
      }
      *(short *)(puVar5 + 0xc4) = (short)uVar6;
      uVar6 = 0;
      uVar7 = 0;
      *(undefined2 *)((int)puVar5 + 0x30e) = 0;
      if ((param_7 & 0xffffffff) != 0) {
        uVar8 = 0;
        uVar9 = 0xffffffffffffffff;
        do {
          iVar3 = (int)(uVar8 << 3);
          uVar2 = *puVar5;
          uVar10 = (longlong)
                   ((double)(float)((double)(float)((double)*(float *)(iVar3 + (int)param_5) *
                                                    dVar16 - dVar14) * dVar15) * dVar13) &
                   0xfffffffc;
          if (uVar2 <= uVar10) {
            uVar10 = (ulonglong)uVar2 - 4;
          }
          if ((uVar10 & 0xffffffff) != (uVar9 & 0xffffffff)) {
            iVar4 = (uVar6 + 0x146) * 2;
            *(short *)(iVar4 + (int)puVar5) = (short)uVar2 - (short)uVar10;
            if ((uVar10 & 0xffffffff) == 0) {
              *(undefined2 *)(iVar4 + (int)puVar5) = 0;
            }
            puVar5[uVar6 + 0x43] = *(uint *)((int)param_5 + iVar3 + 4);
            uVar1 = *(ushort *)(iVar4 + (int)puVar5);
            if (uVar7 < uVar1) {
              *(short *)((int)puVar5 + 0x30e) = (short)uVar6;
              uVar7 = uVar1;
            }
            uVar6 = uVar6 + 1 & 0xffff;
          }
          uVar8 = uVar8 + 1 & 0xffff;
          uVar9 = uVar10;
        } while (uVar8 < (param_7 & 0xffffffff));
      }
      *(short *)((int)puVar5 + 0x312) = (short)uVar6;
      puVar5[2] = 0;
      fn_82F6A594(1);
    }
  }
  return;
}

