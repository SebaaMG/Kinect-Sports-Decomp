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
extern unsigned int *auStack_a4;
extern int fn_82AA66A8();
extern int fn_82AE4D78();
extern int fn_82AE4E18();
extern int fn_82AE60E8();
extern int fn_82AE7110();
extern int fn_82AE7208();
extern int fn_82B455A8();
extern int fn_82B455D0();
extern int fn_82B455F8();
extern int fn_82B50AA8();
extern int fn_82B50B00();
extern unsigned int iStack0000001c;
extern unsigned int uStack_a8;
extern unsigned int uStack_ac;
extern unsigned int uStack_b0;


void fn_82AE7308(int param_1,int param_2)

{
  int iVar1;
  uint *puVar2;
  bool bVar3;
  bool bVar4;
  longlong lVar5;
  int *piVar6;
  char cVar8;
  int iVar7;
  undefined4 uVar9;
  undefined4 uVar10;
  ulonglong uVar11;
  uint uVar12;
  longlong lVar13;
  ulonglong uVar14;
  uint *puVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  longlong lVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  int iStack0000001c;
  undefined1 uStack_b0;
  char cStack_af;
  uint uStack_ac;
  uint uStack_a8;
  undefined1 auStack_a4 [164];
  
  puVar15 = (uint *)(param_2 * 0x28 + *(int *)(param_1 + 0xc));
  iStack0000001c = param_2;
  lVar5 = fn_82AE60E8(param_1,*(uint *)(param_2 * 0x28 + *(int *)(param_1 + 0xc)) & 0x1fff8,0);
  uVar12 = puVar15[4];
  puVar15[7] = (uint)lVar5;
  if (uVar12 == 0) {
    uVar10 = 0;
    if ((*puVar15 & 7) == 4) {
      uVar9 = *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x38);
    }
    else {
      uVar9 = 0;
    }
  }
  else {
    uVar10 = *(undefined4 *)(uVar12 + 0x40);
    uVar9 = *(undefined4 *)(uVar12 + 0x3c);
  }
  piVar6 = (int *)fn_82AE7110(param_1,puVar15[5],uVar9,uVar10);
  cStack_af = '\0';
  uVar14 = 0;
  bVar4 = false;
  uVar17 = 0;
  do {
    if (piVar6[1] == 0) {
      cVar8 = fn_82B50AA8(piVar6);
      bVar3 = true;
      if (cVar8 != '\0') goto LAB_82ae73d0;
    }
    else {
LAB_82ae73d0:
      bVar3 = false;
    }
    if (bVar3) {
      if (((uVar17 & 0xffffffff) == ((ulonglong)(*puVar15 >> 3) & 0x3fff)) &&
         ((cStack_af == '\0' || (!bVar4)))) {
        *piVar6 = *(int *)(param_1 + 0x3ec);
        *(int **)(param_1 + 0x3ec) = piVar6;
        if (0xff < (uVar14 & 0xffffffff)) {
          uVar14 = 0x100;
        }
        uVar12 = puVar15[1];
        puVar15[1] = (uint)((uVar14 & 0xffffffff) << 0x10) & 0x1ff0000 | uVar12 & 0xfe00ffff;
        if (((uVar12 & 0x70) == 0) && (uVar12 = 0, (*puVar15 & 0x1fff8) != 0)) {
          iVar7 = 0;
          do {
            uVar12 = uVar12 + 1;
            *(uint *)(puVar15[7] + iVar7) = *(uint *)(puVar15[7] + iVar7) & 0xfff3ffff | 0x40000;
            *(uint *)(puVar15[7] + iVar7) = *(uint *)(puVar15[7] + iVar7) & 0xfc0fffff;
            iVar7 = iVar7 + 8;
          } while (uVar12 < (*puVar15 >> 3 & 0x3fff));
        }
        return;
      }
                    /* WARNING: Subroutine does not return */
      fn_82AA66A8(param_1,0x12c1);
    }
    iVar7 = (int)((uVar17 & 0xffffffff) << 3) + (uint)lVar5;
    *(uint *)(iVar7 + 4) = *(uint *)(iVar7 + 4) & 0xfffffffe | *(byte *)(piVar6 + 8) & 1;
    iVar7 = fn_82B50B00(piVar6);
    uStack_b0 = 0;
    uVar21 = uVar14;
    if (iVar7 < 0x1f) {
      if ((iVar7 < 0x1d) && ((iVar7 < 0x18 || ((0x19 < iVar7 && (iVar7 != 0x1b)))))) {
LAB_82ae7460:
        if ((puVar15[1] & 0x70) == 0x30) {
                    /* WARNING: Subroutine does not return */
          fn_82AA66A8(param_1,0xdcd);
        }
      }
      else {
        if ((puVar15[1] & 0x70) != 0x70) {
                    /* WARNING: Subroutine does not return */
          fn_82AA66A8(param_1,0x12c1);
        }
        uVar21 = 0x100;
      }
    }
    else {
      if ((iVar7 != 0x21) && ((iVar7 < 0x22 || (0x25 < iVar7)))) goto LAB_82ae7460;
      if ((puVar15[1] & 0x70) != 0x30) {
                    /* WARNING: Subroutine does not return */
        fn_82AA66A8(param_1,0xdcd);
      }
    }
    if (piVar6[3] == 0) {
      cStack_af = '\x01';
    }
    else if (!bVar4) {
      for (iVar7 = fn_82B455A8(param_1); iVar7 != 0;
          iVar7 = fn_82B455D0(param_1,*(undefined4 *)(iVar7 + 0xc))) {
        iVar1 = *(int *)(iVar7 + 8);
        if (*(int *)(iVar1 + 4) == 0x12) {
          if (*(int *)(*(int *)(iVar1 + 0x14) + 4) != 3) {
                    /* WARNING: Subroutine does not return */
            fn_82AA66A8(param_1,0x12c1);
          }
          cVar8 = fn_82B455F8(param_1,*(undefined4 *)(iVar1 + 0x10),auStack_a4);
          if (cVar8 != '\0') {
            uVar10 = *(undefined4 *)(iVar1 + 0x14);
            fn_82AE4E18(param_1,uVar10,puVar15[1] >> 4 & 7,&uStack_a8,&uStack_ac,&uStack_b0);
            uVar12 = (uStack_ac & 0x1ff) << 0x14;
            *puVar15 = uVar12 | *puVar15 & 0xe00fffff;
            puVar15[1] = (uStack_a8 & 7) << 4 | puVar15[1] & 0xffffff8f;
            if (0xff00000 < uVar12) {
              fn_82AE7208(param_1,param_2,uVar10);
            }
            if ((*puVar15 & 7) != 1) {
                    /* WARNING: Subroutine does not return */
              fn_82AA66A8(param_1,0x12c1);
            }
            bVar4 = true;
            *puVar15 = *puVar15 | 0x80000;
            break;
          }
        }
      }
    }
    iVar7 = *piVar6;
    uVar22 = (ulonglong)(uint)piVar6[1] + 1;
    uVar14 = (ulonglong)*(uint *)(iVar7 + 0x1c);
    uVar19 = (ulonglong)*(uint *)(iVar7 + 0x20);
    if ((1 < uVar14) && (4 < uVar19)) {
                    /* WARNING: Subroutine does not return */
      fn_82AA66A8(param_1,0x12c1);
    }
    uVar11 = 0;
    uVar16 = uVar14;
    if ((((*puVar15 & 7) != 2) && (1 < uVar14)) &&
       (uVar11 = (~(ulonglong)*(uint *)(iVar7 + 0x24) & 0xffffffff) >> 10 & 1, uVar11 != 0)) {
      uVar16 = uVar19;
      uVar19 = uVar14;
    }
    if (4 < uVar19) {
      uVar14 = uVar19 + 3;
      uVar19 = 4;
      uVar16 = (uVar14 & 0xffffffff) >> 2;
    }
    uVar12 = puVar15[1] >> 4 & 7;
    if ((uVar12 == 3) && (((uVar11 != 0 || (1 < uVar16)) || (1 < uVar19)))) {
                    /* WARNING: Subroutine does not return */
      fn_82AA66A8(param_1,0x12c1);
    }
    if (uVar12 == 0) {
      uVar19 = 1;
      uVar16 = uVar22;
    }
    iVar7 = piVar6[2];
    uVar14 = uVar16 + uVar21;
    uVar18 = uVar17;
    if (uVar11 == 0) {
      do {
        uVar21 = uVar22;
        if (uVar19 <= (uVar22 & 0xffffffff)) {
          uVar21 = uVar19;
        }
        uVar22 = uVar22 - uVar21;
        lVar20 = (uVar18 & 0x1fffffff) * 8 + lVar5;
        do {
          fn_82AE4D78(lVar5,uVar18);
          if ((iVar7 != 0) && ((uint)piVar6[5] < 0x10)) {
            *(uint *)lVar20 = (piVar6[5] & 0xfU) << 0x1b | *(uint *)lVar20 & 0x87ffffff | 0x4000000;
          }
          uVar21 = uVar21 - 1;
          uVar18 = uVar18 + 1;
          lVar20 = lVar20 + 8;
        } while (uVar21 != 0);
        piVar6[5] = piVar6[5] + 1;
      } while ((uVar22 & 0xffffffff) != 0);
    }
    else {
      iVar1 = piVar6[5];
      do {
        uVar19 = uVar22;
        if ((uVar16 & 0xffffffff) <= (uVar22 & 0xffffffff)) {
          uVar19 = uVar16;
        }
        uVar22 = uVar22 - uVar19;
        lVar13 = (uVar18 & 0x1fffffff) * 8 + lVar5;
        lVar20 = uVar21 - uVar18;
        do {
          fn_82AE4D78(lVar5,uVar18,lVar20 + uVar18);
          if (iVar7 != 0) {
            if ((uint)piVar6[5] < 0x10) {
              *(uint *)lVar13 =
                   (piVar6[5] & 0xfU) << 0x1b | *(uint *)lVar13 & 0x87ffffff | 0x4000000;
            }
            piVar6[5] = piVar6[5] + 1;
          }
          uVar19 = uVar19 - 1;
          uVar18 = uVar18 + 1;
          lVar13 = lVar13 + 8;
        } while (uVar19 != 0);
        piVar6[5] = iVar1;
      } while ((uVar22 & 0xffffffff) != 0);
      *puVar15 = *puVar15 | 0x40000000;
      piVar6[5] = (int)uVar16 + piVar6[5];
      param_2 = iStack0000001c;
    }
    if ((1 < (uVar16 & 0xffffffff)) && ((uVar17 & 0xffffffff) < (uVar18 & 0xffffffff))) {
      lVar20 = uVar18 - uVar17;
      lVar13 = (uVar17 & 0x1fffffff) * 8 + lVar5 + 4;
      do {
        puVar2 = (uint *)lVar13;
        if ((puVar2[-1] & 0xf) == 1) {
          *puVar2 = *puVar2 | 1;
        }
        lVar13 = lVar13 + 8;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
    }
    piVar6[1] = 0;
    uVar17 = uVar18;
  } while( true );
}

