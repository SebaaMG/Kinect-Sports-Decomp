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
extern int fn_82AF5548();
extern int fn_82AF8668();
extern int fn_82B098F0();


void fn_82B0A638(undefined8 param_1,undefined8 param_2,int param_3,longlong param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  
  if ((*(uint *)(param_3 + 8) >> 0x1a & 1) == 0) {
    uVar1 = fn_82B098F0();
    if ((uVar1 != 0) && ((*(uint *)(uVar1 + 8) >> 0x1a & 1) == 0)) {
      iVar2 = fn_82AF5548(param_1,param_3,param_4);
      fn_82AF8668(*(undefined4 *)(iVar2 * 4 + param_5),param_4 != 0 | uVar1);
      *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) | 0x4000000;
    }
  }
  return;
}

