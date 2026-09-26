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
extern int fn_82C4E3B0();
extern int fn_830C13A0();
extern int fn_830D8C00();
extern int fn_830D8DB8();


ulonglong fn_830D8E88(int *param_1,undefined4 *param_2,longlong param_3,ushort *param_4)

{
  ushort uVar1;
  ushort uVar2;
  short sVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ulonglong *puVar8;
  int iVar9;
  ushort *puVar11;
  ushort *puVar12;
  int iVar13;
  ulonglong uVar10;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong lVar18;
  ulonglong uVar19;
  
  uVar19 = 0;
  iVar5 = param_2[2];
  iVar6 = param_2[1];
  iVar7 = param_2[9];
  puVar8 = (ulonglong *)*param_1;
  iVar9 = *(int *)*param_2;
  lVar14 = (longlong)*(int *)(puVar8 + 1);
  uVar15 = *puVar8;
  puVar12 = param_4;
  do {
    do {
      puVar11 = puVar12;
      sVar3 = *(short *)(iVar9 + (int)((uVar15 >> 0x36) << 1));
      uVar17 = (ulonglong)sVar3;
      if (sVar3 < 0) {
        *puVar8 = uVar15;
        *(int *)(puVar8 + 1) = (int)lVar14;
        uVar10 = fn_830D8C00(puVar8,puVar8,iVar9,uVar17);
        uVar16 = *puVar8;
        lVar14 = (longlong)*(int *)(puVar8 + 1);
      }
      else {
        uVar16 = uVar15 << (uVar17 & 0xf);
        uVar10 = (uVar17 & 0xffffffff) >> 4;
        lVar14 = lVar14 - (uVar17 & 0xf);
        if (lVar14 < 0) {
          do {
            puVar12 = *(ushort **)((int)puVar8 + 0xc);
            if (4 < *(int *)(puVar8 + 2) - (int)puVar12) {
              uVar4 = *puVar12;
              uVar1 = puVar12[1];
              uVar2 = puVar12[2];
              *(ushort **)((int)puVar8 + 0xc) = puVar12 + 3;
              uVar15 = -lVar14;
              lVar14 = lVar14 + 0x30;
              uVar16 = uVar16 + (((ulonglong)uVar4 << 0x20) + (ulonglong)uVar1 * 0x10000 +
                                 (ulonglong)uVar2 << (uVar15 & 0x7f));
              break;
            }
            *puVar8 = uVar16;
            *(int *)(puVar8 + 1) = (int)lVar14;
            iVar13 = fn_82C4E3B0(puVar8);
            lVar14 = (longlong)*(int *)(puVar8 + 1);
            uVar16 = *puVar8;
          } while (iVar13 == 1);
        }
      }
      lVar14 = lVar14 + -1;
      uVar15 = uVar16 << 1;
      if (lVar14 < 0) {
        *puVar8 = uVar15;
        *(int *)(puVar8 + 1) = (int)lVar14;
        fn_830D8DB8(puVar8);
        lVar14 = (longlong)*(int *)(puVar8 + 1);
        uVar15 = *puVar8;
      }
      iVar13 = (int)uVar10;
      uVar4 = *(ushort *)(iVar7 + (int)(uVar10 << 1));
      *puVar11 = uVar4 | (ushort)((uVar16 >> 0x3f) << 7);
      puVar12 = puVar11 + 1;
      lVar18 = ((ulonglong)uVar4 & 0x7f) + 1;
      param_3 = param_3 - lVar18;
    } while (iVar13 < iVar5 + 1 && (iVar13 != iVar6 && -1 < param_3));
    *puVar8 = uVar15;
    *(int *)(puVar8 + 1) = (int)lVar14;
    if ((int)param_3 < 0) {
      return 0xffffffffffffffff;
    }
    if (iVar13 != iVar6) break;
    uVar17 = fn_830C13A0(param_1,param_2,uVar16 >> 0x3f);
    if ((longlong)uVar17 < 0) {
      return 0xffffffffffffffff;
    }
    uVar15 = (uVar17 & 0xffffffff) >> 0x1c;
    param_3 = param_3 + (lVar18 - ((uVar17 & 0x7f) + 1));
    if ((int)uVar15 == 0) {
      *puVar11 = (ushort)uVar17;
    }
    else {
      uVar19 = 0x80;
      *puVar11 = (ushort)uVar17 | 0x40;
      *puVar12 = (ushort)uVar15;
      puVar12 = puVar11 + 2;
    }
    uVar15 = *puVar8;
    lVar14 = (longlong)*(int *)(puVar8 + 1);
  } while ((int)((ushort)(uVar17 >> 0x10) & 0xfff) < iVar5 + 1);
  return (uint)((int)puVar12 - (int)param_4) >> 1 | uVar19;
}

