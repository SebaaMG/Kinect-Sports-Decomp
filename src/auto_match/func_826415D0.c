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
extern int fn_82645110();


ulonglong fn_826415D0(int param_1,ulonglong param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  iVar2 = *(int *)(param_1 + 0x3244);
  uVar7 = 0;
  if (iVar2 != 0) {
    uVar7 = *(uint *)(*(int *)(iVar2 + 0x40) + iVar2 + 0x30) >> 0x1b & 1;
  }
  uVar3 = *(uint *)(param_1 + 0x2934);
  uVar5 = uVar3 >> 1;
  uVar4 = *(uint *)(param_1 + 0x2940);
  uVar9 = *(uint *)(param_1 + 0x2efc) >> 0x14;
  uVar8 = uVar4 & 0xfffffffe | *(byte *)(param_1 + 0x2abe) >> 5 & uVar5 & 1;
  *(uint *)(param_1 + 0x2940) = uVar8;
  if ((uVar9 & 2) == 0) {
    uVar9 = uVar9 & 1;
  }
  else {
    uVar6 = uVar3 >> 4 & 7;
    if ((uVar4 & 0x10) == 0) {
      if (uVar6 == 1) goto code_r0x8264167c;
      bVar1 = uVar6 == 3;
code_r0x8264166c:
      if ((bVar1) || (uVar9 = 0, uVar6 == 2)) goto code_r0x8264167c;
    }
    else {
      if (uVar6 != 4) {
        bVar1 = uVar6 == 6;
        goto code_r0x8264166c;
      }
code_r0x8264167c:
      uVar9 = 1;
    }
    uVar9 = uVar8 & ~uVar7 & uVar5 & uVar9;
    if ((uVar3 & 1) != 0) {
      uVar9 = uVar9 & ((uVar3 & 0x3800) == 0 && (uVar3 & 0xe0000) == 0);
      if ((uVar3 & 0x80) != 0) {
        uVar9 = uVar9 & ((uVar3 & 0xe0000000) == 0 && (uVar3 & 0x3800000) == 0);
      }
    }
  }
  uVar7 = *(uint *)(param_1 + 0x2940);
  *(uint *)(param_1 + 0x2940) = uVar9 << 1 | uVar7 & 0xfffffffd;
  if (uVar9 != 0) {
    if (((*(byte *)(param_1 + 0x2abd) & 4) != 0) &&
       ((*(int *)(param_1 + 0x3590) == 0 || (*(int *)(param_1 + 0x3598) == 1)))) {
      uVar7 = *(uint *)(param_1 + 0x30);
      *(byte *)(param_1 + 0x2abd) = *(byte *)(param_1 + 0x2abd) & 0xfb;
      if (*(uint *)(param_1 + 0x38) < uVar7) {
        uVar7 = fn_82645110(param_1);
      }
      *(undefined4 *)(uVar7 + 4) = 0xc0004600;
      *(undefined4 *)(uVar7 + 8) = 0xf;
      *(undefined4 **)(param_1 + 0x30) = (undefined4 *)(uVar7 + 8);
    }
    goto code_r0x826417ac;
  }
  if ((uVar5 & 1) == 0) goto code_r0x826417ac;
  if ((uVar3 & 4) == 0) goto code_r0x826417ac;
  uVar3 = uVar3 >> 4 & 7;
  if ((uVar3 != 7) && (uVar3 != 5)) {
    if ((uVar7 & 0x10) == 0) {
      if (uVar3 != 4) {
        bVar1 = uVar3 == 6;
code_r0x8264179c:
        if (!bVar1) goto code_r0x826417ac;
      }
    }
    else if (uVar3 != 1) {
      bVar1 = uVar3 == 3;
      goto code_r0x8264179c;
    }
  }
  *(byte *)(param_1 + 0x2abd) = *(byte *)(param_1 + 0x2abd) | 4;
code_r0x826417ac:
  return param_2 | 0x100;
}

