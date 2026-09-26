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
extern int fn_82BEA200();
extern int fn_82BEA230();
extern unsigned int lbl_8317524C;


void fn_82BE7988(uint param_1,undefined2 param_2)

{
  int iVar1;
  
  if ((param_1 < 0x10) &&
     (iVar1 = fn_82BEA200(0xffffffff8322b1ec,0xffffffff820e9a30), iVar1 != 0)) {
    *(undefined2 *)(&lbl_8317524C + param_1 * 0xc) = param_2;
    fn_82BEA230(0xffffffff8322b1ec,0xffffffff820e9a30);
  }
  return;
}

