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
extern int fn_82A3FE48();
extern int fn_82A5F3B8();
extern unsigned int lbl_82089F70;
extern unsigned int lbl_82089F84;


undefined4 * fn_82A4F8D0(undefined4 *param_1)

{
  fn_82A5F3B8(param_1,0xffffffff8315ea48);
  *(undefined2 *)(param_1 + 9) = 0;
  *param_1 = &lbl_82089F84;
  param_1[8] = &lbl_82089F70;
  *(undefined2 *)((int)param_1 + 0x26) = 0;
  *(undefined2 *)(param_1 + 10) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  fn_82A3FE48(0xffffffff83219d50);
  return param_1;
}

