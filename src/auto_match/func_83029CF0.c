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
extern int fn_82F65350();


longlong fn_83029CF0(int param_1)

{
  ushort uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  uint uVar8;
  longlong lVar9;
  
  pcVar7 = *(char **)(param_1 + 0xc);
  uVar5 = (uint)*(ushort *)(param_1 + 0x16);
  lVar9 = 1;
  uVar8 = 0;
  pcVar6 = pcVar7;
  if (uVar5 != 0) {
    do {
      if ((lVar9 == 0) || (lVar9 = 1, *pcVar6 == '\0')) {
        lVar9 = 0;
      }
      uVar8 = uVar8 + 1;
      pcVar6 = pcVar6 + 1;
    } while (uVar8 < uVar5);
  }
  if (((lVar9 != 0) && (pcVar7 != (char *)0x0)) && (uVar8 = 0, uVar5 != 0)) {
    pcVar7 = pcVar7 + -1;
    do {
      uVar8 = uVar8 + 1;
      pcVar7 = pcVar7 + 1;
      *pcVar7 = '\0';
    } while (uVar8 < *(ushort *)(param_1 + 0x16));
  }
  uVar3 = fn_82F65350();
  uVar1 = *(ushort *)(param_1 + 0x16);
  uVar4 = uVar3 - (longlong)((int)uVar3 / (int)(uint)uVar1) * (longlong)(int)(uint)uVar1;
  uVar2 = uVar4 & 0xffff;
  trapWord(6,(ulonglong)uVar1,0);
  *(short *)(param_1 + 0x14) = (short)uVar4;
  trapWord(5,(ulonglong)uVar1 & ~(((uVar3 & 0x7fffffff) << 1 | (uVar3 & 0xffffffff) >> 0x1f) - 1),
           0xffff);
  if ((*(uint *)(param_1 + 0x1c) & 2) != 0) {
    *(int *)(param_1 + 0x10) = (int)(uVar2 << 4) + *(int *)(param_1 + 8);
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined1 *)((int)uVar2 + *(int *)(param_1 + 0xc)) = 1;
  }
  return lVar9;
}

