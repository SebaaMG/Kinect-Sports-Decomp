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


undefined8
fn_82E59440(undefined4 *param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  undefined8 uVar1;
  int iVar2;
  int *piStack_30;
  int *apiStack_2c [11];
  
  if ((param_1 == (undefined4 *)0x0) || ((param_4 & 0xffffffff) == 0)) {
    uVar1 = 0xffffffff80070057;
  }
  else {
    piStack_30 = (int *)0x0;
    uVar1 = (**(code **)*param_1)(param_1,0xffffffff82154c18,&piStack_30);
    if (-1 < (int)uVar1) {
      apiStack_2c[0] = (int *)0x0;
      iVar2 = (**(code **)(*piStack_30 + 0x10))(piStack_30,param_2,0,apiStack_2c);
      if (piStack_30 != (int *)0x0) {
        (**(code **)(*piStack_30 + 8))(piStack_30);
        piStack_30 = (int *)0x0;
      }
      if (iVar2 < 0) {
        uVar1 = 0xffffffffc00d36d5;
      }
      else {
        uVar1 = (**(code **)*apiStack_2c[0])(apiStack_2c[0],param_3,param_4);
        if (apiStack_2c[0] != (int *)0x0) {
          (**(code **)(*apiStack_2c[0] + 8))(apiStack_2c[0]);
        }
      }
    }
  }
  return uVar1;
}

