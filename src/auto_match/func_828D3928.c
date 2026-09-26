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
extern int fn_825089A0();
extern int fn_828D36C8();
extern int fn_828D3860();
extern int fn_82F622A8();
extern unsigned int uStack_50;


void fn_828D3928(uint *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int *piVar4;
  ulonglong uVar3;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 uStack_50;
  
  if (0x3333333 < param_2) {
                    /* WARNING: Subroutine does not return */
    fn_82F622A8(0xffffffff82196fd4);
  }
  if ((uint)((int)(param_1[2] - *param_1) / 0x50) < param_2) {
    piVar4 = (int *)fn_825089A0();
    uVar3 = (**(code **)(*piVar4 + 0x24))(piVar4,param_2 * 0x50,1);
    uVar7 = (ulonglong)*param_1;
    uVar1 = param_1[1];
    uVar6 = uVar3;
    if (uVar7 != uVar1) {
      do {
        if ((uVar6 & 0xffffffff) != 0) {
          fn_828D36C8(uVar6,uVar7);
        }
        uVar7 = uVar7 + 0x50;
        uVar6 = uVar6 + 0x50;
      } while ((uVar7 & 0xffffffff) != (ulonglong)uVar1);
    }
    uVar1 = *param_1;
    uVar2 = param_1[1];
    if (uVar1 != 0) {
      fn_828D3860(uVar1,uVar2,param_1 + 3,uStack_50);
      uVar5 = *param_1;
      piVar4 = (int *)fn_825089A0();
      (**(code **)(*piVar4 + 0x28))(piVar4,uVar5);
    }
    uVar5 = (uint)uVar3;
    *param_1 = uVar5;
    param_1[2] = param_2 * 0x50 + uVar5;
    param_1[1] = ((int)(uVar2 - uVar1) / 0x50) * 0x50 + uVar5;
  }
  return;
}

