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
extern int fn_82EE2A68();
extern int fn_82F349F0();
extern unsigned int lbl_8215FBB8;
extern unsigned int lbl_8215FBE0;


undefined4 * fn_82EE2AD0(undefined4 *param_1)

{
  fn_82EE2A68(param_1,0);
  fn_82F349F0(param_1 + 0x13);
  *param_1 = &lbl_8215FBE0;
  param_1[0x13] = &lbl_8215FBB8;
  param_1[0x17] = 1;
  return param_1;
}

