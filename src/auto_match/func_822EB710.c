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
extern unsigned int *auStack_30;
extern int fn_822C1928();
extern int fn_822C72E0();
extern int fn_822E5640();
extern int fn_822E57D8();
extern int fn_822EC378();
extern int fn_822EC5A0();
extern unsigned int lbl_821CC160;
extern V16 loadVectorLeftIndexed128();
extern V16 vectorRotateLeftImmediateMaskInsert128();
extern V16 vectorSubtractFloatingPoint();


void fn_822EB710(double param_1,int param_2)

{
  float fVar1;
  undefined4 *puVar2;
  int in_r0;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  longlong lVar6;
  byte bVar7;
  double dVar8;
  undefined1 in_vs32 [16];
  undefined1 in_vs45 [16];
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 in_vr12 [16];
  undefined1 auStack_30 [24];
  
  iVar3 = *(int *)(param_2 + 0xc);
  if (*(int *)(iVar3 + 0x24) == 0) {
    if (((*(int *)(*(int *)(iVar3 + 0x110) + 0x18) == 2) ||
        (*(int *)(*(int *)(iVar3 + 0x110) + 0x1c) != 2)) && (*(int *)(iVar3 + 0x27c) == 0)) {
      fn_822E5640();
      fn_822E57D8(*(undefined4 *)(param_2 + 0xc));
    }
    else {
      fVar1 = (float)((double)*(float *)(param_2 + 0x24) - param_1);
      *(float *)(param_2 + 0x24) = fVar1;
      dVar8 = (double)lbl_821CC160;
      if (((*(int *)(iVar3 + 0x2a4) == 0) || (*(int *)(iVar3 + 0x2a8) == 0)) &&
         (dVar8 < (double)fVar1)) {
        iVar3 = fn_822C1928(param_2 + 0x28,0xffffffff821ae2a4,0,7);
        if (iVar3 != -1) {
          fn_822EC378(param_2 + 0x28);
        }
        fn_822E5640(*(undefined4 *)(param_2 + 0xc));
        fn_822E57D8(*(undefined4 *)(param_2 + 0xc));
      }
      iVar3 = *(int *)(param_2 + 0xc);
      if (((*(int *)(iVar3 + 0x2a4) != 0) && (*(int *)(iVar3 + 0x2a8) != 0)) ||
         ((double)*(float *)(param_2 + 0x24) <= dVar8)) {
        if (*(int *)(param_2 + 0x44) == 0) {
          puVar5 = (undefined4 *)(param_2 + 0x28);
          if (0xf < *(uint *)(param_2 + 0x3c)) {
            puVar5 = (undefined4 *)*puVar5;
          }
          iVar3 = fn_822C72E0(*(undefined4 *)(*(int *)(iVar3 + 0x114) + 0x20),puVar5);
          if (iVar3 != 0) {
            *(undefined4 *)(param_2 + 0x44) = 1;
          }
        }
        else {
          lVar6 = (ulonglong)*(uint *)(*(int *)(iVar3 + 0x114) + 0x20) + 4;
          iVar3 = fn_822C1928(lVar6,0xffffffff821ae324,0,0xb);
          if ((iVar3 != -1) ||
             (iVar3 = fn_822C1928(lVar6,0xffffffff821ae330,0,5), iVar3 != -1)) {
            bVar7 = 0;
            *(undefined4 *)(*(int *)(param_2 + 0xc) + 0x27c) = 0;
            iVar4 = fn_822EC5A0(auStack_30,param_2);
            iVar3 = *(int *)(param_2 + 0xc);
            puVar5 = (undefined4 *)(in_r0 + iVar4 & 0xfffffff0);
            uVar9 = puVar5[1];
            uVar10 = puVar5[2];
            uVar11 = puVar5[3];
            vectorSubtractFloatingPoint(in_vs45,in_vs32);
            loadVectorLeftIndexed128(0xffffffff82192950,0x60);
            vectorRotateLeftImmediateMaskInsert128
                      (*(undefined1 (*) [16])(in_r0 + iVar3 + 0x290 & 0xfffffff0),in_vr12,1,0);
            if (!(bool)(bVar7 >> 1 & 1)) {
              puVar2 = (undefined4 *)(in_r0 + iVar3 + 0x290 & 0xfffffff0);
              *puVar2 = *puVar5;
              puVar2[1] = uVar9;
              puVar2[2] = uVar10;
              puVar2[3] = uVar11;
              *(undefined4 *)(iVar3 + 0x2a4) = 0;
              *(undefined4 *)(iVar3 + 0x2a8) = 0;
            }
          }
        }
      }
    }
  }
  return;
}

