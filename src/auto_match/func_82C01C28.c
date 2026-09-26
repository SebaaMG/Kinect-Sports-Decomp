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
extern int fn_8265C940();


undefined8 fn_82C01C28(int *param_1,int *param_2)

{
  undefined8 uVar1;
  int iVar2;
  
  uVar1 = (**(code **)(*param_1 + 0x3c))();
  if (-1 < (int)uVar1) {
    iVar2 = fn_8265C940(0x10000,0x208c801d);
    param_1[0x83] = iVar2;
    if (iVar2 == 0) {
      uVar1 = 0xffffffff8007000e;
    }
    else {
      param_1[0x1c] = param_2[2];
      param_1[0x1d] = param_2[3];
      param_1[0x1e] = param_2[5];
      param_1[0x89] = param_2[4];
      if (param_2[6] != 0) {
        param_1[0x7f] = param_2[6];
      }
      if (*param_2 != 0) {
        uVar1 = (**(code **)(*param_1 + 0x44))(param_1);
      }
      if (-1 < (int)uVar1) {
        if (param_2[1] != 0) {
          uVar1 = (**(code **)(*param_1 + 0x48))(param_1);
        }
        if (-1 < (int)uVar1) {
          return uVar1;
        }
      }
    }
  }
  (**(code **)(*param_1 + 0x3c))(param_1);
  return uVar1;
}

