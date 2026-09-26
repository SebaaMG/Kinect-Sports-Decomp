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
extern int fn_82C00008();


undefined8 fn_82BFEB90(int *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  int *piStack_30;
  int *apiStack_2c [11];
  
  apiStack_2c[0] = (int *)0x0;
  piStack_30 = (int *)0x0;
  uVar1 = (**(code **)(*param_1 + 0x74))(param_1,apiStack_2c);
  if (-1 < (int)uVar1) {
    if (apiStack_2c[0] != (int *)0x0) {
      uVar1 = (**(code **)(*apiStack_2c[0] + 0x40))(apiStack_2c[0],0,&piStack_30,0);
    }
    if ((-1 < (int)uVar1) && (piStack_30 != (int *)0x0)) {
      uVar1 = fn_82C00008(piStack_30,param_2);
    }
  }
  if (apiStack_2c[0] != (int *)0x0) {
    (**(code **)(*apiStack_2c[0] + 8))(apiStack_2c[0]);
    apiStack_2c[0] = (int *)0x0;
  }
  if (piStack_30 != (int *)0x0) {
    (**(code **)(*piStack_30 + 8))(piStack_30);
  }
  return uVar1;
}

