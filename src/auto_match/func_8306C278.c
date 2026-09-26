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
extern unsigned int *auStack_70;
extern int fn_82A2B760();
extern unsigned int lbl_8315D3D0;
extern unsigned int uStack_50;
extern unsigned int uStack_58;
extern unsigned int uStack_60;


undefined8
fn_8306C278(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  int iVar2;
  undefined8 uVar1;
  undefined1 auStack_70 [16];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  iVar2 = (**(code **)(lbl_8315D3D0 + 0x20))(param_1,auStack_70,&uStack_60,0x38,0x22);
  if (iVar2 < 0) {
    fn_82A2B760();
    uVar1 = 0;
  }
  else {
    if (param_2 != (undefined8 *)0x0) {
      *param_2 = uStack_60;
    }
    if (param_3 != (undefined8 *)0x0) {
      *param_3 = uStack_58;
    }
    if (param_4 != (undefined8 *)0x0) {
      *param_4 = uStack_50;
    }
    uVar1 = 1;
  }
  return uVar1;
}

