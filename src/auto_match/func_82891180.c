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
extern int fn_825089A0();
extern int fn_8288FE00();


void fn_82891180(int param_1,undefined2 *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  if ((*(int *)(param_1 + 0xc) + *(int *)(param_1 + 0x10) & 7U) == 0) {
    if (*(uint *)(param_1 + 8) <= *(int *)(param_1 + 0x10) + 8U >> 3) {
      fn_8288FE00(param_1,1);
    }
  }
  uVar6 = (ulonglong)*(uint *)(param_1 + 0xc) + (ulonglong)*(uint *)(param_1 + 0x10);
  uVar4 = (uVar6 & 0xffffffff) >> 3;
  if (*(uint *)(param_1 + 8) <= uVar4) {
    uVar4 = uVar4 - *(uint *)(param_1 + 8);
  }
  iVar1 = (int)((uVar4 & 0x3fffffff) << 2);
  if (*(int *)(*(int *)(param_1 + 4) + iVar1) == 0) {
    piVar2 = (int *)fn_825089A0();
    uVar3 = (**(code **)(*piVar2 + 0x24))(piVar2,0x10,1);
    *(undefined4 *)(*(int *)(param_1 + 4) + iVar1) = uVar3;
  }
  lVar5 = (ulonglong)*(uint *)(*(int *)(param_1 + 4) + iVar1) + (uVar6 & 7) * 2;
  if (lVar5 != 0) {
    *(undefined2 *)lVar5 = *param_2;
  }
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  return;
}

