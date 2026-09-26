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
extern unsigned int *auStack_60;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_8223B688();
extern int fn_82868378();
extern int fn_8286DA10();
extern int fn_82FE6898();


undefined8
fn_8287B888(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
             undefined4 *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_60 [32];
  undefined1 auStack_40 [40];
  
  *(undefined4 *)(param_1 + 0x30) = *param_3;
  *(undefined4 *)(param_1 + 0x34) = param_3[1];
  *(float *)(param_1 + 0x38) = -(float)param_3[2];
  *(undefined4 *)(param_1 + 0x3c) = *param_4;
  *(undefined4 *)(param_1 + 0x40) = param_4[1];
  *(float *)(param_1 + 0x44) = -(float)param_4[2];
  *(undefined4 *)(param_1 + 0x48) = *param_2;
  *(undefined4 *)(param_1 + 0x4c) = param_2[1];
  *(float *)(param_1 + 0x50) = -(float)param_2[2];
  *(undefined4 *)(param_1 + 0x54) = *param_5;
  *(undefined4 *)(param_1 + 0x58) = param_5[1];
  *(undefined4 *)(param_1 + 0x5c) = param_5[2];
  uVar1 = fn_82FE6898(param_1 + 0x30,*(undefined4 *)(param_1 + 0x2c));
  if ((int)uVar1 == 1) {
    uVar1 = 0x20250000;
  }
  else {
    fn_82230110(auStack_60,0xffffffff82022da8);
    uVar2 = fn_8223B688(auStack_40,auStack_60);
    uVar3 = fn_82868378();
    fn_8286DA10(uVar3,uVar2,uVar1);
    fn_82230300(auStack_60,1,0);
    uVar1 = 0xffffffffa0250000;
  }
  return uVar1;
}

