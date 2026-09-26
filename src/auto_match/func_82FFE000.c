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


void fn_82FFE000(int *param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  
  iVar1 = param_3[2];
  iVar2 = *param_3;
  uVar3 = param_3[1];
  iVar4 = param_3[3];
  iVar5 = *(int *)(iVar1 + 8);
  *param_1 = iVar2;
  param_1[1] = uVar3;
  param_1[3] = iVar4;
  param_1[2] = iVar5;
  uVar7 = uVar3;
  while (iVar5 == 0) {
    uVar7 = uVar7 + 1;
    param_1[1] = uVar7;
    if (0x1e < uVar7) break;
    param_1[3] = 0;
    iVar5 = *(int *)(uVar7 * 4 + iVar2);
    param_1[2] = iVar5;
  }
  uVar6 = *(undefined4 *)(iVar1 + 8);
  if (iVar4 != 0) {
    *(undefined4 *)(iVar4 + 8) = uVar6;
    *(int *)(param_2 + 0x7c) = *(int *)(param_2 + 0x7c) + -1;
    return;
  }
  *(undefined4 *)(uVar3 * 4 + param_2) = uVar6;
  *(int *)(param_2 + 0x7c) = *(int *)(param_2 + 0x7c) + -1;
  return;
}

