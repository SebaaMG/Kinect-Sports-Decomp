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
extern unsigned int *auStack_40;
extern int fn_82E76D10();
extern int fn_82E78690();


undefined8 fn_82E79760(int param_1,ulonglong param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  undefined1 uVar7;
  ulonglong uVar8;
  uint uVar9;
  uint auStack_40 [16];
  
  if (((ulonglong)*(uint *)(param_1 + 0x1e0) <= (param_2 & 0xffffffff)) ||
     ((ulonglong)*(ushort *)(param_1 + 0x146) <= (param_2 & 0xffffffff))) {
    return 0xffffffff80070057;
  }
  iVar6 = param_1 + 0x178;
  lVar1 = fn_82E78690(iVar6,param_2,auStack_40);
  uVar9 = -(uint)(lVar1 != 0) & auStack_40[0];
  if (uVar9 != 0) {
    iVar3 = *(int *)(uVar9 + 300);
    iVar2 = 0;
    if ((iVar3 == 0) || (*(char *)(uVar9 + 0x130) == '\0')) {
      iVar2 = fn_82E76D10(param_1);
      iVar2 = iVar2 + (uint)*(ushort *)(uVar9 + 0x1f);
      if (*(int *)(param_1 + 0x154) != 0) {
        iVar2 = (uint)*(byte *)(param_1 + 0x171) + iVar2;
      }
    }
    if (iVar3 != 0) {
      iVar2 = iVar2 + 1;
    }
    *(int *)(uVar9 + 0x17) = *(int *)(uVar9 + 0x1b) + iVar2;
    if (iVar3 == 0) {
      return 0;
    }
    if ((param_2 & 0xffffffff) < (ulonglong)*(byte *)(uVar9 + 0x130)) {
      return 0xffffffff80070057;
    }
    uVar8 = param_2 - *(byte *)(uVar9 + 0x130);
    lVar1 = fn_82E78690(iVar6,uVar8,auStack_40);
    uVar5 = -(uint)(lVar1 != 0) & auStack_40[0];
    if (uVar5 != 0) {
      uVar4 = (ulonglong)*(byte *)(uVar9 + 0x130);
      uVar7 = *(undefined1 *)(uVar5 + 0x13c);
      if (1 < uVar4 + 1) {
        trapWord(6,uVar4,0);
        uVar7 = (undefined1)
                (((ulonglong)*(uint *)(uVar9 + 0xf) - (ulonglong)*(uint *)(uVar5 + 0xf) & 0xffffffff
                 ) / uVar4);
      }
      iVar3 = *(int *)(uVar5 + 0x134);
      iVar2 = *(int *)(uVar9 + 0x17);
      while( true ) {
        if ((param_2 & 0xffffffff) < (uVar8 & 0xffffffff)) {
          return 0;
        }
        lVar1 = fn_82E78690(iVar6,uVar8,auStack_40);
        uVar9 = -(uint)(lVar1 != 0) & auStack_40[0];
        if (uVar9 == 0) break;
        uVar8 = uVar8 + 1;
        *(int *)(uVar9 + 0x134) = iVar3 + iVar2;
        *(undefined1 *)(uVar9 + 0x13c) = uVar7;
      }
    }
  }
  return 0xffffffff8000ffff;
}

