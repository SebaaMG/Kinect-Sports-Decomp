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


ulonglong fn_82C3FB30(ulonglong param_1,int param_2)

{
  short sVar1;
  short sVar2;
  short sVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  int iVar12;
  longlong lVar11;
  short *psVar15;
  ulonglong uVar13;
  int iVar16;
  longlong lVar14;
  
  uVar4 = *(uint *)(param_2 + 0x34);
  uVar6 = (ulonglong)uVar4;
  psVar15 = (short *)(*(short *)(param_2 + 0x72) * 2 + *(int *)(*(int *)(param_2 + 0x1a8) + 8));
  sVar1 = *psVar15;
  sVar2 = psVar15[-1];
  uVar10 = (ulonglong)sVar1;
  uVar13 = (ulonglong)sVar2;
  iVar12 = (int)sVar1;
  iVar16 = (int)sVar2;
  if (iVar12 < iVar16) {
    sVar3 = *(short *)(param_2 + 0x76);
    trapWord(6,uVar10,0);
    iVar12 = 0;
    trapWord(5,uVar10 & ~(((uVar13 & 0x7fffffff) << 1 | (uVar13 & 0xffffffff) >> 0x1f) - 1),0xffff);
    if (0 < sVar3) {
      uVar10 = (ulonglong)(uint)((int)sVar2 / (int)sVar1) & 0x3fffffff;
      lVar9 = uVar6 - 4;
      lVar11 = uVar6 + uVar10 * -4;
      do {
        lVar11 = lVar11 + uVar10 * 4;
        iVar12 = iVar12 + 1;
        lVar9 = lVar9 + 4;
        *(undefined4 *)lVar9 = *(undefined4 *)lVar11;
      } while (iVar12 < *(short *)(param_2 + 0x76));
      return (longlong)sVar3;
    }
    return (longlong)sVar3;
  }
  if (iVar16 < iVar12) {
    sVar1 = *(short *)(param_2 + 0x76);
    iVar12 = iVar12 / iVar16;
    uVar7 = (ulonglong)iVar12;
    trapWord(6,uVar13,0);
    uVar5 = (((longlong)sVar1 & 0x7fffffffU) << 1 | ((longlong)sVar1 & 0xffffffffU) >> 0x1f) - 1;
    trapWord(6,uVar7,0);
    uVar8 = (longlong)((int)sVar1 / iVar12) - 1;
    trapWord(5,uVar13 & ~(((uVar10 & 0x7fffffff) << 1 | (uVar10 & 0xffffffff) >> 0x1f) - 1),0xffff);
    trapWord(5,uVar7 & ~uVar5,0xffff);
    if (-1 < (longlong)uVar8) {
      lVar9 = (longlong)(int)uVar8 * (longlong)iVar12;
      lVar11 = (uVar8 & 0x3fffffff) * 4 + uVar6;
      do {
        lVar14 = 0;
        uVar6 = uVar7;
        if (0 < iVar12) {
          do {
            uVar10 = lVar9 + lVar14;
            uVar5 = (ulonglong)*(uint *)lVar11;
            lVar14 = lVar14 + 1;
            *(uint *)((int)((uVar10 & 0xffffffff) << 2) + uVar4) = *(uint *)lVar11;
            uVar6 = uVar6 - 1;
          } while (uVar6 != 0);
        }
        uVar8 = uVar8 - 1;
        lVar11 = lVar11 + -4;
        lVar9 = lVar9 - uVar7;
      } while (-1 < (longlong)uVar8);
      return uVar5;
    }
    return uVar5;
  }
  return param_1;
}

