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
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern int fn_82E49060();
extern int fn_82E50330();
extern unsigned int uStack_48;


longlong fn_82E73FF8(int *param_1,int *param_2,undefined8 param_3)

{
  int *piVar1;
  longlong lVar2;
  undefined4 auStack_60 [4];
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  
  if (param_2 == (int *)0x0) {
    lVar2 = -0x7ff8ffa9;
  }
  else {
    uStack_48 = 0;
    lVar2 = fn_82E49060(param_1 + 0x10);
    if (-1 < lVar2) {
      piVar1 = (int *)param_1[0x10];
      param_1[0xd] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      lVar2 = (**(code **)(*param_2 + 0x80))(param_2,param_1[0xd]);
      if (-1 < lVar2) {
        auStack_60[0] = 0;
        lVar2 = (**(code **)(*param_1 + 0xc))(param_1,param_2,param_3,auStack_60);
      }
    }
    fn_82E50330(auStack_50);
  }
  return lVar2;
}

