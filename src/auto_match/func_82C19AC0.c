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
extern unsigned int fStack_b0;
extern int fn_82C378E0();
extern int fn_82F691F0();
extern unsigned int lbl_820ED0E0;


undefined8 fn_82C19AC0(int param_1,undefined8 param_2,int param_3)

{
  uint uVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  short sVar8;
  undefined8 uVar7;
  short sVar9;
  int iVar10;
  short sVar11;
  uint uVar12;
  uint uVar13;
  int *piVar14;
  uint uVar15;
  int iVar16;
  short sVar17;
  int iVar18;
  double dVar19;
  double dVar20;
  float fStack_b0;
  
  iVar3 = *(int *)(param_3 + 0x38);
  dataCacheBlockTouch(0xffffffff820ed0e0);
  dataCacheBlockTouch(0xffffffff820ed160);
  uVar4 = *(uint *)(param_1 + 0xe0);
  if (0 < (int)uVar4) {
    sVar17 = *(short *)(param_3 + 0x76);
    if (0 < sVar17) {
      uVar15 = 0;
      uVar1 = (int)(((ulonglong)uVar4 & 0xfffff) << 0xc) / (int)sVar17;
      trapWord(6,(longlong)sVar17,0);
      trapWord(5,(longlong)sVar17 &
                 ~((((ulonglong)uVar4 & 0x7ffff) << 0xd | ((ulonglong)uVar4 & 0xfffff) >> 0x13) - 1)
               ,0xffff);
      uVar6 = uVar1;
      while (1 < uVar6) {
        uVar15 = uVar15 + 1;
        uVar6 = uVar1 >> (uVar15 & 0x3f);
      }
      uVar13 = *(uint *)(param_1 + 0x100);
      uVar12 = 0;
      trapWord(6,(ulonglong)uVar4,0);
      uVar6 = (int)uVar13 / (int)uVar4;
      trapWord(5,(ulonglong)uVar4 &
                 ~((((ulonglong)uVar13 & 0x7fffffff) << 1 | (ulonglong)(uVar13 >> 0x1f)) - 1),0xffff
              );
      uVar4 = uVar6;
      while (1 < uVar4) {
        uVar12 = uVar12 + 1;
        uVar4 = uVar6 >> (uVar12 & 0x3f);
      }
      iVar16 = uVar12 * 0x74 + *(int *)(param_1 + 0x158);
      uVar13 = 0;
      uVar4 = uVar6;
      while (1 < uVar4) {
        uVar13 = uVar13 + 1;
        uVar4 = uVar6 >> (uVar13 & 0x3f);
      }
      piVar14 = (int *)(iVar16 + 4);
      sVar8 = (short)*(undefined4 *)(param_3 + 0x24) + -1;
      iVar5 = *(int *)(*(int *)(param_1 + 0x154) + uVar13 * 4);
      iVar18 = 0;
      sVar17 = -1;
      if (*(int *)(iVar16 + 4) <= (int)((int)*(short *)(param_1 + 0xca) * uVar1) >> 0xc) {
        do {
          piVar14 = piVar14 + 1;
          iVar18 = iVar18 + 1;
        } while (*piVar14 <= (int)((int)*(short *)(param_1 + 0xca) * uVar1) >> 0xc);
      }
      uVar7 = (**(code **)(param_1 + 0x1e4))(param_2,param_3);
      if ((int)uVar7 < 0) {
        return uVar7;
      }
      dVar19 = (double)fStack_b0;
      sVar9 = *(short *)(param_1 + 0xca) + (short)*(undefined4 *)(param_1 + 0x10) + 1;
      iVar10 = (int)sVar9;
      *(short *)(param_1 + 0xca) = sVar9;
      for (; (sVar11 = (short)iVar10, sVar9 < sVar8 && (iVar18 < iVar5)); iVar18 = iVar18 + 1) {
        piVar14 = (int *)((iVar18 + 1) * 4 + iVar16);
        if (*piVar14 <= (int)(iVar10 * uVar1) >> 0xc) {
          do {
            piVar14 = piVar14 + 1;
            iVar18 = iVar18 + 1;
          } while (*piVar14 <= (int)((int)*(short *)(param_1 + 0xca) * uVar1) >> 0xc);
        }
        if (iVar5 <= iVar18) break;
        if (sVar11 == sVar17) {
          dVar20 = (double)(float)((double)(longlong)*(int *)(param_1 + 0x14) * dVar19);
          dVar19 = (double)fn_82C378E0(param_1,param_3,iVar18);
        }
        else {
          dVar19 = (double)fn_82C378E0(param_1,param_3,iVar18);
          dVar20 = (double)(float)((double)(longlong)*(int *)(param_1 + 0x14) * dVar19);
        }
        iVar10 = (iVar18 + 1) * 4;
        if ((int)uVar15 < 0xd) {
          sVar9 = (short)(*(int *)(iVar10 + iVar16) << (0xc - uVar15 & 0x3f));
        }
        else {
          sVar9 = (short)((1 << (uVar15 - 0xd & 0x3f)) + *(int *)(iVar10 + iVar16) >>
                         (uVar15 - 0xc & 0x3f));
        }
        sVar17 = sVar9 + -1;
        if (sVar8 < (short)(sVar9 + -1)) {
          sVar17 = sVar8;
        }
        while( true ) {
          if (*(int *)(param_1 + 0x18) != 0) {
            dVar20 = -dVar20;
          }
          *(float *)(*(short *)(param_1 + 0xca) * 4 + iVar3) = (float)dVar20;
          uVar7 = (**(code **)(param_1 + 0x1e4))(param_2,param_3);
          if ((int)uVar7 < 0) {
            return uVar7;
          }
          sVar9 = *(short *)(param_1 + 0xca) + (short)*(undefined4 *)(param_1 + 0x10) + 1;
          iVar10 = (int)sVar9;
          *(short *)(param_1 + 0xca) = sVar9;
          if (sVar17 <= iVar10) break;
          iVar10 = *(int *)(param_1 + 0x14);
          if (iVar10 < 0x40) {
            dVar20 = (double)(float)((double)*(float *)(&lbl_820ED0E0 + iVar10 * 4) * dVar19);
          }
          else {
            dVar20 = (double)(float)((double)(longlong)iVar10 * dVar19);
          }
        }
        sVar9 = *(short *)(param_1 + 0xca);
      }
      if (sVar11 == sVar8) {
        if (sVar17 <= sVar11) {
          iVar10 = iVar18 + -1;
          if (iVar10 < iVar5) {
            piVar14 = (int *)(iVar18 * 4 + iVar16);
            do {
              if ((int)((int)sVar11 * uVar1) >> 0xc < *piVar14) break;
              iVar10 = iVar10 + 1;
              iVar18 = iVar18 + 1;
              piVar14 = piVar14 + 1;
            } while (iVar10 < iVar5);
          }
          if (iVar18 + -1 <= iVar5) {
            dVar19 = (double)fn_82C378E0(param_1,param_3);
          }
        }
        fVar2 = (float)((double)(longlong)*(int *)(param_1 + 0x14) * dVar19);
        if (*(int *)(param_1 + 0x18) != 0) {
          fVar2 = -fVar2;
        }
        *(float *)(*(short *)(param_1 + 0xca) * 4 + iVar3) = fVar2;
      }
      if (*(short *)(param_1 + 0xca) <= *(short *)(param_3 + 0x76)) {
        if (0 < *(int *)(param_1 + 0x108)) {
                    /* WARNING: Subroutine does not return */
          fn_82F691F0(iVar3,0,*(int *)(param_1 + 0x108) << 2);
        }
                    /* WARNING: Subroutine does not return */
        fn_82F691F0(*(uint *)(param_1 + 0x1d8) * 4 + iVar3,0,
                     ((longlong)*(short *)(param_3 + 0x78) - (ulonglong)*(uint *)(param_1 + 0x1d8) &
                     0x3fffffff) << 2);
      }
    }
  }
  return 0xffffffff80040002;
}

