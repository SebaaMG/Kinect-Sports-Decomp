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
extern int fn_82CED308();
extern unsigned int lbl_82139E94;


undefined4 * fn_82D93708(undefined4 *param_1,undefined8 param_2)

{
  char cVar1;
  
  *param_1 = &lbl_82139E94;
  cVar1 = (char)param_1;
  if ((int)param_2 != 0) {
    *(undefined2 *)(param_1 + 0x14) = 0;
    *(undefined2 *)((int)param_1 + 0x52) = 0;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    param_1[0xc] = 1;
    param_1[0x10] = 0;
    *(char *)((int)param_1 + 0x29) = (cVar1 + '\x10') - (cVar1 + '$');
  }
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0x80000000;
  param_1[0x1b] = 0xffffffd1;
  *(undefined2 *)(param_1 + 0x1c) = 0;
  fn_82CED308(param_1 + 0x1d,param_2);
  if ((int)param_2 != 0) {
    *(char *)(param_1 + 8) = cVar1 - (cVar1 + '\x10');
  }
  return param_1;
}

