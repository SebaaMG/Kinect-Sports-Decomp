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
extern unsigned int *auStack_170;
extern int fn_8268CC00();
extern int fn_8268CEB0();
extern int fn_82755588();
extern int fn_827555D8();
extern int fn_82756488();
extern int fn_82756F70();
extern int fn_82F643F8();
extern int fn_82F6A53C();
extern int fn_82F6A588();
extern unsigned int iStack_c4;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_10c;
extern unsigned int uStack_110;
extern unsigned int uStack_d0;


void fn_82757688(undefined8 param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  int *piVar5;
  ulonglong uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  ulonglong uVar11;
  int iVar12;
  double dVar13;
  double dVar14;
  undefined1 auStack_170 [72];
  longlong lStack_128;
  longlong lStack_120;
  longlong lStack_118;
  uint uStack_110;
  uint uStack_10c;
  undefined4 uStack_d0;
  int iStack_c4;
  
  piVar5 = (int *)fn_82F6A53C();
  if ((param_2 & 0xffffffff) != 0) {
    uVar6 = (ulonglong)(uint)piVar5[1];
    uVar11 = 0;
    if (uVar6 != 0) {
      iVar9 = 0;
      dVar13 = (double)lbl_821AAD20;
      do {
        uVar10 = 0;
        iVar12 = 0;
        iVar1 = *(int *)(iVar9 + *piVar5);
        dVar14 = dVar13;
        while( true ) {
          if (((iVar1 == -0x6c) || (*(uint *)(iVar1 + 0x70) <= uVar10)) ||
             (bVar4 = false, (int)uVar10 < 0)) {
            bVar4 = true;
          }
          if (bVar4) break;
          piVar2 = *(int **)(iVar12 + *(int *)(iVar1 + 0x6c));
          lStack_118 = (longlong)piVar2[3];
          if ((double)lStack_118 < dVar13) {
            dVar13 = (double)lStack_118;
          }
          if (*piVar2 < 0) {
            iVar7 = (int)*(char *)((int)piVar2 + 0x1d);
          }
          else {
            iVar7 = (int)*(short *)(piVar2 + 10);
          }
          lStack_120 = (longlong)(iVar7 + piVar2[4]);
          fn_82756F70(&uStack_110);
          if (iStack_c4 == 0) {
            iVar7 = 0;
          }
          else {
            iVar7 = *(int *)(iStack_c4 + 0x14);
          }
          iVar3 = (int)param_2;
          *(undefined4 *)(iVar3 + 0x30) = *(undefined4 *)(iVar7 + 0xc);
          *(undefined4 *)(iVar3 + 0x3c) = uStack_d0;
          while( true ) {
            if ((uStack_110 == 0) || (bVar4 = false, uStack_10c <= uStack_110)) {
              bVar4 = true;
            }
            if (bVar4) break;
            if (((param_3 & 0xffffffff) <= (uVar11 & 0xffffffff)) &&
               ((uVar11 & 0xffffffff) < (param_4 & 0xffffffff))) {
              *(undefined4 *)(iVar3 + 0x34) = 0;
              dVar13 = (double)fn_82755588();
              *(float *)(iVar3 + 0x38) = (float)dVar13;
              fn_8268CC00(auStack_170);
              dVar13 = (double)fn_8268CEB0(iVar1 + 0x44);
                    /* WARNING: Subroutine does not return */
              fn_82F643F8((double)(float)dVar13);
            }
            uVar8 = (uint)*(ushort *)(uStack_110 + 2);
            if ((*(ushort *)(uStack_110 + 6) >> 6 & 1) != 0) {
              uVar8 = -(uint)*(ushort *)(uStack_110 + 2);
            }
            lStack_128 = (longlong)(int)uVar8;
            uVar11 = uVar11 + 1;
            dVar13 = (double)(float)((double)lStack_128 + dVar13);
            fn_827555D8(&uStack_110);
          }
          fn_82756488(&uStack_110);
          if (uVar10 < *(uint *)(iVar1 + 0x70)) {
            uVar10 = uVar10 + 1;
            iVar12 = iVar12 + 4;
          }
        }
        uVar6 = uVar6 - 1;
        iVar9 = iVar9 + 8;
        dVar13 = dVar14;
      } while (uVar6 != 0);
    }
  }
  fn_82F6A588();
  return;
}

