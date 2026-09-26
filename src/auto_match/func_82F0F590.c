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
extern int fn_82ECA928();
extern int fn_82ECFE20();
extern int fn_83147640();


void fn_82F0F590(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0xaf0) != 1) {
    fn_82ECFE20(param_1,*(undefined4 *)(param_2 + 0x108),*(undefined4 *)(param_2 + 0x10c),
                      param_2 + 0x298,param_2 + 0x90,param_2 + 0x98);
    return;
  }
  if (*(int *)(param_1 + 0x6d5c) != 0) {
    fn_82ECA928();
    return;
  }
  fn_83147640();
  return;
}

