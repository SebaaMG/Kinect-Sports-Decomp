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
extern unsigned int lbl_8217D040;


undefined4 * fn_82FEAE60(undefined4 *param_1)

{
  *param_1 = &lbl_8217D040;
  RtlInitializeCriticalSection(param_1 + 1);
  param_1[0xc9] = 0;
  RtlInitializeCriticalSection(param_1 + 0xca);
  param_1[0xd1] = 0;
  param_1[0xd2] = 0;
  param_1[0xd3] = 0;
  RtlInitializeCriticalSection(param_1 + 0xd4);
  param_1[0x19c] = 0;
  RtlInitializeCriticalSection(param_1 + 0x19d);
  param_1[0x265] = 0;
  RtlInitializeCriticalSection(param_1 + 0x266);
  param_1[0x32e] = 0;
  RtlInitializeCriticalSection(param_1 + 0x32f);
  param_1[0x3f7] = 0;
  RtlInitializeCriticalSection(param_1 + 0x3f8);
  param_1[0x4c0] = 0;
  RtlInitializeCriticalSection(param_1 + 0x4c1);
  param_1[0x589] = 0;
  RtlInitializeCriticalSection(param_1 + 0x58a);
  param_1[0x652] = 0;
  return param_1;
}

