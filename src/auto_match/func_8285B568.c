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


void fn_8285B568(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  int aiStack_10 [4];
  
  piVar2 = aiStack_10;
  piVar3 = (int *)(*(int *)(param_1 + 0x44) + *(int *)(param_2 + 8));
  uVar4 = 0;
  lVar6 = 2;
  aiStack_10[0] = *(int *)(param_1 + 0x34);
  aiStack_10[1] = *(undefined4 *)(param_1 + 0x38);
  do {
    if ((*(int *)(*piVar2 + 0x40) != 0) &&
       (iVar5 = *(int *)(*(int *)(*piVar2 + 0x40) + 0x44), iVar5 != 0)) {
      uVar4 = *(uint *)(iVar5 + 0x44) + uVar4;
    }
    piVar2 = piVar2 + 1;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  *piVar3 = (int)(piVar3 + 1);
  iVar5 = 0;
  *(undefined1 *)(piVar3 + 1) = 0;
  if ((uVar4 & 0xffffffff) != 0) {
    do {
      iVar1 = *piVar3 + iVar5;
      iVar5 = iVar5 + 1;
      *(undefined1 *)(iVar1 + 1) = 0;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
    return;
  }
  return;
}

