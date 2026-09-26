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
extern int fn_8267C4F0();
extern int fn_826EB228();
extern unsigned int lbl_82005B04;


undefined4 * fn_82685408(undefined4 *param_1)

{
  undefined4 uVar1;
  
  param_1[1] = 1;
  param_1[2] = 0x1d;
  *param_1 = &lbl_82005B04;
  param_1[3] = 0;
  uVar1 = fn_826EB228();
  if (param_1[3] != 0) {
    fn_8267C4F0(param_1[3]);
  }
  param_1[3] = uVar1;
  return param_1;
}

