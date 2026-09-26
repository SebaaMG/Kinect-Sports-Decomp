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
extern int fn_822C72E0();
extern int fn_822F0780();
extern int fn_825113E0();


void fn_822EFE40(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x1e4);
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  if (*(int *)(*(int *)(param_1 + 0xc) + 0x24) == 0) {
    uVar3 = fn_822F0780();
    fn_822C72E0(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0xc) + 0x114) + 0x20),uVar3);
    fn_825113E0((ulonglong)*(uint *)(*(int *)(param_1 + 0xc) + 0x118) + 0x14,0x14,
                      param_1 + 0x30);
  }
  iVar2 = *(int *)(*(int *)(param_1 + 0x24) + 0xa8);
  if ((iVar2 != 0) && (*(int *)(iVar2 + 0x1d0) != 0)) {
    *(int *)(iVar2 + 0x1d0) = *(int *)(iVar2 + 0x1d0) + -1;
  }
  return;
}

