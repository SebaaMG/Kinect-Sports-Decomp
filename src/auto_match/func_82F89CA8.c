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
extern int fn_82F89E28();
extern int fn_82F8A9B0();
extern int fn_82F8BF40();
extern unsigned int uStack_28;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;
extern unsigned int uStack_44;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


undefined8
fn_82F89CA8(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  uStack_40 = *param_2;
  uStack_30 = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_50 = param_3;
  uStack_4c = param_4;
  uStack_44 = param_1;
  uVar1 = fn_82F8BF40(&uStack_50,param_5,0xffffffff8200d654,0x38);
  if ((int)uVar1 == 0) {
    uVar2 = fn_82F89E28(&uStack_50,4);
    if ((int)uVar2 == 1) {
      *param_2 = uStack_3c;
      uVar1 = fn_82F8A9B0(&uStack_50);
    }
    else {
      fn_82F8A9B0(&uStack_50);
      uVar1 = 0xfffffffffffffffb;
      if ((int)uVar2 != 0) {
        uVar1 = uVar2;
      }
    }
  }
  return uVar1;
}

