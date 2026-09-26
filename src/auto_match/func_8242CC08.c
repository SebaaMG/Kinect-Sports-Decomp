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
extern int fn_82358810();
extern int fn_8242E5C0();


ulonglong fn_8242CC08(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar5;
  int iVar6;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar7;
  
  iVar2 = *(int *)(param_1 + 0x174);
  iVar5 = *(int *)(*(int *)(iVar2 + 0x5c) + 0x1d4);
  if (param_2 == 0) {
    if (iVar5 == -1) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(*(int *)(*(int *)(iVar2 + 0x5c) + 0x1d4) * 4 +
                      *(int *)(*(int *)(iVar2 + 0x5c) + 0x1c4));
    }
    if (*(int *)(*(int *)(iVar5 + 0x40) + 0x1c8) != 0) {
      if (*(int *)(*(int *)(iVar2 + 0x5c) + 0x1d4) == -1) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(*(int *)(*(int *)(iVar2 + 0x5c) + 0x1d4) * 4 +
                        *(int *)(*(int *)(iVar2 + 0x5c) + 0x1c4));
      }
      if (((*(int *)(*(int *)(iVar2 + 0x40) + 0xf0) == 0) &&
          (iVar2 = fn_8242E5C0(param_1), iVar2 == 0)) &&
         (iVar2 = fn_82358810(param_1,0), iVar2 != 0)) {
        return 1;
      }
    }
    uVar4 = 0;
  }
  else {
    if (iVar5 == -1) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(*(int *)(*(int *)(iVar2 + 0x5c) + 0x1d4) * 4 +
                      *(int *)(*(int *)(iVar2 + 0x5c) + 0x1c4));
    }
    iVar5 = *(int *)(*(int *)(iVar5 + 0x40) + 0x1c0);
    if (*(int *)(*(int *)(iVar2 + 0x5c) + 0x1d4) == -1) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)(*(int *)(*(int *)(iVar2 + 0x5c) + 0x1d4) * 4 +
                      *(int *)(*(int *)(iVar2 + 0x5c) + 0x1c4));
    }
    uVar3 = (ulonglong)*(uint *)(*(int *)(iVar6 + 0x40) + 0x148);
    uVar7 = uVar3 + 1;
    if (*(int *)(*(int *)(iVar2 + 0x5c) + 0x1d4) == -1) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(*(int *)(*(int *)(iVar2 + 0x5c) + 0x1d4) * 4 +
                      *(int *)(*(int *)(iVar2 + 0x5c) + 0x1c4));
    }
    uVar1 = *(uint *)(*(int *)(iVar2 + 0x40) + 0x154);
    if ((((uVar7 & 0xffffffff) != 1) || (iVar2 = fn_8242E5C0(param_1), iVar2 != 0)) ||
       (uVar4 = 1, iVar5 != 0)) {
      uVar4 = 0;
    }
    if ((*(int *)(param_1 + 0xa0) == 0) || (*(int *)(*(int *)(param_1 + 0xa0) + 0x40) != 1)) {
      if ((*(int *)(*(int *)(param_1 + 0x174) + 0xc4) == 0) || (uVar3 = 1, iVar5 != 0)) {
        uVar3 = 0;
      }
      uVar4 = uVar3 | uVar4;
    }
    else {
      iVar2 = *(int *)(param_1 + 0x174);
      if (*(int *)(*(int *)(iVar2 + 0x5c) + 0x1d4) == -1) {
        iVar6 = 0;
      }
      else {
        iVar6 = *(int *)(*(int *)(*(int *)(iVar2 + 0x5c) + 0x1d4) * 4 +
                        *(int *)(*(int *)(iVar2 + 0x5c) + 0x1c4));
      }
      iVar6 = *(int *)(**(int **)(iVar6 + 0x40) + 0xa0);
      if (((iVar6 != 0) && (*(int *)(iVar6 + 0x150) != 0)) && (iVar5 == 0)) {
        if (*(int *)(*(int *)(iVar2 + 0x5c) + 0x1d4) == -1) {
          iVar5 = 0;
        }
        else {
          iVar5 = *(int *)(*(int *)(*(int *)(iVar2 + 0x5c) + 0x1d4) * 4 +
                          *(int *)(*(int *)(iVar2 + 0x5c) + 0x1c4));
        }
        if ((*(int *)(*(int *)(iVar5 + 0x40) + 0xf8) == 0) &&
           (((uVar7 & 0xffffffff) == 1 ||
            (uVar3 == (ulonglong)uVar1 / (ulonglong)*(uint *)(*(int *)(iVar2 + 0x5c) + 0x20c))))) {
          uVar4 = 1;
        }
      }
    }
  }
  return uVar4;
}

