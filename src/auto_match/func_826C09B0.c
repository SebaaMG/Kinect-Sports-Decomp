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
extern int fn_826824B0();
extern int fn_826A71D8();
extern unsigned int lbl_8200B5A8;
extern unsigned int lbl_82010118;
extern unsigned int lbl_82012A64;


undefined4 * fn_826C09B0(undefined4 *param_1,int *param_2)

{
  undefined4 uVar1;
  
  if (*param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = fn_826A71D8();
  }
  param_1[1] = uVar1;
  param_1[2] = 1;
  param_1[4] = &lbl_8200B5A8;
  param_1[5] = 0;
  *param_1 = &lbl_82012A64;
  param_1[4] = &lbl_82010118;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[10] = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  *(undefined1 *)((int)param_1 + 0x2d) = 0;
  if (param_1[5] != 0) {
    fn_826824B0();
  }
  param_1[5] = 0;
  return param_1;
}

