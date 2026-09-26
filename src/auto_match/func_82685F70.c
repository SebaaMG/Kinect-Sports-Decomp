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
extern unsigned int *auStack_40;
extern int fn_8267B890();
extern int fn_8267C2D8();
extern int fn_82685D28();
extern int fn_826EEFE8();
extern unsigned int lbl_82005B40;
extern unsigned int lbl_831E7E64;


undefined4 * fn_82685F70(undefined4 *param_1,char param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  uint auStack_40 [10];
  
  *param_1 = &lbl_82005B40;
  auStack_40[0] = -(uint)(param_2 != '\0') & 0x1000;
  param_1[1] = 1;
  param_1[2] = 0x10;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  auStack_40[1] = 0x20;
  auStack_40[2] = 0x10000;
  auStack_40[3] = 0;
  auStack_40[4] = 0xffffffff;
  auStack_40[5] = 0;
  auStack_40[7] = 0;
  auStack_40[6] = 5;
  uVar1 = fn_8267C2D8(lbl_831E7E64,0xffffffff82005b48,auStack_40);
  param_1[3] = (int)uVar1;
  uVar2 = fn_8267B890(uVar1,0x3b4,0);
  if ((uVar2 & 0xffffffff) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = fn_826EEFE8(uVar2,param_1[3]);
  }
  param_1[4] = uVar3;
  uVar2 = fn_8267B890(param_1[3],0x8c,0);
  if ((uVar2 & 0xffffffff) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = fn_82685D28(uVar2,param_1[3]);
  }
  param_1[5] = uVar3;
  return param_1;
}

