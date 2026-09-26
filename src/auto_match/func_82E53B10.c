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
extern int fn_82E50CB8();
extern int fn_82E50F10();
extern int fn_82E53908();
extern int fn_82EE2C00();


longlong fn_82E53B10(int param_1,undefined4 *param_2)

{
  longlong lVar1;
  int *piVar2;
  int *apiStack_40 [16];
  
  fn_82E50CB8(param_1 + 0x18);
  if (param_2 == (undefined4 *)0x0) {
    lVar1 = -0x7fffbffd;
  }
  else {
    *param_2 = 0;
    apiStack_40[0] = (int *)0x0;
    lVar1 = fn_82EE2C00(*(undefined2 *)(param_1 + 0x10),1,param_1 + 0x14,apiStack_40);
    if (-1 < lVar1) {
      piVar2 = (int *)(param_1 + -0x4c);
      lVar1 = (**(code **)(*piVar2 + 0x80))(piVar2,apiStack_40[0]);
      if ((-1 < lVar1) && (lVar1 = fn_82E53908(piVar2,apiStack_40[0]), -1 < lVar1)) {
        *param_2 = apiStack_40[0];
        if (apiStack_40[0] == (int *)0x0) goto LAB_82e53b40;
        (**(code **)(*apiStack_40[0] + 4))();
      }
    }
    if (apiStack_40[0] != (int *)0x0) {
      (**(code **)(*apiStack_40[0] + 8))();
      apiStack_40[0] = (int *)0x0;
    }
  }
LAB_82e53b40:
  fn_82E50F10(param_1 + 0x18);
  return lVar1;
}

