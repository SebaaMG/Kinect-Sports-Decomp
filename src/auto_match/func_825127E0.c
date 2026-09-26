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
extern int fn_828EBA58();
extern unsigned int lbl_82192734;
extern unsigned int lbl_821C2434;


undefined4 * fn_825127E0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  fn_828EBA58();
  param_1[0x38] = 0;
  param_1[0x48] = 0xffffffff;
  uVar1 = lbl_82192734;
  param_1[0x49] = 0xffffffff;
  param_1[0x4b] = 0xffffffff;
  param_1[0x41] = uVar1;
  param_1[0x42] = uVar1;
  *param_1 = &lbl_821C2434;
  param_1[0x3a] = 0xffffffff;
  *(undefined1 *)(param_1 + 0x3b) = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  *(undefined1 *)(param_1 + 0x4a) = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  return param_1;
}

