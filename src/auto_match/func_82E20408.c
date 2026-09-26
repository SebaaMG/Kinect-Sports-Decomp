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
extern int fn_8265CA20();
extern int fn_82A2A958();
extern int fn_82E1F690();
extern int fn_82E200A0();
extern int fn_82E20100();
extern int fn_82E20270();
extern int fn_82F67988();


void fn_82E20408(void)

{
  int iVar2;
  ulonglong uVar1;
  
  iVar2 = fn_82E20270(0xffffffff8214bb70,0xffffffff8214bb6c,1);
  if (iVar2 == 0) {
    fn_82E1F690(0xffffffff8214bb48);
    fn_82E200A0();
  }
  else {
    fn_82F67988();
    uVar1 = fn_82E20100(0xffffffff8214bb70,1);
    fn_82A2A958();
    if ((uVar1 & 0xffffffff) != 0) {
      fn_8265CA20(uVar1);
    }
  }
  return;
}

