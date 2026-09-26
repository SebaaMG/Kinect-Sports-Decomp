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
extern int fn_82F02410();


void fn_82F2A028(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  uint uVar6;
  longlong lVar5;
  
  uVar6 = 0;
  uVar1 = *(uint *)(param_1 + 0xe10);
  while (1 < uVar1) {
    uVar6 = uVar6 + 1;
    uVar1 = *(uint *)(param_1 + 0xe10) >> (uVar6 & 0x3f);
  }
  lVar5 = 0;
  *(uint *)(param_1 + 0x610) = uVar6 + 1;
  uVar1 = *(uint *)(param_1 + 0xe14);
  while (1 < uVar1) {
    lVar5 = lVar5 + 1;
    uVar1 = *(uint *)(param_1 + 0xe14) >> ((uint)lVar5 & 0x3f);
  }
  lVar5 = lVar5 + 1;
  iVar3 = (int)lVar5;
  *(int *)(param_1 + 0x60c) = iVar3;
  if ((int)(uVar6 + 1) < 3) {
    *(undefined4 *)(param_1 + 0x610) = 3;
  }
  if ((*(uint *)(param_1 + 0x614) < 8) ||
     ((((*(int *)(param_1 + 0xaf0) != 0 && (*(int *)(param_1 + 0xaf0) != 4)) ||
       (*(int *)(param_1 + 0xa0c) != 0)) && (*(int *)(param_1 + 0x97c) != 0)))) {
    uVar2 = *(undefined4 *)(param_1 + 0x1ebc);
    lVar4 = 3;
    if (7 < iVar3) {
      fn_82F02410(uVar2,0,3);
      uVar2 = *(undefined4 *)(param_1 + 0x1ebc);
      lVar4 = 2;
      lVar5 = (ulonglong)*(uint *)(param_1 + 0x60c) - 8;
    }
  }
  else {
    if (iVar3 < 2) {
      *(undefined4 *)(param_1 + 0x60c) = 2;
    }
    uVar2 = *(undefined4 *)(param_1 + 0x1ebc);
    if ((int)*(uint *)(param_1 + 0x60c) < 8) {
      lVar4 = (ulonglong)*(uint *)(param_1 + 0x60c) - 1;
      lVar5 = 1;
    }
    else {
      lVar4 = 6;
      lVar5 = 0;
    }
  }
  fn_82F02410(uVar2,lVar5,lVar4);
  fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),(ulonglong)*(uint *)(param_1 + 0x610) - 3,2);
  return;
}

