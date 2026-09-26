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
extern int fn_82696AD0();
extern int fn_82696B20();
extern int fn_826C3768();
extern unsigned int iStack_4c;
extern unsigned int iStack_50;
extern unsigned int lbl_8200579C;


undefined4 *
fn_8269DFA0(undefined4 *param_1,undefined4 param_2,char *param_3,undefined8 param_4,
             undefined4 param_5,undefined4 param_6)

{
  bool bVar1;
  undefined4 uVar3;
  undefined8 uVar2;
  int iStack_50;
  int iStack_4c;
  byte bStack_48;
  
  param_1[1] = param_2;
  *param_1 = &lbl_8200579C;
  uVar3 = fn_82696AD0(param_3,param_4);
  param_1[2] = uVar3;
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[6] = (int)param_4;
  param_1[7] = param_5;
  param_1[8] = param_6;
  if ((*param_3 == '\b') || (bVar1 = false, *param_3 == '\v')) {
    bVar1 = true;
  }
  if (bVar1) {
    uVar2 = fn_82696B20(&iStack_50,param_3,param_4);
    fn_826C3768(param_1 + 3,uVar2);
    if (((bStack_48 & 2) == 0) && (iStack_50 != 0)) {
      fn_826824B0();
    }
    iStack_50 = 0;
    if (((bStack_48 & 1) == 0) && (iStack_4c != 0)) {
      fn_826824B0();
    }
  }
  return param_1;
}

