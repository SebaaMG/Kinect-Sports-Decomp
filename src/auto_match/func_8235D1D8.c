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
extern int fn_82412D20();
extern int fn_82417F58();


void fn_8235D1D8(int param_1)

{
  int iVar2;
  undefined8 uVar1;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)*(uint *)(param_1 + 0x2b20);
  if ((uVar3 != 0) && (iVar2 = fn_82417F58(uVar3), iVar2 != 0)) {
    uVar1 = fn_82417F58(uVar3);
    fn_82412D20(*(undefined4 *)(param_1 + 0x194),uVar3,uVar1);
  }
  return;
}

