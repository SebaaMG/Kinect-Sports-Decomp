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


void fn_8272FB70(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xa0);
  if (iVar1 == 0) {
    return;
  }
  *(undefined1 *)(iVar1 + 0x120) = *(undefined1 *)(param_2 + 8);
  *(undefined1 *)(iVar1 + 0x121) = *(undefined1 *)(param_2 + 9);
  *(undefined1 *)(iVar1 + 0x122) = *(undefined1 *)(param_2 + 10);
  *(undefined1 *)(iVar1 + 0x123) = *(undefined1 *)(param_2 + 0xb);
  *(undefined1 *)(iVar1 + 0x124) = *(undefined1 *)(param_2 + 0xc);
  *(undefined1 *)(iVar1 + 0x125) = *(undefined1 *)(param_2 + 0xd);
  *(undefined1 *)(iVar1 + 0x126) = *(undefined1 *)(param_2 + 0xe);
  *(undefined1 *)(iVar1 + 0x127) = *(undefined1 *)(param_2 + 0xf);
  *(undefined2 *)(iVar1 + 0x128) = *(undefined2 *)(param_2 + 0x10);
  *(undefined2 *)(iVar1 + 0x12a) = *(undefined2 *)(param_2 + 0x12);
  *(undefined2 *)(iVar1 + 300) = *(undefined2 *)(param_2 + 0x14);
  *(undefined2 *)(iVar1 + 0x12e) = *(undefined2 *)(param_2 + 0x16);
  *(undefined4 *)(iVar1 + 0x130) = *(undefined4 *)(param_2 + 0x18);
  return;
}

