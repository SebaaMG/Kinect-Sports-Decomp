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
extern int fn_82424AD0();
extern int fn_8265CA20();
extern int fn_828DB5B0();
extern int fn_82F63CA0();


uint * fn_828DB668(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  char cVar6;
  int iVar5;
  int iVar7;
  ulonglong uVar8;
  
  if (param_1 != param_2) {
    uVar1 = *param_2;
    uVar4 = (int)(param_2[1] - uVar1) >> 2;
    if (uVar4 == 0) {
      uVar1 = *param_1;
      if (uVar1 != param_1[1]) {
        fn_82F63CA0(uVar1,param_1[1],0);
        param_1[1] = uVar1;
      }
    }
    else {
      uVar2 = *param_1;
      uVar3 = (int)(param_1[1] - uVar2) >> 2;
      if (uVar3 < uVar4) {
        if ((uint)((int)(param_1[2] - uVar2) >> 2) < uVar4) {
          if (uVar2 != 0) {
            fn_8265CA20(uVar2);
          }
          cVar6 = fn_82424AD0(param_1,(int)(param_2[1] - *param_2) >> 2);
          if (cVar6 == '\0') {
            return param_1;
          }
          uVar8 = (ulonglong)*param_2;
          uVar1 = *param_1;
          iVar7 = param_2[1] - *param_2;
        }
        else {
          uVar8 = ((ulonglong)uVar3 & 0x3fffffff) * 4 + (ulonglong)uVar1;
          fn_828DB5B0((ulonglong)uVar1,uVar8);
          uVar1 = param_1[1];
          iVar7 = param_2[1] - (int)uVar8;
        }
        iVar7 = (iVar7 >> 2) * 4;
        iVar5 = fn_82F63CA0(uVar1,uVar8,iVar7);
        param_1[1] = iVar5 + iVar7;
      }
      else {
        fn_828DB5B0();
        param_1[1] = ((int)(param_2[1] - *param_2) >> 2) * 4 + *param_1;
      }
    }
  }
  return param_1;
}

