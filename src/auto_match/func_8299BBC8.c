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
extern int fn_8294B508();
extern int fn_82996970();
extern int fn_8299A220();


longlong fn_8299BBC8(int param_1)

{
  uint *puVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  uint uVar7;
  ulonglong uVar6;
  int iVar8;
  
  lVar3 = fn_8299A220(param_1,*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0xc));
  if (-1 < lVar3) {
    uVar5 = 0;
    uVar7 = 0;
    if (*(int *)(param_1 + 0xc) != 0) {
      iVar8 = 0;
      do {
        uVar5 = uVar5 + 1;
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x18) + iVar8) + 0x28) = 0;
        piVar2 = (int *)(*(int *)(param_1 + 0x18) + iVar8);
        iVar8 = iVar8 + 4;
        *(undefined4 *)(*piVar2 + 0x24) = 0;
        uVar7 = *(uint *)(param_1 + 0xc);
      } while (uVar5 < uVar7);
    }
    uVar5 = 0;
    if (uVar7 != 0) {
      iVar8 = 0;
      do {
        puVar1 = *(uint **)(iVar8 + *(int *)(param_1 + 0x18));
        uVar6 = (ulonglong)*puVar1 & 0xfff00000;
        iVar4 = fn_82996970(uVar6);
        if ((iVar4 != 0) || ((uVar6 & 0xffffffff) == 0x11000000)) {
          uVar7 = puVar1[9];
          fn_8294B508(param_1);
          puVar1[9] = uVar7;
        }
        uVar5 = uVar5 + 1;
        iVar8 = iVar8 + 4;
      } while (uVar5 < *(uint *)(param_1 + 0xc));
    }
  }
  return lVar3;
}

