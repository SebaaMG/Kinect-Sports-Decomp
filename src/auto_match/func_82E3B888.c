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
extern int fn_82E627B8();


longlong fn_82E3B888(int *param_1,ulonglong param_2,int *param_3)

{
  longlong lVar1;
  int *apiStack_40 [2];
  longlong lStack_38;
  longlong alStack_30 [6];
  
  if (((param_2 & 0xffffffff) == 0) || (param_3 == (int *)0x0)) {
    lVar1 = -0x7fffbffd;
  }
  else {
    apiStack_40[0] = (int *)0x0;
    lStack_38 = 0;
    lVar1 = (**(code **)(*param_1 + 0x18))(param_1,param_2,&lStack_38);
    if (-1 < lVar1) {
      alStack_30[0] = 0;
      lVar1 = (**(code **)(*param_1 + 0x38))(param_1,alStack_30);
      if (-1 < lVar1) {
        lStack_38 = alStack_30[0] + lStack_38;
        lVar1 = (**(code **)(*param_3 + 0x10))(param_3,0xffffffff82154aa8,0,apiStack_40);
        if (-1 < lVar1) {
          lVar1 = fn_82E627B8(apiStack_40[0],lStack_38);
        }
      }
    }
    if (apiStack_40[0] != (int *)0x0) {
      (**(code **)(*apiStack_40[0] + 8))();
    }
  }
  return lVar1;
}

