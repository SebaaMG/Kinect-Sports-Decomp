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
extern int fn_8267B890();
extern int fn_8267C498();
extern int fn_826809F0();
extern unsigned int lbl_831E7E64;


int fn_82680AC8(undefined8 param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4)

{
  ulonglong uVar1;
  int iVar2;
  
  if ((param_4 & 0xffffffff) == 0) {
    param_4 = (ulonglong)lbl_831E7E64;
  }
  uVar1 = fn_8267B890(param_4,0x30,0);
  if ((uVar1 & 0xffffffff) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = fn_826809F0(uVar1,param_1,param_2,param_3);
  }
  if (((*(int *)(iVar2 + 0x18) == 0) || ((param_2 & 0xffffffff) == 0)) ||
     ((param_3 & 0xffffffff) == 0)) {
    fn_8267C498();
    iVar2 = 0;
  }
  return iVar2;
}

