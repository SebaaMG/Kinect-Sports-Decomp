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
extern int fn_827D9DA0();
extern int fn_827D9DC0();
extern int fn_827DA3D8();


undefined8 fn_827E77F8(int param_1)

{
  uint uVar3;
  int iVar4;
  undefined8 uVar1;
  ulonglong uVar2;
  
  uVar3 = fn_827D9DC0(*(undefined4 *)(param_1 + 8));
  iVar4 = fn_827DA3D8(*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 4));
  if (*(int *)(iVar4 + 0x24) == 0) {
    uVar1 = 0x4b0;
  }
  else if ((((uVar3 & 8) == 0) && ((uVar3 & 4) == 0)) && (uVar3 != 0)) {
    uVar1 = 5;
  }
  else {
    uVar2 = fn_827D9DC0(*(undefined4 *)(param_1 + 8));
    fn_827D9DA0(*(undefined4 *)(param_1 + 8),uVar2 | 0x40);
    uVar1 = 0x3e4;
  }
  return uVar1;
}

