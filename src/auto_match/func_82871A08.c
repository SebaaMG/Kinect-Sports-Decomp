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
extern int fn_8287AC68();
extern unsigned int lbl_82022164;


undefined4 * fn_82871A08(undefined4 *param_1)

{
  undefined4 *in_r7;
  undefined4 *in_r8;
  
  fn_8287AC68();
  *param_1 = &lbl_82022164;
  param_1[0x3d] = *in_r7;
  param_1[0x3e] = in_r7[1];
  param_1[0x3f] = in_r7[2];
  param_1[0x40] = *in_r8;
  param_1[0x41] = in_r8[1];
  param_1[0x42] = in_r8[2];
  return param_1;
}

