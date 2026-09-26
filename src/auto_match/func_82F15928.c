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


void fn_82F15928(int param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  
  iVar5 = 0;
  iVar2 = 0;
  uVar3 = 0;
  if (*(int *)(param_1 + 0x7808) == 0) {
    uVar1 = *(uint *)(param_1 + 0x7820);
    uVar6 = *(uint *)(param_1 + 0x7824);
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x7840);
    uVar6 = *(uint *)(param_1 + 0x7844);
  }
  if ((0 < (int)uVar1) || (0 < (int)uVar6)) {
    iVar5 = 1;
  }
  fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),iVar5,1);
  if (iVar5 != 0) {
    uVar4 = (ulonglong)uVar1;
    if (((uVar1 != uVar6) && (uVar4 = uVar3, 0 < (int)uVar1)) &&
       ((((int)uVar1 < 7 && (uVar6 == uVar1 + 2)) || ((uVar1 == 7 && (uVar6 == 8)))))) {
      uVar4 = (ulonglong)uVar1 + 8;
    }
    fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),uVar4,4);
  }
  if ((*(int *)(param_1 + 0x31c) != *(int *)(param_1 + 0x77b8)) ||
     (*(int *)(param_1 + 800) != *(int *)(param_1 + 0x77bc))) {
    iVar2 = 1;
  }
  fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),iVar2,1);
  if (iVar2 != 0) {
    fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),*(undefined4 *)(param_1 + 0x77f4),2);
    fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),*(undefined4 *)(param_1 + 0x77f8),2);
    if ((*(int *)(param_1 + 0x77f4) == 0) && (*(int *)(param_1 + 0x77f8) == 0)) {
      uVar6 = *(uint *)(param_1 + 0x31c);
      fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),
                        (longlong)((int)uVar6 >> 1) +
                        (ulonglong)((int)uVar6 < 0 && (uVar6 & 1) != 0) + -1,0xc);
      uVar6 = *(uint *)(param_1 + 800);
      fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),
                        (longlong)((int)uVar6 >> 1) +
                        (ulonglong)((int)uVar6 < 0 && (uVar6 & 1) != 0) + -1,0xc);
    }
  }
  return;
}

