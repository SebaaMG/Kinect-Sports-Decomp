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
extern int fn_82670F48();
extern unsigned int lbl_82002CC4;


undefined4 * fn_82671370(undefined4 *param_1,undefined8 param_2,undefined4 *param_3)

{
  fn_82670F48();
  *param_1 = &lbl_82002CC4;
  param_1[5] = *param_3;
  param_1[6] = param_3[1];
  param_1[7] = param_3[2];
  param_1[8] = param_3[3];
  param_1[9] = param_3[4];
  param_1[10] = param_3[5];
  param_1[0x11] = param_3[0xc];
  param_1[0xb] = param_3[6];
  param_1[0xc] = param_3[7];
  param_1[0xd] = param_3[8];
  param_1[0xe] = param_3[9];
  param_1[0xf] = param_3[10];
  param_1[0x10] = param_3[0xb];
  return param_1;
}

