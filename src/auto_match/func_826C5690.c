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


undefined8 fn_826C5690(int *param_1,undefined8 param_2)

{
  int *piVar1;
  char cVar3;
  undefined8 uVar2;
  
  if ((((((uint)param_1[0x23] >> 4 & 1) != 0) && (param_1[0x6a] < 0)) &&
      (cVar3 = (**(code **)(*param_1 + 0x6c))(), cVar3 == '\0')) &&
     (piVar1 = (int *)param_1[8], piVar1 != (int *)0x0)) {
    uVar2 = (**(code **)(*piVar1 + 0xe8))(piVar1,param_2);
    return uVar2;
  }
  return 0;
}

