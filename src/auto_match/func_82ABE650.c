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
extern int fn_82ABDD90();
extern int fn_82ABE5F8();


void fn_82ABE650(int param_1,char param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  
  if (param_2 == '\0') {
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + -0x1000;
    iVar3 = *(int *)(param_1 + 0x21c);
    while (iVar3 != 0) {
      uVar1 = *(uint *)(iVar3 + 8);
      iVar2 = *(int *)(iVar3 + 0x20);
      uVar4 = fn_82ABDD90(param_1,uVar1 >> 7 & 0x7f,uVar1 >> 0x13 & 7,uVar1 >> 0xe & 7);
      fn_82ABE5F8(param_1,iVar3,uVar4,0);
      iVar3 = iVar2;
    }
    *(undefined4 *)(param_1 + 0x21c) = 0;
  }
  return;
}

