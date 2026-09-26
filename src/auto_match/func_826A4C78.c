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
extern unsigned int *auStack_20;
extern int fn_826A4620();
extern int fn_826BF638();
extern unsigned int lbl_82006F24;
extern unsigned int lbl_82006F28;
extern unsigned int lbl_82006F7C;


undefined4 * fn_826A4C78(undefined4 *param_1,undefined8 param_2)

{
  undefined1 auStack_20 [8];
  
  fn_826A4620();
  *param_1 = &lbl_82006F7C;
  param_1[4] = &lbl_82006F28;
  param_1[0x12] = &lbl_82006F24;
  auStack_20[0] = 1;
  fn_826BF638(param_1 + 0x12,param_1,param_2,0xffffffff82006dc8,auStack_20);
  return param_1;
}

