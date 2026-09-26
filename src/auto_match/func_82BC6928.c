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
extern unsigned int *auStack_40;
extern int fn_82AB15D0();
extern int fn_82F68CC0();
extern unsigned int uStack_38;


undefined4 fn_82BC6928(longlong param_1)

{
  undefined1 auStack_40 [8];
  undefined4 uStack_38;
  
  if (((int)param_1 < 0) || (0x87 < (int)param_1)) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820e7518,0xffffffff820e7550,0x146a);
  }
  fn_82F68CC0(auStack_40,param_1 * 0x24 + -0x7ce91440,0x24);
  return uStack_38;
}

