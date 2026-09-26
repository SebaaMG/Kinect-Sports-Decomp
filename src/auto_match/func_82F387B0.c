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
extern int fn_82F377E8();
extern int fn_82F37AA8();
extern int fn_82F382F0();


longlong fn_82F387B0(int param_1,undefined8 param_2,undefined8 param_3,int *param_4)

{
  int *piVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  int *apiStack_30 [12];
  
  lVar3 = fn_82F382F0();
  piVar2 = apiStack_30[0];
  if (-1 < lVar3) {
    if (param_4 != (int *)0x0) {
      fn_82F377E8(param_1 + 8,apiStack_30[0],apiStack_30);
      piVar1 = (int *)*apiStack_30[0];
      *param_4 = (int)piVar1;
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 4))();
      }
    }
    iVar4 = param_1 + 8;
    fn_82F377E8(iVar4,piVar2,apiStack_30);
    if (*apiStack_30[0] != 0) {
      fn_82F377E8(iVar4,piVar2,apiStack_30);
      (**(code **)(*(int *)*apiStack_30[0] + 8))();
    }
    if (((int)piVar2 + 1U <= *(uint *)(param_1 + 0x70)) &&
       (iVar4 = fn_82F37AA8(iVar4,piVar2), -1 < iVar4)) {
      *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + -1;
    }
  }
  return lVar3;
}

