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
extern int fn_827B4730();
extern int fn_82F6A544();
extern int fn_82F6A590();
extern unsigned int lbl_8201435C;


void fn_827B47E0(undefined8 param_1,double param_2,double param_3,double param_4,
                  undefined8 param_5,int param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int in_r9;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  double extraout_f1;
  double dVar8;
  double dVar9;
  
  iVar3 = fn_82F6A544();
  uVar5 = 0;
  if (*(int *)(param_6 + 0x18) != 0) {
    dVar8 = (double)lbl_8201435C;
    dVar9 = extraout_f1;
    do {
      piVar7 = (int *)(*(int *)((uVar5 >> 4 & 0xffffffc) + *(int *)(param_6 + 0x24)) +
                      (uVar5 & 0x3f) * 0x18);
      iVar2 = piVar7[3];
      if (iVar2 != piVar7[4]) {
        if (in_r9 < 0) {
          if (-1 < iVar2) goto LAB_827b486c;
LAB_827b4938:
          if (-1 < in_r9) goto LAB_827b4940;
LAB_827b4954:
          if (piVar7[4] < 0) goto LAB_827b4a30;
        }
        else {
          if (iVar2 == in_r9) {
LAB_827b486c:
            uVar6 = 1;
            uVar4 = piVar7[2];
            iVar2 = (int)((double)(float)((double)*(float *)(*(int *)((uVar4 >> 6 & 0x3fffffc) +
                                                                     *(int *)(*piVar7 + 0x14)) +
                                                            (uVar4 & 0xff) * 8) * dVar9 + param_3) *
                         dVar8);
            iVar1 = (int)((double)(float)((double)*(float *)(*(int *)((uVar4 >> 6 & 0x3fffffc) +
                                                                     *(int *)(*piVar7 + 0x14)) +
                                                             (uVar4 & 0xff) * 8 + 4) * param_2 +
                                         param_4) * dVar8);
            *(int *)(iVar3 + 100) = iVar2;
            *(int *)(iVar3 + 0x5c) = iVar2;
            *(int *)(iVar3 + 0x68) = iVar1;
            *(int *)(iVar3 + 0x60) = iVar1;
            if (1 < (uint)piVar7[1]) {
              do {
                uVar4 = piVar7[2] + uVar6;
                fn_827B4730((double)(float)((double)*(float *)(*(int *)((uVar4 >> 6 & 0x3fffffc) +
                                                                         *(int *)(*piVar7 + 0x14)) +
                                                                (uVar4 * 8 & 0x7f8)) * dVar9 +
                                             param_3),
                              (double)(float)((double)*(float *)(*(int *)((uVar4 >> 6 & 0x3fffffc) +
                                                                         *(int *)(*piVar7 + 0x14)) +
                                                                 (uVar4 * 8 & 0x7f8) + 4) * param_2
                                             + param_4),iVar3);
                uVar6 = uVar6 + 1;
              } while (uVar6 < (uint)piVar7[1]);
            }
            goto LAB_827b4938;
          }
LAB_827b4940:
          if (piVar7[4] != in_r9) {
            if (-1 < in_r9) goto LAB_827b4a30;
            goto LAB_827b4954;
          }
        }
        uVar4 = (piVar7[2] + piVar7[1]) - 1;
        iVar2 = (int)((double)(float)((double)*(float *)(*(int *)((uVar4 >> 6 & 0x3fffffc) +
                                                                 *(int *)(*piVar7 + 0x14)) +
                                                         (uVar4 * 8 & 0x7f8) + 4) * param_2 +
                                     param_4) * dVar8);
        iVar1 = (int)((double)(float)((double)*(float *)(*(int *)((uVar4 >> 6 & 0x3fffffc) +
                                                                 *(int *)(*piVar7 + 0x14)) +
                                                        (uVar4 * 8 & 0x7f8)) * dVar9 + param_3) *
                     dVar8);
        *(int *)(iVar3 + 100) = iVar1;
        *(int *)(iVar3 + 0x5c) = iVar1;
        *(int *)(iVar3 + 0x68) = iVar2;
        *(int *)(iVar3 + 0x60) = iVar2;
        for (uVar4 = piVar7[1]; 1 < uVar4; uVar4 = uVar4 - 1) {
          uVar6 = (piVar7[2] + uVar4) - 2;
          fn_827B4730((double)(float)((double)*(float *)(*(int *)((uVar6 >> 6 & 0x3fffffc) +
                                                                   *(int *)(*piVar7 + 0x14)) +
                                                          (uVar6 * 8 & 0x7f8)) * dVar9 + param_3),
                        (double)(float)((double)*(float *)(*(int *)((uVar6 >> 6 & 0x3fffffc) +
                                                                   *(int *)(*piVar7 + 0x14)) +
                                                           (uVar6 * 8 & 0x7f8) + 4) * param_2 +
                                       param_4),iVar3);
        }
      }
LAB_827b4a30:
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(uint *)(param_6 + 0x18));
  }
  fn_82F6A590();
  return;
}

