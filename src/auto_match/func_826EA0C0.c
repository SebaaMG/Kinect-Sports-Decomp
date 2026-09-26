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
extern int fn_827BB508();
extern int fn_827C19D0();
extern int fn_82F6C150();
extern unsigned int uStack00000014;
extern unsigned int uStack00000027;


bool fn_826EA0C0(undefined4 param_1,int param_2,undefined1 param_3)

{
  int iVar1;
  undefined4 uStack00000014;
  undefined1 uStack00000027;
  
  uStack00000014 = param_1;
  uStack00000027 = param_3;
  iVar1 = fn_82F6C150(*(undefined4 *)(param_2 + 0x14c));
  if (iVar1 == 0) {
    fn_827BB508(uStack00000014,uStack00000027);
  }
  else {
    fn_827C19D0();
  }
  return iVar1 == 0;
}

