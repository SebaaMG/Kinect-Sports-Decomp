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
extern int fn_82FABD78();
extern int fn_82FAD0D0();
extern unsigned int lbl_8216CC7C;
extern unsigned int lbl_8216D71C;
extern unsigned int lbl_8216D730;
extern unsigned int lbl_8216D738;
extern unsigned int lbl_8216D750;


undefined4 * fn_82FB3998(undefined4 *param_1,int *param_2,undefined8 param_3)

{
  fn_82FABD78(param_1,param_3);
  fn_82FAD0D0(param_1 + 0x10);
  param_1[0x16] = param_2;
  *param_1 = &lbl_8216D750;
  param_1[1] = &lbl_8216D738;
  param_1[4] = &lbl_8216D730;
  param_1[6] = &lbl_8216CC7C;
  param_1[0x10] = &lbl_8216D71C;
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 4))(param_2);
  }
  return param_1;
}

