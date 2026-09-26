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
extern int fn_82F691F0();
extern int fn_82F6A510();
extern int fn_82F6A55C();
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_821AAD20;


void fn_82C18CC8(undefined8 param_1,longlong param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  float *pfVar2;
  float *pfVar3;
  uint uVar4;
  float fVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  
  piVar6 = (int *)fn_82F6A510();
  fVar5 = lbl_82002C5C;
  iVar1 = *piVar6;
  iVar7 = piVar6[0x5a];
  if (piVar6[0x58] != 0) {
    if (piVar6[0x6a] != 0) {
      iVar7 = 6;
    }
    iVar8 = (int)param_3;
    if ((*(ushort *)(iVar1 + 0x22) == 6) && (iVar7 == 2)) {
      pfVar2 = *(float **)piVar6[0x5d];
      pfVar3 = (float *)((undefined4 *)piVar6[0x5d])[1];
      dVar26 = (double)*pfVar2;
      dVar25 = (double)pfVar2[1];
      dVar24 = (double)pfVar2[2];
      dVar23 = (double)pfVar2[3];
      dVar22 = (double)pfVar2[4];
      dVar21 = (double)pfVar2[5];
      dVar20 = (double)*pfVar3;
      dVar19 = (double)pfVar3[1];
      dVar18 = (double)pfVar3[2];
      dVar17 = (double)pfVar3[3];
      dVar16 = (double)pfVar3[4];
      dVar15 = (double)pfVar3[5];
      if (0 < iVar8) {
        dVar27 = (double)lbl_821AAD20;
        do {
          iVar7 = (**(code **)(iVar1 + 0x20c))
                            (param_2,*(undefined4 *)(iVar1 + 0x58),*(undefined2 *)(iVar1 + 0x6e),0);
          dVar28 = (double)(longlong)iVar7;
          iVar7 = (**(code **)(iVar1 + 0x20c))
                            (param_2,*(undefined4 *)(iVar1 + 0x58),*(undefined2 *)(iVar1 + 0x6e),1);
          dVar13 = (double)(longlong)iVar7;
          iVar7 = (**(code **)(iVar1 + 0x20c))
                            (param_2,*(undefined4 *)(iVar1 + 0x58),*(undefined2 *)(iVar1 + 0x6e),2);
          dVar12 = (double)(longlong)iVar7;
          iVar7 = (**(code **)(iVar1 + 0x20c))
                            (param_2,*(undefined4 *)(iVar1 + 0x58),*(undefined2 *)(iVar1 + 0x6e),3);
          dVar11 = (double)(longlong)iVar7;
          iVar7 = (**(code **)(iVar1 + 0x20c))
                            (param_2,*(undefined4 *)(iVar1 + 0x58),*(undefined2 *)(iVar1 + 0x6e),4);
          dVar10 = (double)(longlong)iVar7;
          iVar7 = (**(code **)(iVar1 + 0x20c))
                            (param_2,*(undefined4 *)(iVar1 + 0x58),*(undefined2 *)(iVar1 + 0x6e),5);
          dVar9 = (double)(float)(dVar28 * dVar26 +
                                 (double)(float)(dVar13 * dVar25 +
                                                (double)(float)(dVar12 * dVar24 +
                                                               (double)(float)(dVar11 * dVar23 +
                                                                              (double)(float)((
                                                  double)(longlong)iVar7 * dVar21 +
                                                  (double)(float)(dVar10 * dVar22))))));
          dVar14 = (double)fVar5;
          dVar10 = (double)(float)(dVar28 * dVar20 +
                                  (double)(float)(dVar13 * dVar19 +
                                                 (double)(float)(dVar12 * dVar18 +
                                                                (double)(float)(dVar11 * dVar17 +
                                                                               (double)(float)((
                                                  double)(longlong)iVar7 * dVar15 +
                                                  (double)(float)(dVar10 * dVar16))))));
          if (dVar27 <= dVar9) {
            dVar9 = dVar9 + dVar14;
          }
          else {
            dVar9 = dVar9 - dVar14;
          }
          iVar8 = (int)dVar9;
          iVar7 = *(int *)(iVar1 + 0x70);
          if ((iVar8 < iVar7) || (iVar7 = *(int *)(iVar1 + 0x74), iVar7 < iVar8)) {
            iVar8 = iVar7;
          }
          (**(code **)(iVar1 + 0x208))(iVar8,param_4,iVar1,0);
          if (dVar27 <= dVar10) {
            dVar10 = dVar10 + dVar14;
          }
          else {
            dVar10 = dVar10 - dVar14;
          }
          iVar8 = (int)dVar10;
          iVar7 = *(int *)(iVar1 + 0x70);
          if ((iVar8 < iVar7) || (iVar7 = *(int *)(iVar1 + 0x74), iVar7 < iVar8)) {
            iVar8 = iVar7;
          }
          (**(code **)(iVar1 + 0x208))(iVar8,param_4,iVar1,1);
          uVar4 = *(uint *)(iVar1 + 0x58);
          param_3 = param_3 + -1;
          param_4 = ((ulonglong)uVar4 & 0x7fffffff) * 2 + param_4;
          param_2 = ((ulonglong)uVar4 + ((ulonglong)uVar4 & 0x7fffffff) * 2 & 0x7fffffff) * 2 +
                    param_2;
        } while (param_3 != 0);
        fn_82F6A55C(0);
        return;
      }
    }
    else if ((int)(uint)*(ushort *)(iVar1 + 0x22) < iVar7) {
      if (-1 < iVar8 + -1) {
                    /* WARNING: Subroutine does not return */
        fn_82F691F0(piVar6[0x60],0,iVar7 << 2);
      }
    }
    else if (0 < iVar8) {
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(piVar6[0x60],0,iVar7 << 2);
    }
  }
  fn_82F6A55C(0);
  return;
}

