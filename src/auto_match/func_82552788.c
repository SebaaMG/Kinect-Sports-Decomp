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
extern unsigned int *auStack_60;
extern int fn_82535298();
extern int fn_825354B8();
extern int fn_825359D8();
extern int fn_82535DB8();
extern int fn_82552B50();


int fn_82552788(int *param_1,int *param_2,undefined4 *param_3,ulonglong param_4,longlong param_5,
                 ulonglong param_6,ulonglong param_7,undefined8 param_8)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 in_stack_00000054;
  undefined4 auStack_60 [24];
  
  if (((param_4 & 0xffffffff) != 0) && ((int *)*param_2 != (int *)0x0)) {
    uVar1 = (**(code **)(*(int *)*param_2 + 0x20))();
    fn_82535DB8(param_4,param_5,uVar1);
  }
  fn_82552B50(param_2,(param_5 + -3) - (param_5 + -4 + (ulonglong)(param_5 + -3 == 0)));
  auStack_60[0] = *param_3;
  if ((param_4 & 0xffffffff) == 0) {
    if ((param_6 & 0xffffffff) == 0) {
      iVar2 = fn_82535298(auStack_60,*param_1,param_8,in_stack_00000054);
    }
    else {
      if ((param_7 & 0xffffffff) == 0) {
        param_7 = 0;
      }
      iVar2 = fn_825354B8(auStack_60,param_6,param_7,*param_1,param_8,in_stack_00000054);
    }
  }
  else {
    iVar2 = fn_825359D8(auStack_60,param_4,param_5,*param_1,param_8,in_stack_00000054);
  }
  *param_2 = iVar2;
  param_2[1] = *param_1;
  return iVar2;
}

