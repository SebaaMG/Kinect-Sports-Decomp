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


ulonglong fn_8267E228(undefined4 *param_1,uint param_2)

{
  int *piVar1;
  char cVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  if (param_2 != 0) {
    do {
      piVar1 = (int *)(**(code **)(*(int *)*param_1 + 8))();
      cVar2 = (**(code **)(*piVar1 + 8))();
      if (cVar2 != '\0') {
        (**(code **)(*piVar1 + 0xc))(piVar1);
        return uVar3;
      }
      uVar3 = uVar3 + 1;
      param_1 = param_1 + 1;
    } while ((uVar3 & 0xffffffff) < (ulonglong)param_2);
  }
  return 0xffffffffffffffff;
}

