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
extern int fn_82A1E658();
extern int fn_82F909F0();
extern int fn_82F93988();
extern unsigned int lbl_8216B72C;
extern unsigned int lbl_8216B770;
extern unsigned int lbl_8216B79C;


void fn_82F8E3D8(undefined4 *param_1)

{
  undefined4 *puStack00000014;
  
  *param_1 = &lbl_8216B79C;
  param_1[1] = &lbl_8216B72C;
  param_1[2] = &lbl_8216B770;
  puStack00000014 = param_1;
  if (param_1[0x26] != 0) {
    fn_82F93988(param_1[0x26]);
  }
  if (puStack00000014[0x25] != 0) {
    fn_82A1E658(puStack00000014[0x25]);
  }
  fn_82F909F0(puStack00000014);
  return;
}

