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


void fn_82A2CAFC(void)

{
  int iVar1;
  uint uVar2;
  uint in_r6;
  uint in_r7;
  int in_r8;
  int *in_r10;
  byte in_cr6;
  
  while (!(bool)(in_cr6 >> 1 & 1)) {
    iVar1 = in_r10[-0x12];
    in_r10 = (int *)*in_r10;
    if (((((*(byte *)(iVar1 + 0x35) & 2) == 0) && (in_r7 <= *(ushort *)(iVar1 + 0x36))) &&
        (*(ushort *)(iVar1 + 0x36) < in_r6)) &&
       (uVar2 = *(int *)(iVar1 + 0x18) + 0xfffU & 0xfffff000, uVar2 < *(uint *)(iVar1 + 0x1c))) {
      *(uint *)(iVar1 + 0x1c) = uVar2;
    }
    in_cr6 = (in_r10 == (int *)in_r8) << 1;
  }
  return;
}

