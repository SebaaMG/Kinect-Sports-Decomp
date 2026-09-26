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


void fn_827CCE10(int param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  undefined1 *puVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  undefined1 *puVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  
  iVar2 = *(int *)(param_1 + 0x1a8);
  bVar1 = *(int *)(param_1 + 0x4c) != 1;
  if (bVar1) {
    iVar17 = 0;
  }
  else {
    iVar17 = 0x1fe;
  }
  *(bool *)(iVar2 + 0x1c) = !bVar1;
  uVar6 = (**(code **)(*(int *)(param_1 + 4) + 8))
                    (param_1,1,iVar17 + 0x100,*(undefined4 *)(param_1 + 100));
  *(undefined4 *)(iVar2 + 0x18) = uVar6;
  iVar16 = 0;
  uVar18 = *(uint *)(iVar2 + 0x14);
  if (0 < *(int *)(param_1 + 100)) {
    iVar7 = 0;
    do {
      uVar5 = uVar18 >> 0x1f;
      uVar8 = (ulonglong)uVar18;
      uVar3 = *(uint *)(iVar2 + 0x20 + iVar7);
      uVar14 = (ulonglong)uVar3;
      uVar18 = (int)uVar18 / (int)uVar3;
      trapWord(6,uVar14,0);
      trapWord(5,uVar14 & ~(((uVar8 & 0x7fffffff) << 1 | (ulonglong)uVar5) - 1),0xffff);
      if (iVar17 != 0) {
        *(int *)(*(int *)(iVar2 + 0x18) + iVar7) = *(int *)(*(int *)(iVar2 + 0x18) + iVar7) + 0xff;
      }
      lVar11 = 0;
      uVar8 = uVar14 + 0xfe;
      uVar15 = (uVar14 - 1 & 0x7fffffff) << 1;
      puVar4 = *(undefined1 **)(*(int *)(iVar2 + 0x18) + iVar7);
      iVar9 = (int)uVar8 / (int)uVar15;
      trapWord(6,uVar15,0);
      iVar12 = 0;
      trapWord(5,uVar15 & ~(((uVar8 & 0x7fffffff) << 1 | (uVar8 & 0xffffffff) >> 0x1f) - 1),0xffff);
      do {
        if (iVar9 < iVar12) {
          lVar10 = lVar11 * 0x1fe;
          do {
            lVar10 = lVar10 + 0x1fe;
            lVar11 = lVar11 + 1;
            trapWord(6,uVar15,0);
            uVar8 = lVar10 + (uVar14 - 1) + 0xff;
            iVar9 = (int)uVar8 / (int)uVar15;
            trapWord(5,uVar15 & ~(((uVar8 & 0x7fffffff) << 1 | (uVar8 & 0xffffffff) >> 0x1f) - 1),
                     0xffff);
          } while (iVar9 < iVar12);
        }
        puVar4[iVar12] = (char)lVar11 * (char)uVar18;
        iVar12 = iVar12 + 1;
      } while (iVar12 < 0x100);
      if (iVar17 != 0) {
        iVar9 = 1;
        lVar11 = 0xff;
        puVar13 = puVar4;
        do {
          puVar13 = puVar13 + -1;
          *puVar13 = *puVar4;
          (puVar4 + 0xff)[iVar9] = puVar4[0xff];
          iVar9 = iVar9 + 1;
          lVar11 = lVar11 + -1;
        } while (lVar11 != 0);
      }
      iVar16 = iVar16 + 1;
      iVar7 = iVar7 + 4;
    } while (iVar16 < *(int *)(param_1 + 100));
  }
  return;
}

