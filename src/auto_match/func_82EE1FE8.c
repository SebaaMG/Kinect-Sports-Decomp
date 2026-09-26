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
extern int fn_82EE14B8();
extern unsigned int lbl_820ED0B8;
extern unsigned int lbl_820ED0BC;
extern unsigned int lbl_820ED0C0;
extern unsigned int lbl_820ED0C4;
extern unsigned int lbl_8215FAE0;
extern unsigned int lbl_8215FDD0;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * fn_82EE1FE8(undefined4 *param_1)

{
  undefined4 uVar1;
  
  fn_82EE14B8();
  *param_1 = &lbl_8215FAE0;
  param_1[1] = &lbl_8215FDD0;
  param_1[4] = lbl_820ED0B8;
  param_1[5] = lbl_820ED0BC;
  param_1[6] = lbl_820ED0C0;
  uVar1 = lbl_820ED0C4;
  param_1[0x96] = 0;
  param_1[7] = uVar1;
  return param_1;
}

