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
extern unsigned int *auStack_30;
extern int fn_8233EB88();
extern int fn_82424AD0();
extern int fn_8265CA20();
extern int fn_82F63CA0();


uint * fn_82424798(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  char cVar5;
  int iVar4;
  ulonglong uVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 auStack_30 [48];
  
  if (param_1 != param_2) {
    uVar7 = *param_2;
    uVar6 = (ulonglong)uVar7;
    uVar3 = (int)(param_2[1] - uVar7) >> 2;
    if (uVar3 == 0) {
      fn_8233EB88(auStack_30,param_1,*param_1,param_1[1]);
    }
    else {
      uVar1 = *param_1;
      uVar2 = (int)(param_1[1] - uVar1) >> 2;
      if (uVar2 < uVar3) {
        if ((uint)((int)(param_1[2] - uVar1) >> 2) < uVar3) {
          if (uVar1 != 0) {
            fn_8265CA20();
          }
          cVar5 = fn_82424AD0(param_1,(int)(param_2[1] - *param_2) >> 2);
          if (cVar5 == '\0') {
            return param_1;
          }
          uVar9 = (ulonglong)*param_2;
          uVar7 = *param_1;
          iVar8 = param_2[1] - *param_2;
        }
        else {
          uVar9 = ((ulonglong)uVar2 & 0x3fffffff) * 4 + uVar6;
          fn_82F63CA0(uVar1,uVar6,((int)((int)uVar9 - uVar7) >> 2) << 2);
          uVar7 = param_1[1];
          iVar8 = param_2[1] - (int)uVar9;
        }
        iVar8 = (iVar8 >> 2) * 4;
        iVar4 = fn_82F63CA0(uVar7,uVar9,iVar8);
        uVar7 = iVar4 + iVar8;
      }
      else {
        fn_82F63CA0(uVar1,uVar6,((int)(param_2[1] - uVar7) >> 2) << 2);
        uVar7 = ((int)(param_2[1] - *param_2) >> 2) * 4 + *param_1;
      }
      param_1[1] = uVar7;
    }
  }
  return param_1;
}

