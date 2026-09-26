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
extern unsigned int *auStack_140;
extern unsigned int *auStack_220;
extern unsigned int *auStack_228;
extern unsigned int *auStack_22c;
extern int fn_827F1BE8();
extern int fn_827F1C50();
extern int fn_827F1CB0();
extern int fn_827F1E58();
extern int fn_827F1FC8();
extern int fn_827F3C30();
extern int fn_827F3C48();
extern unsigned int iStack_148;
extern unsigned int iStack_68;
extern unsigned int uStack_22e;
extern unsigned int uStack_230;
extern unsigned int uStack_234;
extern unsigned int uStack_236;
extern unsigned int uStack_238;
extern unsigned int uStack_23c;
extern unsigned int uStack_23e;
extern unsigned int uStack_240;


void fn_827F1250(longlong param_1,uint param_2,int param_3,int param_4,ushort *param_5,
                  ushort *param_6)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  ushort *puVar5;
  ulonglong uVar6;
  int iVar7;
  undefined2 *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  ushort *puVar11;
  ushort uVar12;
  uint uVar13;
  ushort uVar14;
  ushort uVar15;
  uint uVar16;
  ushort uStack_240;
  ushort uStack_23e;
  undefined4 uStack_23c;
  undefined2 uStack_238;
  undefined2 uStack_236;
  undefined2 uStack_234;
  short sStack_232;
  ushort uStack_230;
  ushort uStack_22e;
  undefined1 auStack_22c [4];
  undefined1 auStack_228 [8];
  undefined1 auStack_220 [208];
  ushort *puStack_150;
  ushort *puStack_14c;
  int iStack_148;
  undefined1 auStack_140 [208];
  ushort *puStack_70;
  ushort *puStack_6c;
  int iStack_68;
  
  *param_5 = 0;
  *param_6 = 0;
  if ((*(ushort *)((param_2 >> 3 & 0x1ffe) + param_3) >> (param_2 & 0xf) & 1) != 0) {
    fn_827F1BE8(auStack_220);
    iStack_148 = 0;
    fn_827F1BE8(auStack_140);
    uStack_240 = (ushort)param_2;
    iStack_148 = iStack_148 + 1;
    iStack_68 = 0;
    uStack_23e = 0;
    fn_827F1E58(auStack_220,puStack_14c,&uStack_240);
    if (puStack_150 != puStack_14c) {
      do {
        iStack_148 = iStack_148 + -1;
        fn_827F1C50(&uStack_240,auStack_220,*(undefined4 *)(puStack_14c + 2));
        uVar14 = uStack_23e;
        uVar13 = (uint)uStack_23e;
        uVar16 = (uint)uStack_240;
        uStack_230 = uStack_23e;
        uStack_22e = uStack_240;
        fn_827F1FC8(auStack_22c,auStack_140,&uStack_230);
        iVar2 = (uVar16 + 0x28) * 4;
        iVar3 = (int)param_1;
        uVar6 = fn_827F3C30(*(undefined4 *)(iVar2 + iVar3));
        uVar6 = uVar6 & 0xffff;
joined_r0x827f133c:
        uVar6 = uVar6 - 1;
        if (-1 < (longlong)uVar6) {
          iVar7 = fn_827F3C48(*(undefined4 *)(iVar2 + iVar3),uVar6 & 0xffff);
          uVar10 = (ulonglong)*(ushort *)(iVar3 + 0xe8) - 1;
          if (-1 < (longlong)uVar10) {
            lVar9 = ((ulonglong)*(ushort *)(iVar3 + 0xe8) + 0x27) * 4 + param_1;
            do {
              if (*(int *)lVar9 == iVar7) {
                uVar10 = uVar10 & 0xffff;
                goto LAB_827f1380;
              }
              uVar10 = uVar10 - 1;
              lVar9 = lVar9 + -4;
            } while (-1 < (longlong)uVar10);
          }
          uVar10 = 0xffffffffffffffff;
LAB_827f1380:
          uVar4 = uVar10 & 0xffff;
          if ((uVar4 != 0xffff) &&
             ((*(ushort *)(((uint)uVar4 >> 3 & 0x1ffffffe) + param_3) >> ((uint)uVar4 & 0xf) & 1) !=
              0)) {
            puVar11 = puStack_150;
            puVar5 = puStack_70;
            if (puStack_150 != puStack_14c) {
              do {
                if (*puVar11 == uVar4) break;
                puVar11 = *(ushort **)(puVar11 + 4);
              } while (puVar11 != puStack_14c);
              if (puVar11 != puStack_14c) {
                uVar16 = uVar13 + 1;
                if (uVar16 < puVar11[1]) {
                  uVar16 = (uint)puVar11[1];
                }
                puVar11[1] = (ushort)uVar16;
                goto joined_r0x827f133c;
              }
            }
            for (; (puVar5 != puStack_6c && (puVar5[1] != uVar4)); puVar5 = *(ushort **)(puVar5 + 4)
                ) {
            }
            uStack_23c = puVar5;
            if (puVar5 == puStack_6c) {
              sStack_232 = uVar14 + 1;
              puVar8 = &uStack_234;
              uStack_234 = (short)uVar10;
            }
            else {
              uVar16 = uVar13 + 1;
              if (uVar16 <= *puVar5) goto joined_r0x827f133c;
              fn_827F1CB0(auStack_228,auStack_140,&uStack_23c);
              puVar8 = &uStack_238;
              uStack_236 = (undefined2)uVar16;
              uStack_238 = (short)uVar10;
            }
            iStack_148 = iStack_148 + 1;
            fn_827F1E58(auStack_220,puStack_14c,puVar8);
          }
          goto joined_r0x827f133c;
        }
      } while (puStack_150 != puStack_14c);
    }
    uVar14 = 0xffff;
    uVar15 = 0;
    if (puStack_70 != puStack_6c) {
      do {
        uVar1 = *puStack_70;
        iStack_68 = iStack_68 + -1;
        fn_827F1C50(&uStack_23c,auStack_140);
        if (uVar1 != uVar14) {
          uVar15 = 0;
          uVar14 = uVar1;
        }
        uVar15 = uVar15 + 1;
        uVar12 = *param_6;
        if (*param_6 < uVar15) {
          uVar12 = uVar15;
        }
        *param_6 = uVar12;
        uVar13 = (((U64)(uStack_23c) >> 16) & 0xFFFF) >> 3 & 0x1ffffffe;
        *(ushort *)(uVar13 + param_3) =
             *(ushort *)(uVar13 + param_3) & ~(ushort)(1 << ((uint)uStack_23c & 0xf));
        *(ushort *)((uint)*param_5 * 4 + param_4) = (((U64)(uStack_23c) >> 16) & 0xFFFF);
        *(ushort *)((uint)*param_5 * 4 + param_4 + 2) = uVar1;
        *param_5 = *param_5 + 1;
      } while (puStack_70 != puStack_6c);
    }
    for (; puStack_70 != puStack_6c; puStack_70 = *(ushort **)(puStack_70 + 4)) {
    }
    for (; puStack_150 != puStack_14c; puStack_150 = *(ushort **)(puStack_150 + 4)) {
    }
  }
  return;
}

