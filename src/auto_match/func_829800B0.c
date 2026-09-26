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
extern int fn_82930318();
extern int fn_829304E0();
extern int fn_829315D8();


int fn_829800B0(int param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  *(undefined4 *)(*(int *)(param_1 + 0x78) + 0x1c) = 1;
  uVar1 = fn_82930318(0x14);
  if ((uVar1 & 0xffffffff) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = fn_829304E0(uVar1,0,0,0xffffffff8204de78);
  }
  if (iVar2 != 0) {
    uVar1 = fn_82930318(0x18);
    if ((uVar1 & 0xffffffff) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = fn_829315D8(uVar1,param_2,param_3);
    }
    if (iVar3 != 0) {
      *(int *)(iVar2 + 8) = iVar3;
      return iVar2;
    }
  }
  return 0;
}

