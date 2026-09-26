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
extern int fn_82EE9D60();
extern int fn_82EEA560();
extern int fn_8306C5D0();
extern unsigned int lbl_8215FFD0;


undefined4 * fn_82EE9568(undefined4 *param_1,undefined8 param_2,undefined4 *param_3)

{
  int iVar1;
  
  fn_82EEA560(param_1,param_3);
  param_1[0x1b] = 0;
  *param_1 = &lbl_8215FFD0;
  param_1[0x1c] = 0;
  fn_82EE9D60(param_1 + 0x1e,param_2);
  param_1[0x426] = 0;
  param_1[0x428] = param_1 + 0x427;
  param_1[0x427] = param_1 + 0x427;
  param_1[0x429] = 1;
  param_1[0x42a] = 10;
  param_1[0x42b] = 0;
  RtlInitializeCriticalSection(param_1 + 0x14);
  iVar1 = fn_8306C5D0(0xffffffffffffffff,0,0,param_1[0x1b]);
  param_1[0x1c] = iVar1;
  if (iVar1 == 0) {
    *param_3 = 0x8000ffff;
  }
  param_1[0x1d] = (int)param_2;
  return param_1;
}

