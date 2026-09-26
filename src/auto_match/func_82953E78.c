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
extern int fn_82975B00();


undefined8 fn_82953E78(int param_1,int *param_2,ulonglong param_3,uint *param_4,int param_5)

{
  uint uVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  int *piVar8;
  uint uVar9;
  
  uVar6 = 0;
  uVar5 = 0;
  uVar1 = *(uint *)(*(int *)(*param_2 * 4 + *(int *)(param_1 + 0x14)) + 0x3c);
  if ((uVar1 & 0x400) == 0) {
    if ((uVar1 & 0x800) == 0) {
      if ((uVar1 & 0x1000) == 0) {
        if ((uVar1 & 0x2000) == 0) {
          if ((uVar1 & 0x4000) == 0) {
            if ((uVar1 & 0x8000) != 0) {
              uVar5 = 0xd000000;
            }
          }
          else {
            uVar5 = 0xe000000;
          }
        }
        else {
          uVar5 = 0xf000000;
        }
      }
      else {
        uVar5 = 0x3000000;
      }
    }
    else {
      uVar5 = 0x2000000;
    }
  }
  else {
    uVar5 = 0x1000000;
  }
  if ((uVar1 & 0x200) != 0) {
    uVar5 = uVar5 | 0x100000;
  }
  if (param_5 == 0) {
    uVar7 = param_3;
    piVar8 = param_2;
    uVar2 = param_3 & 0xffffffff;
    while (uVar2 != 0) {
      uVar9 = 0;
      uVar1 = *(uint *)(*(int *)(*piVar8 * 4 + *(int *)(param_1 + 0x14)) + 0x10);
      if (uVar1 == 0) {
        uVar9 = 0x10000;
      }
      else if (uVar1 == 1) {
        uVar9 = 0x20000;
      }
      else if (uVar1 < 3) {
        uVar9 = 0x40000;
      }
      else if (uVar1 == 3) {
        uVar9 = 0x80000;
      }
      if ((uVar9 & uVar6) != 0) {
        fn_82975B00(param_1,*(undefined4 *)(*(int *)(param_1 + 0x104) + 0x3c),0x12d5,
                          0xffffffff820343d8);
      }
      uVar6 = uVar9 | uVar6;
      piVar8 = piVar8 + 1;
      uVar7 = uVar7 - 1;
      uVar2 = uVar7;
    }
  }
  else {
    uVar6 = 0xf0000;
  }
  if ((*(uint *)(param_1 + 0x6c) & 0x80) != 0) {
    if ((uVar6 & 0x80000) == 0) {
      uVar6 = 0x70000;
    }
    else if ((uVar6 & 0x70000) != 0) {
      uVar6 = 0xf0000;
    }
  }
  if ((((*(uint *)(param_1 + 0xcc) & 1) != 0) && (*(int *)(param_1 + 0x128) != 0)) &&
     (iVar4 = 0, (param_3 & 0xffffffff) != 0)) {
    param_2 = param_2 + -1;
    do {
      param_2 = param_2 + 1;
      iVar3 = *(int *)(param_1 + 300) * 6 + iVar4;
      iVar4 = iVar4 + 1;
      *(int *)((iVar3 + -4) * 4 + *(int *)(param_1 + 0x128)) = *param_2;
      param_3 = param_3 - 1;
    } while (param_3 != 0);
  }
  *param_4 = uVar5 | uVar6;
  return 0;
}

