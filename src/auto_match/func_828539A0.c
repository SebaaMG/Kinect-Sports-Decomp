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
extern int fn_826310E0();


void fn_828539A0(int param_1,int param_2)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  
  bVar2 = *(byte *)(param_2 + 8);
  if (bVar2 == 0) {
    iVar3 = 0x84;
  }
  else if (bVar2 == 1) {
    iVar3 = 0x88;
  }
  else if (bVar2 < 3) {
    iVar3 = 0x98;
  }
  else if (bVar2 == 3) {
    iVar3 = 0x9c;
  }
  else {
    if (bVar2 < 5) {
      uVar1 = (uint)*(float *)(param_2 + 4);
      fn_826310E0(*(undefined4 *)(param_1 + 4),(ulonglong)uVar1,param_1 + 0xa4,
                   (ulonglong)*(byte *)(param_2 + 9),
                   (ulonglong)
                   (-0x8000000000000000 >>
                   (((((ulonglong)uVar1 + (ulonglong)*(byte *)(param_2 + 9)) - 1 & 0xffffffff) >> 2)
                    - (ulonglong)(uVar1 >> 2) & 0x7f)) >> ((ulonglong)(uVar1 >> 2) & 0x7f));
      return;
    }
    if (bVar2 != 5) {
      return;
    }
    iVar3 = 0xa0;
  }
  *(int *)(param_1 + iVar3) = (int)*(float *)(param_2 + 4);
  return;
}

