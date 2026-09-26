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
extern unsigned int *auStack_40;
extern unsigned int *auStack_50;
extern int fn_82E5EE70();
extern int fn_82E7E7E0();
extern unsigned int lbl_82154EA8;


longlong fn_82E5FC30(int *param_1,int *param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined2 auStack_50 [2];
  int *apiStack_4c [3];
  undefined2 auStack_40 [4];
  undefined *puStack_38;
  
  if ((param_1 == (int *)0x0) || (param_2 == (int *)0x0)) {
    lVar2 = -0x7ff8ffa9;
  }
  else {
    apiStack_4c[0] = (int *)0x0;
    lVar2 = (**(code **)(*param_2 + 0x10))(param_2,0xffffffff82154a58,0,apiStack_4c);
    if (((lVar2 < 0) &&
        (lVar2 = (**(code **)(*param_1 + 0x1c))(param_1,0xffffffff82154a58,apiStack_4c), -1 < lVar2)
        ) && (lVar2 = (**(code **)(*param_2 + 0x14))(param_2,apiStack_4c[0],0),
             piVar1 = apiStack_4c[0], -1 < lVar2)) {
      fn_82E7E7E0(auStack_40);
      auStack_50[0] = 0;
      auStack_40[0] = 0x1f;
      puStack_38 = &lbl_82154EA8;
      lVar2 = fn_82E5EE70(piVar1,0xffffffff82154ea8,auStack_50);
    }
    if (apiStack_4c[0] != (int *)0x0) {
      (**(code **)(*apiStack_4c[0] + 8))();
    }
  }
  return lVar2;
}

