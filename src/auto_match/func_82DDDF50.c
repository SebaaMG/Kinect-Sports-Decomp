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
extern int fn_82DDDED0();
extern int fn_82DE2BC8();
extern unsigned int lbl_82134508;
extern unsigned int lbl_82142CD0;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
fn_82DDDF50(undefined4 *param_1,int param_2,undefined8 param_3,undefined4 *param_4,
             undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar4;
  undefined8 uVar3;
  
  *param_5 = 0;
  uVar2 = lbl_82142CD0;
  uVar1 = lbl_82134508;
  *param_4 = 0;
  *param_1 = uVar2;
  param_1[1] = uVar1;
  iVar4 = fn_82DDDED0(param_2,param_3,param_1,param_1 + 1);
  *(int *)(param_2 + 0x44) = iVar4;
  if (iVar4 == 1) {
    uVar3 = fn_82DE2BC8(param_1,param_2,param_3,param_4,param_5);
  }
  else {
    uVar3 = 2;
  }
  return uVar3;
}

