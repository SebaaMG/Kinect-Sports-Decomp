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
extern int fn_828AD740();
extern int fn_828D34E0();
extern int fn_828D38C0();
extern int fn_828D3FC8();


void fn_828D4028(int param_1)

{
  char cVar1;
  
  cVar1 = fn_828AD740(*(undefined4 *)(param_1 + 0x24));
  if (cVar1 == '\0') {
    fn_828D3FC8(param_1 + 4);
    cVar1 = fn_828D34E0(param_1,1);
    if (cVar1 == '\0') {
      return;
    }
  }
  else {
    fn_828D3FC8(param_1 + 4);
  }
  fn_828D38C0(param_1 + 0x14);
  return;
}

