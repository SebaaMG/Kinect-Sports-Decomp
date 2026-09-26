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
extern int fn_822C16B8();
extern int fn_82396230();
extern int fn_8239FF60();
extern int fn_823B3908();
extern int fn_8265C9E0();
extern int fn_8265CA20();


void fn_823A47A8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  iVar1 = *(int *)(*(int *)(param_1 + 8) + 8);
  *(uint *)(iVar1 + 0x260) = *(uint *)(iVar1 + 0x260) | 1;
  uVar2 = *(undefined4 *)(*(int *)(*(int *)(param_1 + 8) + 8) + 0x1e4);
  uVar3 = fn_8265C9E0(0x30);
  if ((uVar3 & 0xffffffff) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = fn_823B3908(uVar3,uVar2);
  }
  uVar4 = (ulonglong)*(uint *)(param_1 + 0xc);
  if ((uVar3 & 0xffffffff) != uVar4) {
    if (uVar4 != 0) {
      fn_822C16B8(uVar4 + 8);
      fn_8265CA20(uVar4);
    }
    *(int *)(param_1 + 0xc) = (int)uVar3;
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  iVar1 = *(int *)(*(int *)(param_1 + 8) + 8);
  if (*(int *)(iVar1 + 0x178) == 1) {
    fn_8239FF60(*(undefined4 *)(iVar1 + 0x2dc),0xc);
  }
  iVar1 = *(int *)(*(int *)(param_1 + 8) + 8);
  if (*(int *)(iVar1 + 0x178) == 0) {
    *(undefined4 *)(iVar1 + 0x240) = 0;
    fn_82396230();
  }
  return;
}

