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
extern int fn_8267C5B0();
extern int fn_826829A0();
extern int fn_826A71D8();
extern int fn_826C0910();
extern unsigned int lbl_8200F6F0;
extern unsigned int lbl_8200F744;


undefined4 * fn_82718B40(undefined4 *param_1,undefined8 param_2,int *param_3)

{
  undefined8 uVar1;
  undefined4 uVar3;
  longlong lVar2;
  
  uVar1 = fn_826A71D8(param_2);
  fn_826C0910(param_1,uVar1);
  *param_1 = &lbl_8200F744;
  param_1[4] = &lbl_8200F6F0;
  if (param_3 == (int *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = fn_8267C5B0(param_3);
  }
  param_1[0xc] = uVar3;
  lVar2 = (**(code **)(*param_3 + 0x5c))(param_3);
  fn_826829A0(param_1 + 4,lVar2 + 0x78,param_3[0x1b]);
  return param_1;
}

