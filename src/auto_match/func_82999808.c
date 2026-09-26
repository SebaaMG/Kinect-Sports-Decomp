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
extern int fn_82975B00();
extern int fn_82996970();
extern unsigned int lbl_8315BE90;
extern unsigned int lbl_8315BEA0;


undefined8 fn_82999808(undefined8 param_1)

{
  int *piVar1;
  int iVar2;
  int iVar4;
  int *piVar5;
  undefined8 uVar3;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  longlong lVar10;
  uint *puVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  int iVar14;
  int iVar15;
  
  iVar15 = *(int *)((int)param_1 + 0xc);
  uVar8 = 0;
  if (iVar15 == 0) {
LAB_82999970:
    uVar7 = 0;
    if (iVar15 != 0) {
      iVar15 = (int)param_1;
      piVar5 = *(int **)(iVar15 + 0x18);
      do {
        *(uint *)(iVar15 + 0x100) = uVar7;
        piVar1 = (int *)*piVar5;
        *(int **)(iVar15 + 0x104) = piVar1;
        if (((piVar1 != (int *)0x0) && (*piVar1 != 0)) && (uVar9 = 0, piVar1[1] != 0)) {
          iVar14 = 0;
          do {
            iVar4 = *(int *)(*(int *)(piVar1[2] + iVar14) * 4 + *(int *)(iVar15 + 0x14));
            if ((*(int *)(iVar4 + 4) == *(int *)(iVar15 + 0x80)) &&
               (*(char *)(iVar4 + 0x6f) == '\x05')) {
              fn_82975B00(param_1,piVar1[0xf],0x11a0,0xffffffff82050e84);
              goto LAB_82999a84;
            }
            uVar9 = uVar9 + 1;
            iVar14 = iVar14 + 4;
          } while (uVar9 < *(uint *)(*(int *)(iVar15 + 0x104) + 4));
        }
        uVar7 = uVar7 + 1;
        piVar5 = piVar5 + 1;
      } while (uVar7 < *(uint *)(iVar15 + 0xc));
    }
    uVar3 = 0;
  }
  else {
    iVar14 = *(int *)((int)param_1 + 0x18);
    lVar10 = 0;
    uVar6 = 0x11000000;
LAB_82999838:
    iVar4 = (int)param_1;
    *(int *)(iVar4 + 0x100) = (int)uVar8;
    puVar11 = *(uint **)((int)lVar10 + iVar14);
    *(uint **)(iVar4 + 0x104) = puVar11;
    if ((puVar11 == (uint *)0x0) || (uVar7 = *puVar11, uVar7 == 0)) {
LAB_8299995c:
      uVar8 = uVar8 + 1;
      lVar10 = lVar10 + 4;
      if ((ulonglong)*(uint *)((int)param_1 + 0xc) <= (uVar8 & 0xffffffff)) goto LAB_82999970;
      goto LAB_82999838;
    }
    uVar13 = (ulonglong)uVar7 & 0xfff00000;
    uVar12 = (ulonglong)uVar7 & 0xfffff;
    if (0x60c00000 < uVar13) {
      if (uVar13 == 0x60d00000) {
        iVar15 = 2;
      }
      else {
        if (uVar13 == 0x61100000) {
          iVar15 = 3;
          goto LAB_829998b8;
        }
        if (uVar13 != 0x61200000) goto LAB_829998e4;
        iVar15 = 3;
      }
      goto LAB_82999a48;
    }
    if (uVar13 == 0x60c00000) {
      iVar15 = 2;
LAB_829998b8:
      iVar14 = 1;
    }
    else {
      if (uVar13 == 0x60200000) {
        iVar15 = 0;
        goto LAB_829998b8;
      }
      if (uVar13 != 0x60300000) {
        if (uVar13 == 0x60700000) {
          if (*(short *)(iVar4 + 0xca) != 0x104) {
            iVar15 = 1;
            goto LAB_829998b8;
          }
        }
        else if (uVar13 == 0x60800000) {
          iVar15 = 1;
          goto LAB_82999a48;
        }
LAB_829998e4:
        iVar4 = fn_82996970(uVar13);
        if ((iVar4 == 0) && ((uVar13 & 0xffffffff) != (uVar6 & 0xffffffff))) goto LAB_8299995c;
        iVar2 = (int)param_1;
        iVar4 = *(int *)(*(int *)(puVar11[2] +
                                 (int)((-(ulonglong)(uVar6 != uVar13) & uVar12 & 0xffffffff) << 2))
                         * 4 + *(int *)(iVar2 + 0x14));
        if (*(int *)(iVar4 + 0x3c) != 0) {
          if (((*(uint *)(iVar2 + 200) & 0xffff) != 0x104) &&
             ((*(uint *)(*(int *)(*(int *)(iVar4 + 4) * 4 + *(int *)(iVar2 + 0x10)) + 4) & 0x10) !=
              0)) {
            fn_82975B00(param_1,puVar11[0xf],0x11b4,0xffffffff82050ec4,
                          *(uint *)(iVar2 + 200) & 0xff);
            goto LAB_82999a84;
          }
        }
        goto LAB_8299995c;
      }
      iVar15 = 0;
LAB_82999a48:
      iVar14 = 0;
    }
    fn_82975B00(param_1,puVar11[0xf],0x11b4,0xffffffff82050ef4,(&lbl_8315BE90)[iVar15],
                  (&lbl_8315BEA0)[iVar14],*(undefined1 *)(iVar4 + 0xcb));
LAB_82999a84:
    uVar3 = 0xffffffff80004005;
  }
  return uVar3;
}

