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
extern int fn_824CC840();
extern int fn_824CD030();
extern int fn_824E10D0();
extern int fn_824E1C78();
extern int fn_8265C9E0();
extern float lbl_821954EC;
extern unsigned int lbl_821C1148;
extern unsigned int lbl_821C1170;
extern unsigned int lbl_821C1194;


undefined4 * fn_824E1200(undefined4 *param_1,undefined8 param_2)

{
  ulonglong uVar1;
  undefined4 uVar2;
  int iVar3;
  
  fn_824CC840();
  uVar2 = 0;
  *(undefined1 *)(param_1 + 0x38) = 1;
  param_1[0x3d] = 0;
  param_1[0x3c] = &lbl_821C1194;
  param_1[0x3e] = 0;
  *param_1 = &lbl_821C1148;
  param_1[0x3c] = &lbl_821C1170;
  uVar1 = fn_8265C9E0(0xc0);
  if ((uVar1 & 0xffffffff) != 0) {
    uVar2 = fn_824E10D0(uVar1,param_2);
  }
  param_1[0x3f] = uVar2;
  iVar3 = fn_824CD030(param_1);
  if (iVar3 != 0) {
    fn_824E1C78(param_1);
  }
  *(float *)(param_1[8] + 0x10) = *(float *)(param_1[0x3f] + 0x68) * lbl_821954EC;
  return param_1;
}

