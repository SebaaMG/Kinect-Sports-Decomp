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
extern int fn_82517608();
extern int fn_82F622A8();


void fn_825173B8(uint *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int *piVar4;
  ulonglong uVar3;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  if (0xfffffff < param_2) {
                    /* WARNING: Subroutine does not return */
    fn_82F622A8(0xffffffff82196fd4);
  }
  if ((uint)((int)(param_1[2] - *param_1) >> 4) < param_2) {
    piVar4 = (int *)fn_825089A0();
    uVar3 = (**(code **)(*piVar4 + 0x24))(piVar4,param_2 * 0x10,1);
    uVar1 = param_1[1];
    uVar6 = uVar3;
    for (uVar7 = (ulonglong)*param_1; (uVar7 & 0xffffffff) != (ulonglong)uVar1; uVar7 = uVar7 + 0x10
        ) {
      if ((uVar6 & 0xffffffff) != 0) {
        fn_82517608(uVar6,uVar7,uVar7 + 8);
      }
      uVar6 = uVar6 + 0x10;
    }
    uVar1 = *param_1;
    uVar2 = param_1[1];
    if (uVar1 != 0) {
      fn_82237848(uVar1,uVar2,param_1 + 3);
      uVar5 = *param_1;
      piVar4 = (int *)fn_825089A0();
      (**(code **)(*piVar4 + 0x28))(piVar4,uVar5);
    }
    uVar5 = (uint)uVar3;
    *param_1 = uVar5;
    param_1[2] = param_2 * 0x10 + uVar5;
    param_1[1] = ((int)(uVar2 - uVar1) >> 4) * 0x10 + uVar5;
  }
  return;
}

