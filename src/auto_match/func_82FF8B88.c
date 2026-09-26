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
extern unsigned int *auStack_70;
extern int fn_82FA5100();
extern int fn_82FA5190();
extern int fn_82FF8988();
extern unsigned int lbl_831BC768;
extern unsigned int *lbl_83265044;
extern unsigned int uStack_50;
extern unsigned int uStack_54;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;
extern unsigned int uStack_68;


undefined8 fn_82FF8B88(int *param_1,undefined8 param_2,ulonglong param_3)

{
  undefined8 uVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  uint auStack_70 [2];
  ulonglong uStack_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined1 uStack_50;
  
  uStack_60 = 0;
  uStack_5c = 0;
  piVar4 = param_1 + 7;
  uStack_50 = 1;
  uStack_54 = 0;
  uStack_58 = 0;
  uVar1 = (**(code **)(*lbl_83265044 + 0xc))(lbl_83265044,param_2,&uStack_60,0,piVar4,1);
  if ((int)uVar1 != 1) {
    uStack_50 = 0;
    uVar1 = (**(code **)(*lbl_83265044 + 0xc))(lbl_83265044,param_2,&uStack_60,0,piVar4,1);
    if ((int)uVar1 != 1) {
      return uVar1;
    }
  }
  uVar2 = (**(code **)(*(int *)*piVar4 + 0x10))();
  param_1[4] = uVar2;
  if (uVar2 == 0) {
    uVar1 = 2;
  }
  else {
    if ((uint)param_1[3] < uVar2) {
      if (*param_1 != 0) {
        fn_82FA5190(lbl_831BC768);
      }
      uVar2 = param_1[4];
      if (uVar2 < 0x8001) {
        uVar2 = 0x8000;
      }
      param_1[3] = uVar2;
      iVar3 = fn_82FA5100(lbl_831BC768,uVar2,0x20);
      *param_1 = iVar3;
    }
    if (*param_1 == 0) {
      uVar1 = 0x34;
    }
    else if ((param_3 & 0xffffffff) != 0) {
      uStack_68 = 0;
      uVar1 = (**(code **)(*(int *)*piVar4 + 0x20))
                        ((int *)*piVar4,param_3 & 0xffffffff,0,&uStack_68);
      if (((int)uVar1 == 1) &&
         (param_3 = param_3 - (uStack_68 & 0xffffffff),
         uVar1 = fn_82FF8988(param_1,param_3,auStack_70),
         (ulonglong)auStack_70[0] != (param_3 & 0xffffffff))) {
        uVar1 = 2;
      }
    }
  }
  return uVar1;
}

