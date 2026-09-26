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
extern unsigned int *auStack_18;
extern unsigned int lbl_8322FD10;
extern unsigned int lbl_8322FD18;
extern unsigned int uStack_14;


uint fn_82BF9038(undefined8 param_1,ulonglong param_2,ulonglong param_3,int param_4)

{
  uint uVar1;
  longlong lStack_20;
  undefined1 auStack_18 [4];
  uint uStack_14;
  
  lStack_20 = (param_3 & 0xffffffff) + lbl_8322FD10;
  if (param_4 == 0) {
    uVar1 = NtWriteFile(lbl_8322FD18,0,0,0,auStack_18,param_1,param_2,&lStack_20);
  }
  else {
    uVar1 = NtReadFile();
  }
  if ((-1 < (int)uVar1) && ((param_2 & 0xffffffff) != (ulonglong)uStack_14)) {
    uVar1 = 0xc0000185;
  }
  return uVar1 >> 0x1f ^ 1;
}

