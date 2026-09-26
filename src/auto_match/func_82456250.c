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
extern int fn_824560A0();
extern int fn_8252CAF8();
extern int fn_825327A8();


void fn_82456250(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  
  if (param_2 == 1) {
    puVar3 = param_1 + 1;
    if (0xf < (uint)param_1[6]) {
      puVar3 = (undefined4 *)*puVar3;
    }
    fn_825327A8(*param_1,puVar3);
    fn_8252CAF8(*param_1,1,0);
    param_1[0xf] = 1;
    puVar3 = param_1 + 0x1c;
    if (0xf < (uint)param_1[0x21]) {
      puVar3 = (undefined4 *)*puVar3;
    }
    fn_825327A8(param_1[0x1b],puVar3);
    fn_8252CAF8(param_1[0x1b],1,0);
    param_1[0x2a] = 1;
    puVar3 = param_1 + 0x37;
    if (0xf < (uint)param_1[0x3c]) {
      puVar3 = (undefined4 *)*puVar3;
    }
    fn_825327A8(param_1[0x36],puVar3);
    fn_8252CAF8(param_1[0x36],1,0);
    param_1[0x45] = 1;
  }
  else if (param_2 == 2) {
    if (param_1[0x54] == 0) {
      fn_824560A0(param_1,param_1[0x52],0,param_1[0x55],1,param_1[0x56]);
      fn_824560A0(param_1 + 0x1b,param_1[0x52],1,param_1[0x55],1,param_1[0x56]);
      uVar2 = 0;
    }
    else {
      if (param_1[0x57] == 0) {
        uVar1 = param_1[0x53];
      }
      else {
        uVar1 = param_1[0x52];
      }
      fn_824560A0(param_1,uVar1,0,param_1[0x55],param_1[0x57],param_1[0x56]);
      if (param_1[0x57] == 0) {
        uVar1 = param_1[0x52];
      }
      else {
        uVar1 = param_1[0x53];
      }
      fn_824560A0(param_1 + 0x1b,uVar1,0,param_1[0x55],param_1[0x57] == 0,param_1[0x56]);
      uVar2 = 1;
    }
    fn_824560A0(param_1 + 0x36,param_1[0x52],uVar2,param_1[0x55],1,param_1[0x56]);
  }
  param_1[0x51] = param_2;
  return;
}

