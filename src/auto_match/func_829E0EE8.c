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
extern int fn_829E0980();
extern int fn_829E0C20();
extern int fn_82A1DDC0();


undefined8 fn_829E0EE8(int param_1,undefined8 param_2,ushort *param_3)

{
  int iVar2;
  undefined8 uVar1;
  
  iVar2 = fn_829E0C20(param_2,*param_3);
  if (iVar2 == 0) {
    uVar1 = 0xffffffff80004005;
  }
  else {
    uVar1 = fn_829E0980(iVar2,0x7dc,0,7,param_2);
    if (-1 < (int)uVar1) {
      *param_3 = (ushort)((uint)*(undefined4 *)(iVar2 + 4) >> 0x11);
      fn_82A1DDC0(iVar2 + 8,param_1,2000);
      uVar1 = 0;
      *(undefined4 *)(iVar2 + 0x7d8) = *(undefined4 *)(param_1 + 2000);
    }
  }
  return uVar1;
}

