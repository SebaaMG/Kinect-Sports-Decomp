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
extern int fn_82E50BE8();
extern int fn_82EE7DF8();


undefined8 fn_82E59E00(undefined4 *param_1)

{
  undefined8 uVar1;
  int iVar2;
  int *piVar3;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar1 = 0xffffffff80070057;
  }
  else {
    piVar3 = (int *)0x0;
    *param_1 = 0;
    iVar2 = fn_82E50BE8(0x118,0,0,0,0);
    if (iVar2 != 0) {
      piVar3 = (int *)fn_82EE7DF8();
    }
    if (piVar3 == (int *)0x0) {
      uVar1 = 0xffffffff8007000e;
    }
    else {
      uVar1 = (**(code **)*piVar3)(piVar3,0xffffffff82154c08,param_1);
      (**(code **)(*piVar3 + 8))(piVar3);
    }
  }
  return uVar1;
}

