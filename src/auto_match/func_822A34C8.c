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
extern int fn_82526C70();


void fn_822A34C8(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_2 * 0x39c + param_1;
  iVar1 = param_3 * 0x5c + iVar2 + 0x1188;
  *(undefined4 *)(iVar2 + 0x1188) = 1;
  *(undefined4 *)(iVar1 + -0x58) = 1;
  iVar1 = iVar1 + -0x54;
  if (param_4 < 1) {
    fn_82526C70(iVar1,0x10,0xffffffff82196582);
  }
  else {
    fn_82526C70(iVar1,0x10,0xffffffff821aa66c);
  }
  *(undefined4 *)(param_1 + 0x1ff8) = 1;
  return;
}

