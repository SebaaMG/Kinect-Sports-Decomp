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
extern int fn_82547C80();


void fn_8235F3E8(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  for (uVar2 = *(uint *)(param_1 + 0x640); uVar2 < *(uint *)(param_1 + 0x644); uVar2 = uVar2 + 1) {
    uVar1 = *(uint *)(param_1 + 0x648);
    fn_82547C80((ulonglong)**(uint **)((uVar2 / uVar1 + 0xafb) * 4 + param_1) + 0xd0,
                 uVar2 - (uVar2 / uVar1) * uVar1 & 0xff,-(uVar2 < param_2) & 1);
  }
  return;
}

