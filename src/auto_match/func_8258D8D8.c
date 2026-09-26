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
extern int fn_82230300();
extern int fn_8258E6D8();
extern int fn_8258E7C0();
extern int fn_8258EBF8();
extern unsigned int iStack_2c;
extern unsigned int iStack_30;


void fn_8258D8D8(longlong param_1,undefined8 param_2)

{
  int iVar1;
  int iStack_30;
  int iStack_2c;
  
  fn_8258EBF8(&iStack_30,param_1 + 0x1b0,param_2);
  iVar1 = iStack_30;
  while (iStack_30 != iStack_2c) {
    fn_8258E7C0(&iStack_30);
  }
  fn_8258E6D8(&iStack_30,param_1 + 0x1b0,iVar1,iStack_2c);
  fn_82230300(param_2,1,0);
  return;
}

