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
extern int fn_82E50C30();
extern unsigned int lbl_8215FF54;
extern unsigned int lbl_8215FF68;
extern unsigned int lbl_8215FF7C;


undefined4 * fn_82EE8BB8(undefined4 *param_1)

{
  *param_1 = &lbl_8215FF7C;
  param_1[1] = &lbl_8215FF54;
  param_1[2] = &lbl_8215FF68;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[0x12] = 0;
  RtlInitializeCriticalSection(param_1 + 6);
  param_1[0x14] = 0;
  param_1[0x16] = param_1 + 0x15;
  param_1[0x15] = param_1 + 0x15;
  fn_82E50C30(param_1 + 0x17);
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 2;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  return param_1;
}

