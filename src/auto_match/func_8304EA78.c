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
extern int fn_82A1DDC0();
extern int fn_82FA5060();
extern unsigned int lbl_831BC770;


undefined8 fn_8304EA78(int param_1,int param_2,undefined8 param_3,int param_4)

{
  int iVar2;
  undefined8 uVar1;
  
  iVar2 = fn_82FA5060(lbl_831BC770,param_4 + 1);
  if (iVar2 == 0) {
    uVar1 = 0x34;
  }
  else {
    fn_82A1DDC0(iVar2,param_3,param_4);
    *(undefined1 *)(iVar2 + param_4) = 0;
    uVar1 = 1;
    *(int *)(param_2 * 0xc + *(int *)(param_1 + 8) + 8) = iVar2;
  }
  return uVar1;
}

