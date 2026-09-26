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
extern int fn_82ABE870();


void fn_82B4B640(undefined8 param_1,uint param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (param_2 != 0) {
    do {
      puVar2 = (undefined4 *)fn_82ABE870(param_1);
      *puVar2 = param_3;
      uVar1 = uVar3 & 0x3fff;
      uVar3 = uVar3 + 1;
      puVar2[1] = uVar1 << 2 | puVar2[1] & 0x10000 | 1;
    } while (uVar3 < param_2);
  }
  return;
}

