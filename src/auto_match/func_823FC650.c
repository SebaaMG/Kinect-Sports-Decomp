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
extern unsigned int *auStack_48;
extern unsigned int *auStack_50;
extern unsigned int *auStack_58;
extern unsigned int *auStack_60;
extern int fn_822315A0();
extern int fn_82365BD8();
extern unsigned int lbl_821AD588;
extern unsigned int lbl_821B7354;


undefined4 *
fn_823FC650(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [72];
  
  param_1[1] = 1;
  *param_1 = &lbl_821AD588;
  param_1[2] = 1;
  if (param_1 + 3 != (undefined4 *)0x0) {
    iVar1 = fn_82365BD8(auStack_60,param_5);
    iVar2 = fn_82365BD8(auStack_58,param_4);
    iVar3 = fn_82365BD8(auStack_50,param_3);
    iVar4 = fn_82365BD8(auStack_48,param_2);
    param_1[4] = 0;
    param_1[3] = &lbl_821B7354;
    fn_82365BD8(param_1 + 9,iVar4);
    fn_82365BD8(param_1 + 0xb,iVar3);
    fn_82365BD8(param_1 + 0xd,iVar2);
    fn_82365BD8(param_1 + 0xf,iVar1);
    if (*(int *)(iVar4 + 4) != 0) {
      fn_822315A0();
    }
    if (*(int *)(iVar3 + 4) != 0) {
      fn_822315A0();
    }
    if (*(int *)(iVar2 + 4) != 0) {
      fn_822315A0();
    }
    if (*(int *)(iVar1 + 4) != 0) {
      fn_822315A0();
    }
  }
  return param_1;
}

