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
extern int fn_82CE5410();
extern int fn_82CE6310();
extern int fn_82CE63B0();
extern int fn_82D512C0();
extern int fn_82D51E18();
extern unsigned int uStack_c4;
extern unsigned int uStack_c8;
extern unsigned int uStack_cc;


void fn_82D51928(int param_1,int param_2,int *param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  bool bVar4;
  bool bVar5;
  int in_r0;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  uint uVar16;
  longlong lVar17;
  uint uVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  char acStack_d0 [4];
  uint uStack_cc;
  uint uStack_c8;
  uint uStack_c4;
  uint auStack_c0 [4];
  undefined1 auStack_b0 [4];
  float fStack_ac;
  undefined1 auStack_a0 [4];
  float fStack_9c;
  
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  puVar2 = (undefined4 *)(in_r0 + param_2 & 0xfffffff0);
  uVar22 = *puVar2;
  uVar23 = puVar2[1];
  uVar24 = puVar2[2];
  uVar25 = puVar2[3];
  puVar2 = (undefined4 *)(param_2 + 0x10U & 0xfffffff0);
  uVar26 = puVar2[1];
  uVar27 = puVar2[2];
  uVar28 = puVar2[3];
  puVar3 = (undefined4 *)((uint)(auStack_a0 + in_r0) & 0xfffffff0);
  *puVar3 = *puVar2;
  puVar3[1] = uVar26;
  puVar3[2] = uVar27;
  puVar3[3] = uVar28;
  puVar2 = (undefined4 *)((uint)(auStack_b0 + in_r0) & 0xfffffff0);
  *puVar2 = uVar22;
  puVar2[1] = uVar23;
  puVar2[2] = uVar24;
  puVar2[3] = uVar25;
  fn_82D512C0(acStack_d0,auStack_b0,uVar1,&uStack_cc,&uStack_c8,auStack_c0,&uStack_c4);
  if (acStack_d0[0] != '\0') {
    piVar6 = (int *)fn_82D51E18(*(undefined4 *)(param_1 + 0x18));
    iVar8 = param_3[1];
    if (*(char *)(param_1 + 0x20) == '\0') {
      if (uStack_cc <= uStack_c8) {
        uVar13 = uStack_cc;
        do {
          if ((ulonglong)auStack_c0[0] <= (ulonglong)uStack_c4) {
            lVar17 = ((ulonglong)uStack_c4 - (ulonglong)auStack_c0[0]) + 1;
            uVar18 = (auStack_c0[0] * 0x8000 + uVar13) * 2;
            do {
              iVar8 = fn_82CE5410();
              if (param_3[1] == (param_3[2] & 0x3fffffffU)) {
                fn_82CE63B0(*(undefined4 *)(iVar8 + 0x10),param_3,4);
              }
              uVar16 = uVar18 | 1;
              *(uint *)(param_3[1] * 4 + *param_3) = uVar18;
              param_3[1] = param_3[1] + 1;
              iVar8 = fn_82CE5410();
              if (param_3[1] == (param_3[2] & 0x3fffffffU)) {
                fn_82CE63B0(*(undefined4 *)(iVar8 + 0x10),param_3,4);
              }
              lVar17 = lVar17 + -1;
              uVar18 = uVar18 + 0x10000;
              *(uint *)(param_3[1] * 4 + *param_3) = uVar16;
              param_3[1] = param_3[1] + 1;
            } while (lVar17 != 0);
          }
          uVar13 = uVar13 + 1;
        } while (uVar13 <= uStack_c8);
      }
    }
    else {
      dVar21 = (double)fStack_9c;
      dVar20 = (double)fStack_ac;
      uVar12 = (ulonglong)uStack_c4;
      bVar4 = true;
      uVar10 = (ulonglong)auStack_c0[0];
      bVar5 = true;
      uVar11 = (ulonglong)uStack_cc;
      uVar14 = uVar11;
      uVar15 = uVar11;
      while (uVar15 <= uStack_c8) {
        if (uVar10 <= uVar12) {
          lVar17 = (((ulonglong)auStack_c0[0] & 0x1ffff) * 0x8000 + uVar14 & 0x7fffffff) << 1;
          uVar15 = uVar10;
          do {
            iVar7 = fn_82CE5410();
            if (param_3[1] == (param_3[2] & 0x3fffffffU)) {
              fn_82CE63B0(*(undefined4 *)(iVar7 + 0x10),param_3,4);
            }
            *(uint *)(param_3[1] * 4 + *param_3) = (uint)lVar17;
            param_3[1] = param_3[1] + 1;
            iVar7 = fn_82CE5410();
            if (param_3[1] == (param_3[2] & 0x3fffffffU)) {
              fn_82CE63B0(*(undefined4 *)(iVar7 + 0x10),param_3,4);
            }
            *(uint *)(param_3[1] * 4 + *param_3) = (uint)lVar17 | 1;
            param_3[1] = param_3[1] + 1;
            if ((bVar4) || (bVar5)) {
              dVar19 = (double)(**(code **)(*piVar6 + 0x34))(piVar6,uVar14,uVar15);
              if (dVar20 < (double)(float)((double)(float)piVar6[9] * dVar19)) {
                bVar4 = false;
              }
              if ((double)(float)((double)(float)piVar6[9] * dVar19) < dVar21) {
                bVar5 = false;
              }
            }
            uVar15 = uVar15 + 1;
            lVar17 = lVar17 + 0x10000;
          } while ((uVar15 & 0xffffffff) <= uVar12);
        }
        uVar14 = uVar14 + 1;
        uVar15 = uVar14 & 0xffffffff;
      }
      if ((bVar4) || (bVar5)) {
        uVar15 = (ulonglong)uStack_c8 + 1;
        if (uVar11 <= (uVar15 & 0xffffffff)) {
          do {
            dVar19 = (double)(**(code **)(*piVar6 + 0x34))(piVar6,uVar11,uVar12 + 1);
            if (dVar20 < (double)(float)((double)(float)piVar6[9] * dVar19)) {
              bVar4 = false;
            }
            if ((double)(float)((double)(float)piVar6[9] * dVar19) < dVar21) {
              bVar5 = false;
            }
            uVar11 = uVar11 + 1;
          } while ((uVar11 & 0xffffffff) <= (uVar15 & 0xffffffff));
        }
        if (uVar10 <= (uVar12 + 1 & 0xffffffff)) {
          do {
            dVar19 = (double)(**(code **)(*piVar6 + 0x34))(piVar6,uVar15,uVar10);
            if (dVar20 < (double)(float)((double)(float)piVar6[9] * dVar19)) {
              bVar4 = false;
            }
            if ((double)(float)((double)(float)piVar6[9] * dVar19) < dVar21) {
              bVar5 = false;
            }
            uVar10 = uVar10 + 1;
          } while ((uVar10 & 0xffffffff) <= (uVar12 + 1 & 0xffffffff));
        }
      }
      if ((bVar4) || (bVar5)) {
        iVar7 = fn_82CE5410();
        if ((int)(param_3[2] & 0x3fffffffU) < iVar8) {
          iVar9 = (param_3[2] & 0x3fffffffU) << 1;
          if (iVar9 <= iVar8) {
            iVar9 = iVar8;
          }
          fn_82CE6310(*(undefined4 *)(iVar7 + 0x10),param_3,iVar9,4);
        }
        param_3[1] = iVar8;
      }
    }
  }
  return;
}

