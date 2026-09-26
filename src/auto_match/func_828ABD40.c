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
extern unsigned int *auStack_30;
extern int fn_828B55B0();
extern int fn_828B55C0();
extern int fn_828B5608();
extern int fn_828B57E8();


void fn_828ABD40(int param_1,undefined8 param_2,ulonglong param_3)

{
  undefined1 auStack_30 [48];
  
  fn_828B5608(auStack_30);
  fn_828B57E8(auStack_30,*(undefined4 *)(param_1 + 4),param_2);
  if ((param_3 & 0xffffffff) != 0) {
    fn_828B55C0(param_3,auStack_30);
  }
  fn_828B55B0(auStack_30);
  return;
}

