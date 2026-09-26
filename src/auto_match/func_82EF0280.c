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
extern int fn_82E58050();
extern unsigned int lbl_82154AB8;
extern unsigned int lbl_82154ABC;
extern unsigned int lbl_82154AC0;
extern unsigned int lbl_82154AC4;
extern unsigned int lbl_82160304;
extern unsigned int lbl_8216030C;
extern unsigned int lbl_82160320;
extern unsigned int lbl_82162C1C;


undefined4 * fn_82EF0280(undefined4 *param_1)

{
  fn_82E58050();
  *param_1 = &lbl_82160320;
  param_1[1] = &lbl_8216030C;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined2 *)(param_1 + 0x19) = 0;
  *(undefined1 *)((int)param_1 + 0x66) = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  param_1[0x12] = &lbl_82160304;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  *(undefined2 *)(param_1 + 0x71) = 0;
  *(undefined1 *)((int)param_1 + 0x1c6) = 0;
  param_1[0x9a] = 0;
  param_1[0x9b] = 0;
  param_1[0x6c] = &lbl_82162C1C;
  param_1[2] = 1;
  param_1[4] = lbl_82154AB8;
  param_1[5] = lbl_82154ABC;
  param_1[6] = lbl_82154AC0;
  param_1[7] = lbl_82154AC4;
  return param_1;
}

