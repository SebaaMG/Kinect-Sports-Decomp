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
extern unsigned int *auStack_50;
extern int fn_82279768();
extern int fn_822C5B18();
extern int fn_82359C18();
extern unsigned int lbl_821A8D8C;
extern unsigned int lbl_821BC360;
extern unsigned int lbl_821BC7A0;
extern unsigned int uStack_6c;


undefined4 *
fn_824714C8(undefined4 *param_1,undefined8 param_2,undefined4 *param_3,undefined4 *param_4,
             undefined4 *param_5,undefined4 *param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  undefined **ppuStack_70;
  undefined4 uStack_6c;
  undefined ***pppuStack_60;
  undefined1 auStack_50 [80];
  
  param_1[1] = 1;
  *param_1 = &lbl_821A8D8C;
  puVar5 = param_1 + 4;
  param_1[2] = 1;
  if (puVar5 != (undefined4 *)0x0) {
    uStack_6c = *param_6;
    pppuStack_60 = &ppuStack_70;
    uVar1 = *param_5;
    uVar2 = *param_4;
    ppuStack_70 = &lbl_821BC7A0;
    uVar3 = *param_3;
    uVar4 = fn_822C5B18(auStack_50,&ppuStack_70);
    fn_82279768(puVar5,param_2,uVar3,1,1,uVar4,0,1);
    param_1[0x50] = uVar2;
    param_1[0x51] = uVar1;
    *puVar5 = &lbl_821BC360;
    fn_82359C18(&ppuStack_70);
  }
  return param_1;
}

