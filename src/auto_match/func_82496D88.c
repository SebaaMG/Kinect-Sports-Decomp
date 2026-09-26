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
extern int fn_8248F890();
extern int fn_82497430();
extern unsigned int lbl_821BEBB0;
extern unsigned int lbl_821BEF18;
extern unsigned int lbl_821BEF34;
extern unsigned int lbl_821CA460;
extern unsigned int uStack_30;


undefined4 * fn_82496D88(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined2 uStack_30;
  
  *param_1 = &lbl_821BEF34;
  param_1[2] = 0;
  param_1[1] = &lbl_821BEBB0;
  param_1[9] = 0;
  *(undefined2 *)(param_1 + 10) = uStack_30;
  param_1[0xc] = 0;
  uVar1 = fn_8248F890(0x30);
  param_1[0xb] = uVar1;
  *(undefined4 *)uVar1 = uVar1;
  *(undefined4 *)(param_1[0xb] + 4) = param_1[0xb];
  uVar1 = lbl_821CA460;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x14] = uVar1;
  fn_82497430(param_1 + 10,8);
  param_1[0x15] = param_2;
  param_1[0x16] = 0;
  *param_1 = &lbl_821BEF18;
  return param_1;
}

