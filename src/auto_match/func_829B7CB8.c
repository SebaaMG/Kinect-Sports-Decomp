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
extern int fn_829B7838();
extern int fn_829B7AB0();
extern int fn_829C1D98();


byte fn_829B7CB8(int *param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar7 = 0xffff;
  if (((ulonglong)(uint)param_1[3] - 5 & 0xffffffff) < 0xffff) {
    uVar7 = (ulonglong)(uint)param_1[3] - 5;
  }
  do {
    uVar4 = (ulonglong)(uint)param_1[0x1b];
    if (uVar4 < 2) {
      fn_829B7AB0(param_1);
      uVar4 = (ulonglong)(uint)param_1[0x1b];
      if (uVar4 == 0) {
        iVar5 = (int)param_2;
        if (iVar5 == 0) {
          return 0;
        }
        uVar1 = param_1[0x15];
        if ((int)uVar1 < 0) {
          lVar2 = 0;
        }
        else {
          lVar2 = (ulonglong)(uint)param_1[0xc] + (ulonglong)uVar1;
        }
        fn_829C1D98(param_1,lVar2,(ulonglong)(uint)param_1[0x19] - (ulonglong)uVar1,iVar5 == 4
                         );
        param_1[0x15] = param_1[0x19];
        fn_829B7838(*param_1);
        if (*(int *)(*param_1 + 0x10) != 0) {
          if (iVar5 != 4) {
            return 1;
          }
          return 3;
        }
        return -(param_2 == 4) & 2;
      }
    }
    uVar1 = param_1[0x19];
    uVar6 = (ulonglong)(uint)param_1[0x15];
    param_1[0x1b] = 0;
    uVar3 = uVar6 + uVar7;
    iVar5 = (int)(uVar4 + uVar1);
    param_1[0x19] = iVar5;
    uVar4 = uVar4 + uVar1 & 0xffffffff;
    if ((uVar4 == 0) || ((uVar3 & 0xffffffff) <= uVar4)) {
      param_1[0x19] = (int)uVar3;
      param_1[0x1b] = iVar5 - (int)uVar3;
      if (param_1[0x15] < 0) {
        lVar2 = 0;
      }
      else {
        lVar2 = (uint)param_1[0xc] + uVar6;
      }
      fn_829C1D98(param_1,lVar2,uVar3 - uVar6,0);
      param_1[0x15] = param_1[0x19];
      fn_829B7838(*param_1);
      if (*(int *)(*param_1 + 0x10) == 0) {
        return 0;
      }
    }
    uVar1 = param_1[0x15];
    uVar4 = (ulonglong)(uint)param_1[0x19] - (ulonglong)uVar1;
    if (((ulonglong)(uint)param_1[9] - 0x106 & 0xffffffff) <= (uVar4 & 0xffffffff)) {
      if ((int)uVar1 < 0) {
        lVar2 = 0;
      }
      else {
        lVar2 = (ulonglong)(uint)param_1[0xc] + (ulonglong)uVar1;
      }
      fn_829C1D98(param_1,lVar2,uVar4,0);
      param_1[0x15] = param_1[0x19];
      fn_829B7838(*param_1);
      if (*(int *)(*param_1 + 0x10) == 0) {
        return 0;
      }
    }
  } while( true );
}

