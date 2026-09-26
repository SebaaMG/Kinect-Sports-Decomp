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
extern int fn_82F68CC0();


undefined8 fn_82C04CE0(int *param_1,undefined8 param_2,uint param_3,uint *param_4)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = (**(code **)(*param_1 + 0x5c))();
  if (iVar1 == 0) {
    uVar2 = param_1[0xc] - param_1[0xd];
    if (param_3 <= uVar2) {
      *param_4 = param_3;
      goto LAB_82c04d38;
    }
  }
  else {
    uVar2 = 0;
  }
  *param_4 = uVar2;
LAB_82c04d38:
  fn_82F68CC0(param_2,(ulonglong)(uint)param_1[0xb] + (ulonglong)(uint)param_1[0xd],*param_4);
  param_1[0xd] = param_1[0xd] + *param_4;
  return 0;
}

