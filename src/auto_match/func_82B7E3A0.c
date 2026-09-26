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
extern int fn_82AB15D0();
extern int fn_82AB6EC0();


bool fn_82B7E3A0(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  
  uVar1 = fn_82AB6EC0(param_1,0x31);
  iVar2 = fn_82AB6EC0(param_1,0x32);
  if ((uVar1 != 0x1f) && (uVar1 != 0x20)) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820dba10,0xffffffff820db938,0x180);
  }
  if ((iVar2 != 0) && (iVar2 != 0x40)) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820db9b8,0xffffffff820db938,0x184);
  }
  if ((uVar1 < 0x1f) || (0x20 < uVar1)) {
    bVar3 = false;
  }
  else {
    bVar3 = iVar2 == 0x40;
  }
  return bVar3;
}

