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
extern int fn_8265C9E0();
extern int fn_82F63EC8();
extern int fn_82F64188();
extern unsigned int lbl_832632CC;


void fn_82F62988(int param_1)

{
  int iVar1;
  int *piVar2;
  
  if ((lbl_832632CC == (int *)0x0) && (iVar1 = fn_82F63EC8(0xffffffff82f62928), iVar1 != 0)) {
    fn_82F64188();
  }
  piVar2 = (int *)fn_8265C9E0(8);
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2[1] = param_1;
    *piVar2 = (int)lbl_832632CC;
  }
  lbl_832632CC = piVar2;
  return;
}

