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
extern int fn_82693F78();
extern int fn_82695448();
extern int fn_82695468();
extern int fn_826954C0();


void fn_8271C690(undefined8 param_1)

{
  char cVar2;
  ulonglong uVar1;
  
  cVar2 = fn_82695468(param_1,0x1b);
  if (cVar2 == '\0') {
    fn_826954C0(param_1,0xffffffff8200ee50,0,0);
  }
  else {
    uVar1 = fn_82695448(param_1);
    if ((uVar1 & 0xffffffff) != 0) {
      fn_82693F78(uVar1 + 0xc,0xffffffff8200fd74);
    }
  }
  return;
}

