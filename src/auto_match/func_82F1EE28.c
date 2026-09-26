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
extern int fn_82F1CFB0();
extern unsigned int uStack_374;


ulonglong fn_82F1EE28(int param_1)

{
  short *psVar1;
  short *psVar2;
  short *psVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int in_r7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  short *psVar11;
  int iVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  longlong lVar17;
  longlong lVar18;
  undefined4 in_stack_00000064;
  undefined4 uStack_374;
  short asStack_370 [440];
  
  uStack_374 = in_stack_00000064;
  lVar17 = 0;
  fn_82F1CFB0(param_1);
  iVar12 = 0;
  lVar8 = 0;
  lVar9 = 0;
  lVar18 = 0x40;
  lVar10 = 0;
  psVar11 = (short *)((int)&uStack_374 + 2);
  do {
    psVar1 = psVar11 + 1;
    psVar2 = psVar11 + 2;
    psVar3 = psVar11 + 3;
    psVar11 = psVar11 + 4;
    uVar15 = ((longlong)*psVar1 - (ulonglong)*(byte *)(iVar12 + in_r7)) + 0x80;
    uVar7 = ((longlong)*psVar2 - (ulonglong)*(byte *)(in_r7 + 1 + iVar12)) + 0x80;
    uVar5 = ((longlong)*psVar3 - (ulonglong)*(byte *)(in_r7 + 2 + iVar12)) + 0x80;
    uVar4 = (ulonglong)((int)uVar15 >> 0x1f);
    uVar6 = ((longlong)*psVar11 - (ulonglong)*(byte *)(in_r7 + 3 + iVar12)) + 0x80;
    uVar16 = (ulonglong)((int)uVar7 >> 0x1f);
    uVar14 = (ulonglong)((int)uVar5 >> 0x1f);
    uVar13 = (ulonglong)((int)uVar6 >> 0x1f);
    lVar17 = ((uVar15 ^ uVar4) - uVar4) + lVar17;
    lVar10 = ((uVar7 ^ uVar16) - uVar16) + lVar10;
    lVar9 = ((uVar5 ^ uVar14) - uVar14) + lVar9;
    lVar8 = ((uVar6 ^ uVar13) - uVar13) + lVar8;
    iVar12 = iVar12 + 4;
    lVar18 = lVar18 + -1;
  } while (lVar18 != 0);
  uVar4 = ((ulonglong)*(uint *)(param_1 + 0x588) & 0x1ffffff) << 7;
  uVar5 = lVar8 + lVar9 + lVar10 + lVar17;
  return ((~(uVar4 ^ uVar5) & 0xffffffff) >> 0x1f) + (ulonglong)(uVar4 <= uVar5) & 1;
}

