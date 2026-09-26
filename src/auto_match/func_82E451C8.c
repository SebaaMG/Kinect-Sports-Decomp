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
extern int fn_82E439A0();
extern int fn_82E50C30();
extern int fn_82E59E00();
extern int fn_82E5AEC8();
extern int fn_82E7B5F8();
extern unsigned int lbl_821530D8;
extern unsigned int lbl_82153100;
extern unsigned int lbl_82153104;
extern unsigned int lbl_82153114;
extern unsigned int lbl_82153124;


undefined4 * fn_82E451C8(undefined4 *param_1,int *param_2)

{
  int iVar1;
  
  fn_82E7B5F8(param_1 + 4);
  *param_1 = &lbl_82153124;
  param_1[1] = &lbl_82153114;
  param_1[3] = &lbl_82153104;
  param_1[2] = &lbl_821530D8;
  param_1[4] = &lbl_82153100;
  param_1[0xe] = 0;
  fn_82E50C30(param_1 + 0xf);
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  fn_82E5AEC8(param_1 + 0x21);
  *(undefined8 *)(param_1 + 0x3c) = 0;
  *(undefined8 *)(param_1 + 0x3e) = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  iVar1 = fn_82E59E00(param_1 + 6);
  *param_2 = iVar1;
  if (-1 < iVar1) {
    iVar1 = (**(code **)(*(int *)param_1[6] + 0xc))();
    *param_2 = iVar1;
    if (-1 < iVar1) {
      iVar1 = fn_82E439A0(param_1);
      *param_2 = iVar1;
    }
  }
  return param_1;
}

