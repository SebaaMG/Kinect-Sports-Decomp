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
extern unsigned int *auStack_270;
extern unsigned int *auStack_2b0;
extern int fn_823390A0();
extern int fn_82422F08();
extern int fn_82424798();
extern int fn_82424930();
extern int fn_8251F720();
extern int fn_8251FA58();
extern int fn_8251FBA8();
extern int fn_825200A8();
extern int fn_8257A9F0();
extern int fn_8265C9E0();
extern int fn_8265CA20();
extern int fn_82F65350();
extern unsigned int iStack_274;
extern unsigned int iStack_280;
extern unsigned int uStack_278;
extern unsigned int uStack_27c;
extern unsigned int uStack_288;
extern unsigned int uStack_290;
extern unsigned int uStack_298;


void fn_82424398(int param_1,int *param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar4;
  ulonglong uVar3;
  int iVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  longlong lVar10;
  ulonglong uVar11;
  uint *puVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  uint uVar15;
  undefined4 *puVar16;
  uint *puVar17;
  uint uVar18;
  uint auStack_2b0 [4];
  undefined4 *puStack_2a0;
  undefined4 *puStack_29c;
  undefined4 uStack_298;
  undefined4 uStack_290;
  undefined4 *puStack_28c;
  undefined4 uStack_288;
  undefined4 *puStack_284;
  int iStack_280;
  undefined4 uStack_27c;
  undefined4 uStack_278;
  int iStack_274;
  undefined1 auStack_270 [624];
  
  if (*param_2 != 0) {
    iVar4 = fn_8251F720(param_2,0);
    uVar3 = fn_8251FBA8();
    uVar3 = (uVar3 & 0xffffffff) >> 4;
    if (uVar3 != 0) {
      puVar12 = (uint *)(param_1 + 0x2c);
      puVar13 = (undefined4 *)(iVar4 + 4);
      do {
        lVar10 = 0;
        uStack_27c = puVar13[-1];
        uVar9 = 0;
        uStack_278 = puVar13[1];
        iStack_274 = puVar13[2] + -1;
        uVar8 = (ulonglong)*puVar12;
        uVar11 = (ulonglong)*(uint *)(param_1 + 0x30);
        if (uVar8 == uVar11) {
LAB_82424448:
          uStack_290 = *puVar13;
          uStack_288 = 0;
          puStack_28c = (undefined4 *)fn_8265C9E0(0x10);
          if (puStack_28c == (undefined4 *)0x0) {
            puStack_28c = (undefined4 *)0x0;
          }
          else {
            *puStack_28c = 0;
            puStack_28c[1] = 0;
            puStack_28c[2] = 0;
          }
          lVar10 = fn_8251F720(&uStack_290,0);
          uVar8 = fn_8251FBA8();
          puVar14 = (undefined4 *)0x0;
          puStack_29c = (undefined4 *)0x0;
          uVar8 = (uVar8 & 0xffffffff) / 0x6b4;
          uStack_298 = 0;
          puStack_2a0 = (undefined4 *)0x0;
          auStack_2b0[0] = 0;
          if ((int)uVar8 != 0) {
            do {
              fn_8257A9F0(&puStack_2a0,auStack_2b0);
              puVar2 = puStack_29c;
              puVar14 = puStack_2a0;
              auStack_2b0[0] = auStack_2b0[0] + 1;
            } while (auStack_2b0[0] < uVar8);
            if (puStack_2a0 != puStack_29c) {
              uVar18 = 2;
              puVar16 = puStack_2a0;
              while( true ) {
                puVar16 = puVar16 + 1;
                if (puVar16 == puVar2) break;
                uVar15 = 0x7fff;
                uVar6 = fn_82F65350();
                uVar11 = (ulonglong)uVar6 & 0x7fff;
                uVar6 = uVar6 & 0x7fff;
                if (0x7fff < uVar18) {
                  do {
                    if (uVar15 == 0xffffffff) break;
                    uVar7 = fn_82F65350();
                    uVar11 = (uVar11 & 0x1ffff) << 0xf | (ulonglong)uVar7 & 0xffffffff00007fff;
                    uVar6 = uVar6 << 0xf | uVar7 & 0x7fff;
                    uVar15 = uVar15 << 0xf | 0x7fff;
                  } while (uVar15 < uVar18);
                }
                uVar1 = *puVar16;
                iVar5 = uVar6 - (int)(uVar11 / uVar18) * uVar18;
                uVar18 = uVar18 + 1;
                *puVar16 = puVar14[iVar5];
                puVar14[iVar5] = uVar1;
              }
            }
          }
          puStack_284 = (undefined4 *)fn_8265C9E0(0x10);
          if (puStack_284 == (undefined4 *)0x0) {
            puStack_284 = (undefined4 *)0x0;
          }
          else {
            *puStack_284 = 0;
            puStack_284[1] = 0;
            puStack_284[2] = 0;
          }
          fn_82424798(puStack_284,&puStack_2a0);
          if (uVar8 != 0) {
            puVar17 = puVar14 + -1;
            do {
              puVar17 = puVar17 + 1;
              fn_82422F08(param_1,(ulonglong)*puVar17 * 0x6b4 + lVar10,auStack_270);
              fn_82424930(puStack_28c,auStack_270);
              uVar8 = uVar8 - 1;
            } while (uVar8 != 0);
          }
          fn_8251FA58(lVar10);
          fn_823390A0(puVar12,&uStack_290);
          iStack_280 = ((int)(*(int *)(param_1 + 0x30) - *puVar12) >> 4) + -1;
          if (puVar14 != (undefined4 *)0x0) {
            fn_8265CA20(puVar14);
          }
          puStack_2a0 = (undefined4 *)0x0;
          puStack_29c = (undefined4 *)0x0;
          uStack_298 = 0;
        }
        else {
          do {
            iVar5 = fn_825200A8(puVar13);
            if (iVar5 != 0) {
              iStack_280 = (int)lVar10;
              uVar9 = 1;
            }
            uVar8 = uVar8 + 0x10;
            lVar10 = lVar10 + 1;
          } while ((uVar8 & 0xffffffff) != (uVar11 & 0xffffffff));
          if ((int)uVar9 == 0) goto LAB_82424448;
        }
        fn_823390A0(param_1 + 0x1c,&iStack_280);
        uVar3 = uVar3 - 1;
        puVar13 = puVar13 + 4;
      } while (uVar3 != 0);
    }
    fn_8251FA58(iVar4);
  }
  return;
}

