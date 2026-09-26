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
extern unsigned int *auStack_60;
extern int fn_822C5B18();
extern int fn_82359C18();
extern int fn_824791D0();
extern unsigned int lbl_821A8D8C;
extern unsigned int lbl_821BD014;
extern unsigned int lbl_821BD4BC;
extern unsigned int lbl_821CC160;
extern unsigned int uStack_7c;


undefined4 *
fn_8247B498(undefined4 *param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4,
             undefined8 param_5,undefined4 *param_6,undefined8 param_7)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined **ppuStack_80;
  undefined4 uStack_7c;
  undefined ***pppuStack_70;
  undefined1 auStack_60 [96];
  
  param_1[1] = 1;
  *param_1 = &lbl_821A8D8C;
  param_1[2] = 1;
  if (param_1 + 4 != (undefined4 *)0x0) {
    uStack_7c = *param_6;
    uVar1 = *param_3;
    param_1[7] = lbl_821CC160;
    pppuStack_70 = &ppuStack_80;
    param_1[5] = 8;
    ppuStack_80 = &lbl_821BD4BC;
    param_1[6] = 0;
    param_1[4] = &lbl_821BD014;
    uVar2 = fn_822C5B18(auStack_60,&ppuStack_80);
    fn_824791D0(param_1 + 8,param_2,uVar1,param_4,param_5,uVar2,param_7);
    fn_82359C18(&ppuStack_80);
  }
  return param_1;
}

