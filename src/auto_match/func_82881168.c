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
extern int fn_8265CA20();
extern int fn_82880710();
extern int fn_82F63CA0();


uint * fn_82881168(uint *param_1,uint *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  char cVar4;
  int iVar3;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  if (param_1 != param_2) {
    uVar5 = (ulonglong)*param_2;
    uVar6 = param_2[1] - uVar5;
    if (uVar6 == 0) {
      uVar1 = *param_1;
      if (uVar1 != param_1[1]) {
        fn_82F63CA0(uVar1,param_1[1],0);
        param_1[1] = uVar1;
      }
    }
    else {
      uVar2 = (ulonglong)*param_1;
      if ((param_1[1] - uVar2 & 0xffffffff) < (uVar6 & 0xffffffff)) {
        if ((param_1[2] - uVar2 & 0xffffffff) < (uVar6 & 0xffffffff)) {
          if (uVar2 != 0) {
            fn_8265CA20();
          }
          cVar4 = fn_82880710(param_1,(ulonglong)param_2[1] - (ulonglong)*param_2);
          if (cVar4 == '\0') {
            return param_1;
          }
          uVar6 = (ulonglong)*param_2;
          uVar1 = *param_1;
          lVar7 = param_2[1] - uVar6;
        }
        else {
          uVar6 = (param_1[1] - uVar2) + uVar5;
          fn_82F63CA0(uVar2,uVar5,uVar6 - uVar5);
          uVar1 = param_1[1];
          lVar7 = param_2[1] - uVar6;
        }
        iVar3 = fn_82F63CA0(uVar1,uVar6,lVar7);
        param_1[1] = iVar3 + (int)lVar7;
      }
      else {
        fn_82F63CA0(uVar2,uVar5,param_2[1] - uVar5);
        param_1[1] = (param_2[1] - *param_2) + *param_1;
      }
    }
  }
  return param_1;
}

