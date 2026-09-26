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
extern int fn_82ABDD90();
extern int fn_82ABE2E0();
extern int fn_82B16BA0();
extern int fn_82B25248();
extern int fn_82B85568();
extern int fn_82B85910();
extern int fn_82B8CB58();


undefined8
fn_82B25A70(undefined8 param_1,int param_2,int param_3,undefined8 param_4,undefined8 param_5)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  bool bVar8;
  uint uVar9;
  undefined8 uVar10;
  char cVar12;
  int iVar11;
  int *piVar13;
  byte *pbVar14;
  byte *pbVar15;
  bool bVar17;
  int *piVar16;
  byte *pbVar18;
  uint uVar19;
  int *piVar20;
  byte *pbVar21;
  int iVar22;
  int iVar23;
  
  if ((*(uint *)(param_3 + 8) & 0x3f80) == 0x3000) {
    uVar10 = 0;
  }
  else {
    uVar10 = 0;
    piVar20 = (int *)(param_2 + 4);
    while (iVar3 = *piVar20, iVar3 != 0) {
      iVar23 = *(int *)(iVar3 + 0x10);
      if (iVar23 != 0) {
        uVar19 = *(uint *)(iVar23 + 8);
        uVar9 = uVar19 >> 7 & 0x7f;
        if (((((uVar9 == (*(uint *)(param_3 + 8) >> 7 & 0x7f)) && (iVar23 != param_3)) &&
             ((uVar19 >> 0x19 & 1) == 0)) &&
            (((uVar19 >> 5 & 1) == 0 &&
             (((uVar19 >> 6 & 1) == 0 || (*(int *)(iVar23 + 0x1c) == *(int *)(param_3 + 0x1c)))))))
           && (((uVar9 != 0x70 || (*(int *)(iVar23 + 0x1c) == *(int *)(param_3 + 0x1c))) &&
               (((((*(uint *)(*(int *)(iVar23 + 0x1c) + 0x4c) ^
                   *(uint *)(*(int *)(param_3 + 0x1c) + 0x4c)) & 0x7ffff) == 0 &&
                 (cVar12 = fn_82ABE2E0(iVar23), cVar12 == '\0')) &&
                (cVar12 = fn_82B85568(iVar23,param_3,param_1), cVar12 != '\0')))))) {
          iVar11 = *(int *)(iVar23 + 0x1c);
          bVar8 = false;
          iVar4 = *(int *)(param_3 + 0x1c);
          iVar22 = param_3;
          if (iVar11 == iVar4) {
            bVar8 = true;
            if ((iVar23 != param_2) && (cVar12 = fn_82B85910(iVar23,param_3), cVar12 != '\0')) {
LAB_82b25c0c:
              bVar8 = true;
              iVar22 = iVar23;
              iVar23 = param_3;
            }
          }
          else {
            uVar7 = (ulonglong)*(uint *)(iVar11 + 0x30) & 0x7ffff;
            if ((*(uint *)(((int)(uVar7 >> 5) + 1) * 4 + *(int *)(iVar4 + 0x28)) &
                1 << ((uint)uVar7 & 0x1f)) == 0) {
              uVar7 = (ulonglong)*(uint *)(iVar4 + 0x30) & 0x7ffff;
              if ((*(uint *)(((int)(uVar7 >> 5) + 1) * 4 + *(int *)(iVar11 + 0x28)) &
                  1 << ((uint)uVar7 & 0x1f)) != 0) goto LAB_82b25c0c;
            }
            else {
              bVar8 = true;
            }
          }
          if (bVar8) {
            uVar19 = *(uint *)(iVar23 + 8);
            uVar9 = uVar19 >> 7 & 0x7f;
            if (uVar9 == 0x60) {
              iVar11 = fn_82ABDD90(param_1,0x60,uVar19 >> 0x13 & 7,uVar19 >> 0xe & 7);
              uVar19 = *(uint *)(iVar22 + 8);
              pbVar21 = (byte *)(iVar11 + iVar23 + -0x14);
              iVar11 = fn_82ABDD90(param_1,uVar19 >> 7 & 0x7f,uVar19 >> 0x13 & 7,uVar19 >> 0xe & 7)
              ;
              pbVar14 = (byte *)(iVar11 + iVar22 + -0x14);
              pbVar18 = pbVar21;
              pbVar15 = pbVar14;
              do {
                bVar1 = *pbVar18;
                bVar2 = *pbVar15;
                if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
                pbVar18 = pbVar18 + 1;
                pbVar15 = pbVar15 + 1;
              } while (pbVar18 != pbVar21 + 0x10);
              if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0) {
                uVar5 = *(undefined4 *)(pbVar14 + 0x10);
                uVar6 = *(undefined4 *)(pbVar21 + 0x10);
LAB_82b25d44:
                cVar12 = fn_82B16BA0(param_1,uVar6,uVar5);
                if (cVar12 != '\0') goto LAB_82b25d58;
              }
            }
            else {
              if (((uVar9 == 0x61) || (uVar9 == 99)) || (bVar17 = false, uVar9 == 100)) {
                bVar17 = true;
              }
              if (!bVar17) goto LAB_82b25d58;
              iVar11 = fn_82ABDD90(param_1,uVar9,uVar19 >> 0x13 & 7,uVar19 >> 0xe & 7);
              uVar19 = *(uint *)(iVar22 + 8);
              pbVar21 = (byte *)(iVar11 + iVar23 + -0x18);
              iVar11 = fn_82ABDD90(param_1,uVar19 >> 7 & 0x7f,uVar19 >> 0x13 & 7,uVar19 >> 0xe & 7)
              ;
              pbVar14 = (byte *)(iVar11 + iVar22 + -0x18);
              pbVar18 = pbVar21;
              pbVar15 = pbVar14;
              do {
                bVar1 = *pbVar18;
                bVar2 = *pbVar15;
                if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
                pbVar18 = pbVar18 + 1;
                pbVar15 = pbVar15 + 1;
              } while (pbVar18 != pbVar21 + 0x14);
              if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0) {
                uVar5 = *(undefined4 *)(pbVar14 + 0x14);
                uVar6 = *(undefined4 *)(pbVar21 + 0x14);
                goto LAB_82b25d44;
              }
            }
            bVar8 = false;
          }
LAB_82b25d58:
          param_3 = iVar22;
          if (bVar8) {
            if ((*(uint *)(iVar22 + 8) & 0x3f80) == 0x3800) {
              piVar13 = (int *)(iVar22 + 4);
              while( true ) {
                iVar11 = *piVar13;
                if (iVar11 == 0) break;
                if (*(int *)(iVar11 + 0x10) != 0) {
                  piVar16 = (int *)(*(int *)(iVar11 + 0xc) + 4);
                  for (iVar4 = *piVar16; iVar4 != iVar11; iVar4 = *(int *)(iVar4 + 8)) {
                    piVar16 = (int *)(iVar4 + 8);
                  }
                  *piVar16 = *(int *)(iVar11 + 8);
                  *(undefined4 *)(iVar11 + 8) = *(undefined4 *)(iVar23 + 4);
                  *(int *)(iVar23 + 4) = iVar11;
                  *(int *)(iVar11 + 0xc) = iVar23;
                }
                if (*piVar13 == iVar11) {
                  piVar13 = (int *)(iVar11 + 8);
                }
              }
              fn_82B25248(param_1,iVar23,param_4);
LAB_82b25e4c:
              fn_82B25248(param_1,iVar22,param_4);
            }
            else {
              cVar12 = fn_82B8CB58(param_1,iVar22,iVar23,0xe4,0,param_4,param_5);
              if (cVar12 == '\0') goto LAB_82b25e60;
              fn_82B25248(param_1,iVar22,param_4);
              uVar19 = (*(uint *)(iVar22 + 0xc) | *(uint *)(iVar23 + 0xc)) & 0xcccc;
              if ((*(uint *)(iVar23 + 0xc) & 0xffff) != uVar19) {
                *(short *)(iVar23 + 0xe) = (short)uVar19;
                iVar22 = iVar23;
                goto LAB_82b25e4c;
              }
            }
            uVar10 = 1;
            param_3 = iVar23;
          }
        }
      }
LAB_82b25e60:
      if (*piVar20 == iVar3) {
        piVar20 = (int *)(iVar3 + 8);
      }
    }
  }
  return uVar10;
}

