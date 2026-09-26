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
extern int fn_8267C4F0();
extern unsigned int lbl_82005BA8;
extern unsigned int uStack_20;
extern unsigned int uStack_24;
extern unsigned int uStack_28;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


undefined4 * fn_82688058(undefined4 *param_1,int *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  param_1[1] = 1;
  *param_1 = &lbl_82005BA8;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  (**(code **)(*param_2 + 0x10))(param_2,&uStack_40,0xffffffff82005b84,9);
  uVar1 = uStack_40;
  if (param_1[2] != 0) {
    fn_8267C4F0();
  }
  uVar2 = uStack_3c;
  param_1[2] = uVar1;
  if (param_1[3] != 0) {
    fn_8267C4F0();
  }
  uVar1 = uStack_38;
  param_1[3] = uVar2;
  if (param_1[4] != 0) {
    fn_8267C4F0();
  }
  uVar2 = uStack_34;
  param_1[4] = uVar1;
  if (param_1[5] != 0) {
    fn_8267C4F0();
  }
  uVar1 = uStack_30;
  param_1[5] = uVar2;
  if (param_1[6] != 0) {
    fn_8267C4F0();
  }
  uVar2 = uStack_2c;
  param_1[6] = uVar1;
  if (param_1[7] != 0) {
    fn_8267C4F0();
  }
  uVar1 = uStack_28;
  param_1[7] = uVar2;
  if (param_1[8] != 0) {
    fn_8267C4F0();
  }
  uVar2 = uStack_24;
  param_1[8] = uVar1;
  if (param_1[9] != 0) {
    fn_8267C4F0();
  }
  uVar1 = uStack_20;
  param_1[9] = uVar2;
  if (param_1[10] != 0) {
    fn_8267C4F0();
  }
  param_1[10] = uVar1;
  return param_1;
}

