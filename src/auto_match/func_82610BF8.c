typedef unsigned char undefined1, byte, undefined, bool;
#define true 1
#define false 0
typedef unsigned short undefined2, ushort, word;
typedef unsigned int undefined4, uint, dword, ulong;
typedef unsigned __int64 undefined8, ulonglong, qword;
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


undefined8 fn_82610BF8(int param_1)

{
  undefined8 uVar1;

  uVar1 = Function_827DBA00(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0xc),1,
                            *(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x28),0,
                            param_1 + 0x1c,param_1 + 0x20);
  Function_82599418();
  return uVar1;
}
