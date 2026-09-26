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
extern int fn_82B82D28();


void fn_82AF50F8(int param_1,longlong param_2,longlong param_3,longlong param_4)

{
  uint uVar1;
  undefined4 *puVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8) >> 0x13;
  uVar3 = (ulonglong)uVar1 & 7;
  if ((uVar1 & 7) != 0) {
    puVar2 = (undefined4 *)(param_1 + 0x28);
    param_4 = param_4 - param_3;
    param_2 = param_2 - param_3;
    do {
      puVar2 = puVar2 + 1;
      fn_82B82D28(*puVar2,0,param_2 + param_3,param_3,param_4 + param_3,
                        *(undefined4 *)(param_1 + 0x1c),0,1);
      uVar3 = uVar3 - 1;
      param_3 = param_3 + 4;
    } while (uVar3 != 0);
  }
  return;
}

