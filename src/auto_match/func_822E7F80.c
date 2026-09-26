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
extern unsigned int *auStack_58;
extern unsigned int *auStack_60;
extern int fn_822315A0();
extern int fn_82365BD8();
extern unsigned int lbl_821AD588;
extern unsigned int lbl_821ADF3C;
extern unsigned int lbl_821AE3FC;


undefined4 *
fn_822E7F80(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5,undefined8 param_6,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [88];
  
  param_1[1] = 1;
  *param_1 = &lbl_821AD588;
  param_1[2] = 1;
  puVar3 = param_1 + 3;
  if (puVar3 != (undefined4 *)0x0) {
    iVar1 = fn_82365BD8(auStack_60,param_6);
    iVar2 = fn_82365BD8(auStack_58,iVar1);
    param_1[5] = param_2;
    param_1[6] = param_3;
    param_1[4] = 3;
    *puVar3 = &lbl_821ADF3C;
    param_1[7] = param_4;
    param_1[8] = param_5;
    fn_82365BD8(param_1 + 9,iVar2);
    param_1[0xb] = param_7;
    if (*(int *)(iVar2 + 4) != 0) {
      fn_822315A0();
    }
    *puVar3 = &lbl_821AE3FC;
    if (*(int *)(iVar1 + 4) != 0) {
      fn_822315A0();
    }
  }
  return param_1;
}

