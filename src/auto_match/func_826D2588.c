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
extern int fn_8269AEB8();
extern int fn_8269FD90();
extern int fn_826D2290();


ulonglong fn_826D2588(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5)

{
  char cVar3;
  undefined8 uVar1;
  ulonglong uVar2;
  
  cVar3 = fn_8269AEB8(param_3,0);
  if (cVar3 != '\0') {
    uVar1 = fn_8269FD90(param_1 + -0x68,param_3);
    cVar3 = (**(code **)(*(int *)(param_1 + -0x68) + 0xfc))(param_1 + -0x68,uVar1,param_4,0);
    if (cVar3 != '\0') {
      return 1;
    }
  }
  if ((*(int *)(param_1 + 0x148) != 0) ||
     (uVar2 = fn_826D2290(param_1 + -0x68), (uVar2 & 0xffffffff) != 0)) {
    uVar2 = (**(code **)(*(int *)(*(int *)(param_1 + 0x148) + 0x10) + 0x28))
                      (*(int *)(param_1 + 0x148) + 0x10,param_2,param_3,param_4,param_5);
  }
  return uVar2;
}

