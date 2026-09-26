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
extern int fn_82FEC6E0();
extern int fn_82FFE0F0();


undefined8 fn_830157D8(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar2;
  undefined8 uVar1;
  
  iVar2 = fn_82FFE0F0(param_1 + 4);
  if (iVar2 == 0) {
    uVar1 = 2;
  }
  else {
    *(char *)(iVar2 + 0x20) = (char)param_3;
    fn_82FEC6E0(param_2,param_3);
    uVar1 = 1;
  }
  return uVar1;
}

