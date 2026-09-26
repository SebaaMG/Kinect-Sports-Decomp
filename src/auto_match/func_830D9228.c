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


undefined8 fn_830D9228(int *param_1,undefined4 *param_2,int param_3,int param_4)

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
  ushort *puVar10;
  int iVar12;
  ulonglong uVar11;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  int iVar17;
  longlong lVar18;
  longlong lVar19;
  
  lVar18 = 1;
  iVar5 = param_2[2];
  iVar6 = param_2[1];
  iVar7 = param_2[9];
  puVar8 = (ulonglong *)*param_1;
  iVar9 = *(int *)*param_2;
  lVar13 = (longlong)*(int *)(puVar8 + 1);
  uVar14 = *puVar8;
  do {
    sVar3 = *(short *)(iVar9 + (int)((uVar14 >> 0x36) << 1));
    uVar16 = (ulonglong)sVar3;
    if (sVar3 < 0) {
      *puVar8 = uVar14;
      *(int *)(puVar8 + 1) = (int)lVar13;
      uVar11 = fn_830D8C00(puVar8,puVar8,iVar9,uVar16);
      uVar15 = *puVar8;
      lVar13 = (longlong)*(int *)(puVar8 + 1);
    }
    else {
      uVar15 = uVar14 << (uVar16 & 0xf);
      uVar11 = (uVar16 & 0xffffffff) >> 4;
      lVar13 = lVar13 - (uVar16 & 0xf);
      if (lVar13 < 0) {
        do {
          puVar10 = *(ushort **)((int)puVar8 + 0xc);
          if (4 < *(int *)(puVar8 + 2) - (int)puVar10) {
            uVar4 = *puVar10;
            uVar1 = puVar10[1];
            uVar2 = puVar10[2];
            *(ushort **)((int)puVar8 + 0xc) = puVar10 + 3;
            uVar14 = -lVar13;
            lVar13 = lVar13 + 0x30;
            uVar15 = uVar15 + (((ulonglong)uVar4 << 0x20) + (ulonglong)uVar1 * 0x10000 +
                               (ulonglong)uVar2 << (uVar14 & 0x7f));
            break;
          }
          *puVar8 = uVar15;
          *(int *)(puVar8 + 1) = (int)lVar13;
          iVar12 = fn_82C4E3B0(puVar8);
          lVar13 = (longlong)*(int *)(puVar8 + 1);
          uVar15 = *puVar8;
        } while (iVar12 == 1);
      }
    }
    lVar13 = lVar13 + -1;
    uVar14 = uVar15 << 1;
    if (lVar13 < 0) {
      *puVar8 = uVar14;
      *(int *)(puVar8 + 1) = (int)lVar13;
      fn_830D8DB8(puVar8);
      lVar13 = (longlong)*(int *)(puVar8 + 1);
      uVar14 = *puVar8;
    }
    iVar17 = (int)uVar11;
    uVar4 = *(ushort *)(iVar7 + (int)(uVar11 << 1));
    uVar16 = (ulonglong)uVar4 & 0x7f;
    uVar1 = (ushort)((longlong)uVar15 >> 0x3f);
    lVar19 = lVar18 + uVar16;
    lVar18 = lVar19 + 1;
    iVar12 = (uint)*(byte *)((int)lVar19 + param_4) * 2;
    *(ushort *)(param_3 + iVar12) = (uVar4 >> 8 ^ uVar1) - uVar1;
    if (iVar5 + 1 <= iVar17 || (iVar17 == iVar6 || 0x40 < (int)lVar18)) {
      *puVar8 = uVar14;
      *(int *)(puVar8 + 1) = (int)lVar13;
      if (0x40 < (int)lVar18) {
        return 0xffffffffffffffff;
      }
      if (iVar17 != iVar6) {
        return 0;
      }
      *(undefined2 *)(param_3 + iVar12) = 0;
      uVar14 = fn_830C13A0(param_1,param_2,-((longlong)uVar15 >> 0x3f));
      if ((longlong)uVar14 < 0) {
        return 0xffffffffffffffff;
      }
      uVar1 = (ushort)(uVar14 >> 0x10);
      uVar4 = (ushort)((uVar14 & 0xffffffff) >> 7) & 1;
      lVar13 = (lVar18 - uVar16) + -1 + (uVar14 & 0x3f);
      lVar18 = lVar13 + 1;
      *(ushort *)(param_3 + (uint)*(byte *)((int)lVar13 + param_4) * 2) =
           (((ushort)(uVar14 >> 8) & 0xff) + (uVar1 >> 4 & 0xf00) ^ -uVar4) + uVar4;
      lVar13 = (longlong)*(int *)(puVar8 + 1);
      uVar14 = *puVar8;
      if (iVar5 + 1 <= (int)(uVar1 & 0xfff)) {
        return 0;
      }
    }
  } while( true );
}

