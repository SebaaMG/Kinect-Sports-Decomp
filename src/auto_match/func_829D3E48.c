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
extern int fn_829D3C80();
extern int fn_829D3D08();
extern int fn_829DBCE0();
extern int fn_829DC470();
extern int fn_829DD3F8();
extern int fn_829DDDB8();


void fn_829D3E48(longlong param_1)

{
  int iVar1;
  
  fn_829DC470(param_1 + 0x24);
  fn_829DDDB8(param_1 + 0x70);
  fn_829DD3F8(param_1 + 0x94);
  fn_829DBCE0(param_1 + 0xb0);
  fn_829D3D08(param_1);
  iVar1 = fn_829D3C80(0xffffffff82057500,0x11,param_1 + 0x244);
  if (-1 < iVar1) {
    fn_829D3C80(0xffffffff820574ec,0x11,param_1 + 0xd8);
  }
  return;
}

