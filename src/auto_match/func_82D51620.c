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
extern unsigned int *auStack_a0;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_c0;
extern unsigned int fStack_9c;
extern unsigned int fStack_ac;
extern int fn_82D512C0();
extern int fn_82D51E18();
extern unsigned int uStack_c4;
extern unsigned int uStack_c8;
extern unsigned int uStack_cc;


int fn_82D51620(int param_1,int param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  bool bVar4;
  bool bVar5;
  uint *puVar6;
  int in_r0;
  int *piVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint *puVar14;
  longlong lVar15;
  int iVar16;
  int iVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  char acStack_d0 [4];
  uint uStack_cc;
  uint uStack_c8;
  uint uStack_c4;
  uint auStack_c0 [4];
  undefined1 auStack_b0 [4];
  float fStack_ac;
  undefined1 auStack_a0 [4];
  float fStack_9c;
  
  puVar2 = (undefined4 *)(in_r0 + param_2 & 0xfffffff0);
  uVar21 = *puVar2;
  uVar22 = puVar2[1];
  uVar23 = puVar2[2];
  uVar24 = puVar2[3];
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  puVar2 = (undefined4 *)(param_2 + 0x10U & 0xfffffff0);
  uVar25 = puVar2[1];
  uVar26 = puVar2[2];
  uVar27 = puVar2[3];
  puVar3 = (undefined4 *)((uint)(auStack_a0 + in_r0) & 0xfffffff0);
  *puVar3 = *puVar2;
  puVar3[1] = uVar25;
  puVar3[2] = uVar26;
  puVar3[3] = uVar27;
  puVar2 = (undefined4 *)((uint)(auStack_b0 + in_r0) & 0xfffffff0);
  *puVar2 = uVar21;
  puVar2[1] = uVar22;
  puVar2[2] = uVar23;
  puVar2[3] = uVar24;
  fn_82D512C0(acStack_d0,auStack_b0,uVar1,&uStack_cc,&uStack_c8,auStack_c0,&uStack_c4);
  if (acStack_d0[0] != '\0') {
    iVar17 = 0;
    piVar7 = (int *)fn_82D51E18(uVar1);
    if (*(char *)(param_1 + 0x20) == '\0') {
      if (uStack_c8 < uStack_cc) {
        return 0;
      }
      do {
        if ((ulonglong)auStack_c0[0] <= (ulonglong)uStack_c4) {
          lVar15 = ((ulonglong)uStack_c4 - (ulonglong)auStack_c0[0]) + 1;
          puVar14 = (uint *)(iVar17 * 4 + param_3 + -4);
          uVar8 = (auStack_c0[0] * 0x8000 + uStack_cc) * 2;
          do {
            puVar6 = puVar14;
            iVar16 = iVar17;
            if (iVar17 < param_4) {
              puVar14[1] = uVar8;
              puVar6 = puVar14 + 1;
              iVar16 = iVar17 + 1;
              if (iVar17 + 1 < param_4) {
                puVar14[2] = uVar8 | 1;
                puVar6 = puVar14 + 2;
                iVar16 = iVar17 + 2;
              }
            }
            iVar17 = iVar16;
            puVar14 = puVar6;
            uVar8 = uVar8 + 0x10000;
            lVar15 = lVar15 + -1;
          } while (lVar15 != 0);
        }
        uStack_cc = uStack_cc + 1;
      } while (uStack_cc <= uStack_c8);
      return iVar17;
    }
    dVar20 = (double)fStack_9c;
    dVar19 = (double)fStack_ac;
    uVar10 = (ulonglong)uStack_c4;
    bVar4 = true;
    uVar11 = (ulonglong)auStack_c0[0];
    bVar5 = true;
    uVar9 = (ulonglong)uStack_cc;
    uVar12 = uVar9;
    uVar13 = uVar9;
    while (uVar13 <= uStack_c8) {
      if (uVar11 <= uVar10) {
        puVar14 = (uint *)(iVar17 * 4 + param_3 + -4);
        lVar15 = (((ulonglong)auStack_c0[0] & 0x1ffff) * 0x8000 + uVar12 & 0x7fffffff) << 1;
        uVar13 = uVar11;
        iVar16 = iVar17;
        do {
          puVar6 = puVar14;
          iVar17 = iVar16;
          if (iVar16 < param_4) {
            iVar17 = iVar16 + 1;
            puVar14[1] = (uint)lVar15;
            puVar6 = puVar14 + 1;
            if (iVar17 < param_4) {
              iVar17 = iVar16 + 2;
              puVar14[2] = (uint)lVar15 | 1;
              puVar6 = puVar14 + 2;
            }
          }
          puVar14 = puVar6;
          if ((bVar4) || (bVar5)) {
            dVar18 = (double)(**(code **)(*piVar7 + 0x34))(piVar7,uVar12,uVar13);
            if (dVar19 < (double)(float)((double)(float)piVar7[9] * dVar18)) {
              bVar4 = false;
            }
            if ((double)(float)((double)(float)piVar7[9] * dVar18) < dVar20) {
              bVar5 = false;
            }
          }
          uVar13 = uVar13 + 1;
          lVar15 = lVar15 + 0x10000;
          iVar16 = iVar17;
        } while ((uVar13 & 0xffffffff) <= uVar10);
      }
      uVar12 = uVar12 + 1;
      uVar13 = uVar12 & 0xffffffff;
    }
    if ((bVar4) || (bVar5)) {
      uVar13 = (ulonglong)uStack_c8 + 1;
      if (uVar9 <= (uVar13 & 0xffffffff)) {
        do {
          dVar18 = (double)(**(code **)(*piVar7 + 0x34))(piVar7,uVar9,uVar10 + 1);
          if (dVar19 < (double)(float)(dVar18 * (double)(float)piVar7[9])) {
            bVar4 = false;
          }
          if ((double)(float)(dVar18 * (double)(float)piVar7[9]) < dVar20) {
            bVar5 = false;
          }
          uVar9 = uVar9 + 1;
        } while ((uVar9 & 0xffffffff) <= (uVar13 & 0xffffffff));
      }
      if (uVar11 <= (uVar10 + 1 & 0xffffffff)) {
        do {
          dVar18 = (double)(**(code **)(*piVar7 + 0x34))(piVar7,uVar13,uVar11);
          if (dVar19 < (double)(float)(dVar18 * (double)(float)piVar7[9])) {
            bVar4 = false;
          }
          if ((double)(float)(dVar18 * (double)(float)piVar7[9]) < dVar20) {
            bVar5 = false;
          }
          uVar11 = uVar11 + 1;
        } while ((uVar11 & 0xffffffff) <= (uVar10 + 1 & 0xffffffff));
      }
    }
    if ((!bVar4) && (!bVar5)) {
      return iVar17;
    }
  }
  return 0;
}

