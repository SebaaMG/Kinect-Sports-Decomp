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
extern unsigned int *auStack_20;
extern int fn_829C7DE0();
extern int fn_829C89A8();
extern int fn_829C8B38();
extern int fn_829DB5F0();
extern int fn_829E4C68();
extern int fn_82A1E108();
extern unsigned int iStack_1c;
extern unsigned int lbl_83217B60;


void fn_829DBBF8(undefined8 param_1)

{
  int iVar1;
  undefined1 auStack_20 [4];
  int iStack_1c;
  undefined1 auStack_18 [8];
  
  iVar1 = fn_829C8B38(0,1,0,1);
  if ((-1 < iVar1) && (iVar1 = fn_829C89A8(0,1), -1 < iVar1)) {
    fn_82A1E108(param_1);
    iVar1 = fn_829C7DE0(0,1,3,&iStack_1c);
    if (iVar1 < 0) {
      lbl_83217B60 = 2;
    }
    else {
      lbl_83217B60 = ((uint)LZCOUNT(iStack_1c + -0x32) >> 5 ^ 1) + 1;
    }
    iVar1 = fn_829C8B38(0,1,0,0);
    if (-1 < iVar1) {
      fn_829E4C68(auStack_20,1,0xffffffff83217b50,auStack_18);
      fn_829DB5F0();
    }
  }
  return;
}

