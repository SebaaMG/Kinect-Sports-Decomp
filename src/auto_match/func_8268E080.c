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
extern int fn_8268DB10();
extern int fn_8268DB68();
extern int fn_8268E008();


undefined8 fn_8268E080(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  byte *pbVar4;
  longlong lVar2;
  undefined8 uVar3;
  
  pbVar4 = (byte *)fn_8268E008(param_2);
  piVar1 = *(int **)((uint)*pbVar4 * 4 + -0x7ceaad00);
  lVar2 = fn_8268DB10(param_1,param_2);
  if (lVar2 == 0) {
    uVar3 = (**(code **)(*piVar1 + 0x10))(piVar1);
    lVar2 = fn_8268DB68(param_1,param_2,uVar3);
    if (lVar2 == 0) {
      return 0;
    }
    (**(code **)(*piVar1 + 0x14))(piVar1,lVar2);
  }
  (**(code **)(*piVar1 + 0x18))(piVar1,lVar2,param_3);
  return 1;
}

