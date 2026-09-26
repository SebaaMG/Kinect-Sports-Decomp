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
extern int fn_82F68CC0();
extern unsigned int lbl_821BEBB0;
extern unsigned int lbl_821BEF50;
extern unsigned int lbl_821BEF6C;
extern unsigned int lbl_821CA460;
extern unsigned int uStack_40;


undefined4 * fn_824978B8(undefined4 *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined2 uStack_40;
  
  *param_1 = &lbl_821BEF6C;
  param_1[2] = 0;
  param_1[1] = &lbl_821BEBB0;
  *(undefined2 *)(param_1 + 9) = uStack_40;
  param_1[0xb] = 0;
  uVar1 = fn_8248F890(0x2c);
  param_1[10] = uVar1;
  *(undefined4 *)uVar1 = uVar1;
  *(undefined4 *)(param_1[10] + 4) = param_1[10];
  uVar1 = lbl_821CA460;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x13] = uVar1;
  fn_82497430(param_1 + 9,8);
  *param_1 = &lbl_821BEF50;
  fn_82F68CC0(param_1 + 0x14,*(undefined4 *)(*param_2 + 4),0x1d0);
  param_1[0x88] = *(undefined4 *)(*(int *)(*param_2 + 0xc) + 0x144);
  param_1[0x89] = *(undefined4 *)(*(int *)(*param_2 + 0xc) + 0x15c);
  param_1[0x8a] = param_4;
  param_1[0x8b] = param_2;
  param_1[0x8c] = param_3;
  param_1[0x8d] = 0;
  return param_1;
}

