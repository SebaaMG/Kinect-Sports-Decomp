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
extern unsigned int *auStack_40;
extern unsigned int fStack_38;
extern int fn_8300F158();
extern int fn_8300F208();
extern unsigned int lbl_832642E4;
extern unsigned int uStack_3c;
extern unsigned int uStack_3e;


void fn_82FE6C98(double param_1,undefined4 param_2)

{
  undefined2 uVar1;
  undefined1 auStack_40 [2];
  undefined2 uStack_3e;
  undefined4 uStack_3c;
  float fStack_38;
  
  fStack_38 = (float)param_1;
  uStack_3e = 0xe;
  uStack_3c = param_2;
  uVar1 = fn_8300F158();
  fn_8300F208(lbl_832642E4,auStack_40,uVar1);
  return;
}

