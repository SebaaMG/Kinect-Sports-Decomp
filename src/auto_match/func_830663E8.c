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
extern int fn_83066088();
extern int fn_83068650();


undefined8 fn_830663E8(int *param_1)

{
  longlong lVar1;
  int *piVar3;
  undefined8 uVar2;
  
  piVar3 = (int *)*param_1;
  if (piVar3 == (int *)0x0) {
    lVar1 = (**(code **)(*(int *)param_1[3] + 4))((int *)param_1[3],param_1[5]);
    if ((int)lVar1 <= param_1[5]) {
      return 0;
    }
    fn_83066088(param_1,lVar1 - (ulonglong)(uint)param_1[5]);
    piVar3 = (int *)*param_1;
    if (piVar3 == (int *)0x0) {
      return 0;
    }
    *param_1 = *piVar3;
  }
  else {
    *param_1 = *piVar3;
  }
  param_1[5] = param_1[5] + 1;
  if (piVar3 == (int *)0x0) {
    return 0;
  }
  uVar2 = fn_83068650();
  return uVar2;
}

