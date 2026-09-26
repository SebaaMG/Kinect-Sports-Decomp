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
extern int fn_828AFF88();
extern int fn_828BDDA0();
extern unsigned int lbl_820257F0;
extern unsigned int lbl_820257F8;


undefined4 * fn_828DA5D8(undefined4 *param_1,longlong param_2,int param_3)

{
  undefined8 uVar1;
  
  fn_828BDDA0();
  *param_1 = &lbl_820257F8;
  param_1[0x14] = &lbl_820257F0;
  *(undefined1 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x22) = *(undefined8 *)(param_3 + 0x88);
  *(undefined8 *)(param_1 + 0x24) = 0xffffffffffffffff;
  uVar1 = fn_828AFF88(param_2 + 0x278);
  *(undefined8 *)(param_1 + 0x26) = uVar1;
  *(undefined8 *)(param_1 + 0x2a) = 0xffffffffffffffff;
  return param_1;
}

