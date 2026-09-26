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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
#define _iStack00000028 ((*(U64*)&iStack00000028))
extern unsigned int iStack00000018;
extern unsigned int iStack00000028;


void fn_828D5268(ulonglong *param_1,ulonglong param_2,uint param_3,ulonglong param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  int iStack00000018;
  int iStack00000028;
  
  uVar4 = param_2 & 0xffffffff;
  if (uVar4 == param_3) {
    *param_1 = param_4;
  }
  else {
    iStack00000018 = (int)(param_2 >> 0x20);
    iStack00000028 = (int)(param_4 >> 0x20);
    iVar3 = iStack00000028;
    uVar9 = param_4 & 0xffffffff;
    _iStack00000028 = param_4;
    do {
      uVar6 = uVar4;
      if ((ulonglong)*(uint *)(iStack00000018 + 8) <= (uVar4 & 0xffffffff)) {
        uVar6 = uVar4 - *(uint *)(iStack00000018 + 8);
      }
      uVar5 = (ulonglong)*(uint *)(iVar3 + 8);
      uVar7 = uVar9;
      if (uVar5 <= (uVar9 & 0xffffffff)) {
        uVar7 = uVar9 - uVar5;
      }
      iVar8 = 0;
      iVar1 = *(int *)((int)((uVar6 & 0xffffffff) << 2) + *(int *)(iStack00000018 + 4));
      iVar2 = *(int *)((int)((uVar7 & 0xffffffff) << 2) + *(int *)(iVar3 + 4));
      lVar10 = 0x2a;
      *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(iVar1 + 4);
      do {
        *(undefined1 *)(iVar2 + 8 + iVar8) = *(undefined1 *)(iVar1 + 8 + iVar8);
        iVar8 = iVar8 + 1;
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
      uVar4 = uVar4 + 1;
      uVar9 = uVar9 + 1;
      _iStack00000028 = CONCAT44(iStack00000028,(int)uVar9);
    } while ((uVar4 & 0xffffffff) != (ulonglong)param_3);
    *param_1 = _iStack00000028;
  }
  return;
}

