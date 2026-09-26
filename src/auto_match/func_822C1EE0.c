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
extern int fn_822C5B18();
extern int fn_82359C18();
extern unsigned int lbl_821A8D8C;
extern unsigned int lbl_821ACE14;
extern unsigned int lbl_821B0928;
extern unsigned int uStack_84;
extern unsigned int uStack_88;
extern unsigned int uStack_8c;


undefined4 *
fn_822C1EE0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
             undefined4 *param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *in_stack_00000054;
  undefined4 *in_stack_0000005c;
  undefined **ppuStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined ***pppuStack_80;
  
  param_1[1] = 1;
  *param_1 = &lbl_821A8D8C;
  param_1[2] = 1;
  if (param_1 + 4 != (undefined4 *)0x0) {
    uVar1 = *param_5;
    uStack_8c = *in_stack_00000054;
    uStack_88 = in_stack_00000054[1];
    pppuStack_80 = &ppuStack_90;
    uStack_84 = in_stack_00000054[2];
    uVar2 = *in_stack_0000005c;
    param_1[7] = param_2;
    param_1[5] = 4;
    param_1[6] = param_3;
    param_1[4] = &lbl_821B0928;
    param_1[8] = *param_4;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = uVar1;
    param_1[0xc] = param_6;
    param_1[0xd] = param_7;
    param_1[0xe] = 2;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    ppuStack_90 = &lbl_821ACE14;
    param_1[0x12] = 0;
    param_1[0x13] = param_8;
    fn_822C5B18(param_1 + 0x14,&ppuStack_90);
    param_1[0x1a] = uVar2;
    fn_82359C18(&ppuStack_90);
  }
  return param_1;
}

