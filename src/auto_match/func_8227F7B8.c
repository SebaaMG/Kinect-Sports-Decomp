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


void fn_8227F7B8(int param_1,int param_2)

{
  bool bVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar2 = *(uint *)(param_1 + 0x6c);
  bVar1 = (~uVar2 & 1) == 0;
  if (param_2 == 0) {
    if (bVar1) goto LAB_8227f7e4;
    uVar2 = uVar2 | 1;
  }
  else {
    if (!bVar1) goto LAB_8227f7e4;
    uVar2 = uVar2 & 0xfffffffe;
  }
  *(uint *)(param_1 + 0x6c) = uVar2;
LAB_8227f7e4:
  if ((((~(ulonglong)*(uint *)(param_1 + 0x6c) & 0xffffffff) >> 1 & 1) == 0) ||
     (uVar3 = 1, (~(ulonglong)*(uint *)(param_1 + 0x6c) & 1) == 0)) {
    uVar3 = 0;
  }
  *(undefined4 *)(*(int *)(param_1 + 0x70) + 0x34) = uVar3;
  return;
}

