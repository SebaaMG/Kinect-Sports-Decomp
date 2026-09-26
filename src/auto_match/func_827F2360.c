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
extern int fn_827F3C20();
extern int fn_827F4068();
extern int fn_82F68CC0();


void fn_827F2360(undefined8 param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = (uint)*(byte *)(param_2 + 0x54);
  while( true ) {
    if ((*(byte *)((uVar3 >> 3) + param_2 + 0x52) >> (uVar3 & 7) & 1) == 0) {
      (**(code **)(**(int **)((uVar3 + 8) * 4 + param_2) + 8))(param_1);
    }
    if (uVar3 == *(byte *)(param_2 + 0x53)) break;
    uVar3 = uVar3 + 1 & 3;
  }
  uVar3 = (uint)*(byte *)(param_2 + 0x54);
  uVar4 = (uint)*(byte *)(param_2 + 0x54);
  while( true ) {
    if (uVar4 == uVar3) {
      lVar1 = fn_827F3C20(param_2);
      lVar2 = fn_827F3C20(*(undefined4 *)((uVar4 + 8) * 4 + param_2));
      fn_82F68CC0(lVar1 + 0x34,lVar2 + 0x34,0x20);
    }
    else {
      (**(code **)(**(int **)((uVar3 + 0xc) * 4 + param_2) + 8))(param_1);
    }
    if (uVar4 == *(byte *)(param_2 + 0x53)) break;
    uVar3 = uVar4;
    uVar4 = uVar4 + 1 & 3;
  }
  fn_827F4068(param_2);
  return;
}

