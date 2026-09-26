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
extern int fn_82AA66A8();
extern int fn_82AD12C8();
extern int fn_82AEFBB8();
extern int fn_82AEFDB8();
extern int fn_82AF4BA8();


undefined8
fn_82AF5EC0(undefined8 param_1,uint *param_2,uint *param_3,undefined4 *param_4,undefined4 *param_5
             )

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  bool bVar4;
  char cVar9;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar11;
  longlong lVar10;
  byte *pbVar12;
  ulonglong uVar13;
  uint uVar15;
  ulonglong uVar14;
  byte *pbVar16;
  bool bVar19;
  ulonglong uVar17;
  byte *pbVar18;
  undefined4 uVar20;
  uint *puVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint *puVar26;
  uint *puVar27;
  byte abStack_b0 [16];
  byte abStack_a0 [160];
  
  uVar1 = param_3[3];
  uVar8 = *param_3;
  uVar14 = (ulonglong)uVar8 & 0x1f;
  uVar7 = *(uint *)(uVar1 + 8) >> 7 & 0x7f;
  if ((uVar7 == 0x7d) || (bVar19 = false, uVar7 == 0x7c)) {
    bVar19 = true;
  }
  uVar7 = param_2[4];
  uVar2 = param_2[3];
  cVar9 = fn_82AEFDB8(uVar7,uVar1,param_1);
  if (cVar9 != '\0') {
    uVar22 = *param_2;
    uVar13 = (ulonglong)uVar22 & 0x1f;
    if ((((uVar8 & 0x18) == 0) || ((uVar22 & 0x18) == 0)) &&
       (((uVar8 & 2) == 0 || ((uVar22 & 1) == 0)))) {
      if (((uVar8 & 4) == 0) || (bVar4 = false, (uVar22 & 1) == 0)) {
        bVar4 = true;
      }
    }
    else {
      bVar4 = false;
    }
    if (bVar4) {
      uVar17 = uVar14;
      if (((uVar8 & 4) != 0) && ((uVar22 & 2) != 0)) {
        uVar17 = uVar14 - 4;
      }
      if ((uVar17 & uVar13 & 4) != 0) {
        uVar17 = uVar17 - 4;
        uVar13 = uVar13 - 4;
      }
      if (((uVar17 & 1) != 0) && ((uVar13 & 2) != 0)) {
        uVar13 = uVar13 - 2;
      }
      uVar17 = uVar17 | uVar13;
      cVar9 = fn_82AEFBB8(uVar7,uVar17);
      if (cVar9 != '\0') {
        uVar13 = 0;
        uVar20 = 0;
        uVar22 = *(uint *)(uVar7 + 8) >> 7 & 0x7f;
        if ((uVar22 == 0) || (bVar4 = true, 0x66 < uVar22)) {
          bVar4 = false;
        }
        if (bVar4) {
          uVar24 = 0;
          puVar27 = (uint *)0x0;
          puVar21 = (uint *)0x0;
          puVar11 = (undefined4 *)(uVar7 + 0x2c);
          uVar22 = 0xffffffff;
          for (uVar15 = 0; uVar20 = (undefined4)uVar13, uVar15 < (*(uint *)(uVar7 + 8) >> 0x13 & 7);
              uVar15 = uVar15 + 1) {
            puVar3 = (uint *)*puVar11;
            uVar23 = uVar15;
            if (puVar3 != param_2) {
              uVar23 = *(uint *)(puVar3[3] + 8) >> 7 & 0x7f;
              if ((uVar23 == 0x7d) || (bVar4 = false, uVar23 == 0x7c)) {
                bVar4 = true;
              }
              puVar26 = puVar27;
              uVar25 = uVar24;
              if ((bVar4) && (puVar26 = puVar3, uVar25 = uVar15, puVar27 != (uint *)0x0)) {
                puVar21 = puVar3;
                puVar26 = puVar27;
                uVar25 = uVar24;
              }
              uVar13 = (ulonglong)*puVar3 & 0x18 | uVar13;
              puVar27 = puVar26;
              uVar23 = uVar22;
              uVar24 = uVar25;
            }
            puVar11 = puVar11 + 1;
            uVar22 = uVar23;
          }
          if (uVar22 == 0xffffffff) {
                    /* WARNING: Subroutine does not return */
            fn_82AA66A8(param_1,0x12c0);
          }
          if (((uVar8 & 0x18) != 0) && (uVar13 != 0)) {
            if (((ulonglong)uVar8 & 0x18) != uVar13) {
              return 0;
            }
            if ((uVar8 & 8) != 0) {
              iVar5 = fn_82AD12C8(uVar2);
              iVar6 = fn_82AD12C8(uVar7);
              if (iVar5 != iVar6) {
                return 0;
              }
            }
          }
          if ((bVar19) && (puVar21 != (uint *)0x0)) {
            if (uVar22 == 0) {
              uVar14 = (ulonglong)**(uint **)((uVar24 + 0xb) * 4 + uVar7) & 0x1f;
            }
            if (((*puVar21 ^ uVar14) & 0x18) != 0) {
              return 0;
            }
          }
          if (((bVar19) && (puVar27 != (uint *)0x0)) && (((*puVar27 ^ uVar17) & 2) != 0)) {
            uVar7 = fn_82AF4BA8(param_1,uVar1,*param_3 >> 0x19 & 7,*param_3 >> 5 & 0xff,uVar17,
                                  abStack_a0);
            uVar8 = *puVar27;
            uVar8 = fn_82AF4BA8(param_1,puVar27[3],uVar8 >> 0x19 & 7,uVar8 >> 5 & 0xff,
                                  uVar8 & 0x1f,abStack_b0);
            if (((uVar8 | uVar7) & 5) == 5) {
              return 0;
            }
            if (uVar8 != 4) {
              return 0;
            }
            uVar14 = 2;
            if ((uVar17 & 4) != 0) {
              uVar17 = uVar17 - 4;
            }
            if ((uVar17 & 1) != 0) {
              uVar14 = 0;
            }
            uVar17 = uVar17 | uVar14;
            if ((*(uint *)(uVar1 + 8) & 0x3f80) == 16000) {
              fn_82AF4BA8(param_1,uVar1,*param_3 >> 0x19 & 7,*param_3 >> 5 & 0xff,uVar17,
                            abStack_b0);
              pbVar12 = abStack_b0;
              pbVar18 = abStack_a0;
              lVar10 = 0;
              uVar1 = *param_3 >> 0x17 & 0x1c;
              if (uVar1 != 0) {
                pbVar16 = pbVar18 + uVar1;
                do {
                  lVar10 = (ulonglong)*pbVar18 - (ulonglong)*pbVar12;
                  if (lVar10 != 0) break;
                  pbVar18 = pbVar18 + 1;
                  pbVar12 = pbVar12 + 1;
                } while (pbVar18 != pbVar16);
              }
              if ((int)lVar10 != 0) {
                return 0;
              }
            }
          }
        }
        *param_5 = uVar20;
        *param_4 = (int)uVar17;
        return 1;
      }
    }
  }
  return 0;
}

