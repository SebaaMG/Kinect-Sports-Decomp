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
extern int fn_822315A0();
extern int fn_827D50C0();


undefined8
fn_827DAB30(undefined4 *param_1,undefined4 *param_2,int param_3,undefined4 *param_4,
             undefined8 param_5)

{
  int iVar2;
  undefined8 uVar1;
  undefined4 *puStack0000002c;
  
  puStack0000002c = param_4;
  iVar2 = (**(code **)(*(int *)*param_1 + 4))((int *)*param_1,param_2,param_5);
  if (iVar2 == 0) {
    if (param_4[1] != 0) {
      fn_822315A0();
    }
    uVar1 = 0;
  }
  else {
    if (param_3 != 0) {
      fn_827D50C0(*param_4,0x45b);
    }
    if (param_2 != (undefined4 *)0x0) {
      (**(code **)*param_2)(param_2,1);
    }
    if (param_4[1] != 0) {
      fn_822315A0();
    }
    uVar1 = 0x45b;
  }
  return uVar1;
}

