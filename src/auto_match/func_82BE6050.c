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
extern int fn_82BE5240();
extern unsigned int lbl_831751D0;


undefined8 fn_82BE6050(int *param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = (int)param_2;
  if (iVar2 < 1) {
    uVar3 = 0xffffffff820e9498;
  }
  else if ((param_1[7] == 0) || (param_1[10] < 1)) {
    if ((param_1[6] == 1) && (iVar1 = (**(code **)(*param_1 + 0xc))(param_1), iVar1 < iVar2)) {
      uVar3 = 0xffffffff820e9418;
    }
    else {
      iVar1 = (*(code *)lbl_831751D0)(param_2);
      param_1[7] = iVar1;
      param_1[8] = 0;
      param_1[9] = 0;
      if (iVar1 != 0) {
        param_1[10] = iVar2;
        return 1;
      }
      param_1[7] = 0;
      param_1[10] = 0;
      uVar3 = 0xffffffff820e93f0;
    }
  }
  else {
    uVar3 = 0xffffffff820e9450;
  }
  fn_82BE5240(param_1,0x65,uVar3);
  return 0;
}

