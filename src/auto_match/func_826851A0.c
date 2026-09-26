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


undefined8 fn_826851A0(int *param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar2;
  undefined8 uVar1;
  char cVar3;
  
  piVar2 = (int *)(**(code **)(*param_1 + 4))();
  if (piVar2 == (int *)0x0) {
    uVar1 = 0;
  }
  else {
    cVar3 = (**(code **)(*piVar2 + 0x28))(piVar2);
    if (cVar3 == '\0') {
      uVar1 = (**(code **)(*param_1 + 0x10))(param_1,piVar2,param_3);
    }
    else {
      uVar1 = 0;
    }
    (**(code **)*piVar2)(piVar2,1);
  }
  return uVar1;
}

