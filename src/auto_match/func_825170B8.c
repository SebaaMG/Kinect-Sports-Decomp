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
extern int fn_82237848();
extern int fn_825089A0();
extern int fn_82517238();
extern int fn_82517298();
extern int fn_82517548();
extern int fn_825179F8();


uint * fn_825170B8(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  int *piVar6;
  char cVar7;
  ulonglong uVar8;
  
  if (param_1 != param_2) {
    uVar4 = (ulonglong)*param_2;
    uVar3 = (int)(param_2[1] - *param_2) >> 4;
    if (uVar3 == 0) {
      fn_82517238(param_1);
    }
    else {
      uVar1 = *param_1;
      uVar2 = (int)(param_1[1] - uVar1) >> 4;
      if (uVar2 < uVar3) {
        if ((uint)((int)(param_1[2] - uVar1) >> 4) < uVar3) {
          if (uVar1 != 0) {
            fn_82237848(uVar1,param_1[1],param_1 + 3);
            uVar3 = *param_1;
            piVar6 = (int *)fn_825089A0();
            (**(code **)(*piVar6 + 0x28))(piVar6,uVar3);
          }
          cVar7 = fn_82517298(param_1,(int)(param_2[1] - *param_2) >> 4);
          if (cVar7 == '\0') {
            return param_1;
          }
          uVar3 = param_2[1];
          uVar4 = (ulonglong)*param_1;
          for (uVar8 = (ulonglong)*param_2; (uVar8 & 0xffffffff) != (ulonglong)uVar3;
              uVar8 = uVar8 + 0x10) {
            if ((uVar4 & 0xffffffff) != 0) {
              fn_825179F8(uVar4,uVar8);
            }
            uVar4 = uVar4 + 0x10;
          }
        }
        else {
          uVar8 = ((ulonglong)uVar2 & 0xfffffff) * 0x10 + uVar4;
          fn_82517548(uVar4,uVar8,uVar1);
          uVar3 = param_2[1];
          uVar4 = (ulonglong)param_1[1];
          for (; (uVar8 & 0xffffffff) != (ulonglong)uVar3; uVar8 = uVar8 + 0x10) {
            if ((uVar4 & 0xffffffff) != 0) {
              fn_825179F8(uVar4,uVar8);
            }
            uVar4 = uVar4 + 0x10;
          }
        }
        param_1[1] = (uint)uVar4;
      }
      else {
        uVar5 = fn_82517548(uVar4,param_2[1],uVar1);
        fn_82237848(uVar5,param_1[1],param_1 + 3);
        param_1[1] = ((int)(param_2[1] - *param_2) >> 4) * 0x10 + *param_1;
      }
    }
  }
  return param_1;
}

