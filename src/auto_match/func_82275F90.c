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
extern int fn_82275C58();
extern int fn_822760B0();
extern int fn_8265CA20();
extern unsigned int iStack_70;
extern unsigned int uStack_74;
extern unsigned int uStack_78;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;


undefined8
fn_82275F90(undefined8 param_1,int param_2,int param_3,int param_4,int param_5,int *param_6)

{
  int iVar1;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  int iStack_70;
  int aiStack_60 [24];
  
  while ((param_2 != param_3 && (param_4 != param_5))) {
    if (*(int *)(param_4 + 4) < *(int *)(param_2 + 4)) {
      fn_822760B0(param_6,param_4);
      param_4 = param_4 + 8;
    }
    else {
      fn_822760B0(param_6,param_2);
      param_2 = param_2 + 8;
    }
  }
  iStack_70 = param_6[4];
  uStack_80 = 0;
  uStack_7c = 0;
  uStack_78 = 0;
  uStack_74 = 0;
  iVar1 = fn_82275C58(aiStack_60,param_2,param_3,&uStack_80);
  param_6[4] = *(int *)(iVar1 + 0x10);
  if (aiStack_60[0] != 0) {
    fn_8265CA20(aiStack_60[0]);
  }
  iStack_70 = param_6[4];
  uStack_80 = 0;
  uStack_7c = 0;
  uStack_78 = 0;
  uStack_74 = 0;
  fn_82275C58(param_1,param_4,param_5,&uStack_80);
  iVar1 = *param_6;
  if (iVar1 != 0) {
    for (; iVar1 != param_6[2]; iVar1 = iVar1 + 8) {
    }
    fn_8265CA20();
  }
  return param_1;
}

