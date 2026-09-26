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
extern int fn_82E2F120();
extern int fn_82E2FB40();
extern int fn_82E50C30();
extern int fn_82E59E00();
extern int fn_82E5AEC8();
extern unsigned int lbl_8214C818;
extern unsigned int lbl_8214C830;


undefined4 * fn_82E31128(undefined4 *param_1,int *param_2)

{
  int iVar1;
  
  fn_82E2F120(param_1,0);
  *param_1 = &lbl_8214C830;
  param_1[0x13] = &lbl_8214C818;
  param_1[0x14] = 0;
  fn_82E50C30(param_1 + 0x15);
  param_1[0x24] = 0;
  fn_82E5AEC8(param_1 + 0x25);
  fn_82E5AEC8(param_1 + 0x40);
  fn_82E5AEC8(param_1 + 0x5b);
  param_1[0x76] = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  if (-1 < *param_2) {
    fn_82E2FB40(param_1);
    iVar1 = fn_82E59E00(param_1 + 0x24);
    *param_2 = iVar1;
  }
  return param_1;
}

