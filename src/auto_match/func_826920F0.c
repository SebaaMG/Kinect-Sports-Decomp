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
extern int fn_826913D8();
extern int fn_826931A8();
extern unsigned int lbl_831F129C;


void fn_826920F0(undefined4 *param_1,int *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int *piVar5;
  code *pcVar6;
  
  uVar4 = (ulonglong)(uint)param_2[7];
  uVar2 = (ulonglong)(*(ushort *)(param_2 + 3) + 1 << (param_1[3] & 0x3f));
  uVar3 = (uint)param_2[6] / uVar2;
  trapWord(6,uVar2,0);
  if ((int)uVar3 != 0) {
    do {
      piVar5 = (int *)uVar4;
      *(int *)(*piVar5 + 4) = piVar5[1];
      uVar4 = uVar4 + uVar2;
      *(int *)piVar5[1] = *piVar5;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  param_1[0x84] = param_1[0x84] - param_2[6];
  piVar5 = (int *)param_1[0x89];
  uVar1 = param_2[6];
  uVar2 = (ulonglong)uVar1;
  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 8))(piVar5,*param_1,uVar2);
  }
  param_1[0x83] = param_1[0x83] - uVar1;
  fn_826931A8(lbl_831F129C,param_2[7],uVar2);
  uVar1 = 1 << (*(ushort *)((int)param_2 + 0xe) & 0x3f);
  if ((param_2[4] & 0x80000000U) == 0) {
    if (uVar1 < 0x1001) {
      uVar1 = 0x1000;
    }
    piVar5 = (int *)param_1[1];
    uVar3 = (ulonglong)(uint)param_2[7];
    pcVar6 = *(code **)(*piVar5 + 8);
  }
  else {
    piVar5 = (int *)param_1[1];
    param_1[0x83] = param_1[0x83] - (param_2[4] & 0x7fffffffU);
    pcVar6 = *(code **)(*piVar5 + 0x14);
    uVar2 = ((ulonglong)(uint)param_2[4] & 0x7fffffff) + uVar2;
    uVar3 = (ulonglong)(uint)param_2[7] - ((ulonglong)(uint)param_2[4] & 0x7fffffff);
  }
  (*pcVar6)(piVar5,uVar3,uVar2,uVar1);
  *(int *)(*param_2 + 4) = param_2[1];
  *(int *)param_2[1] = *param_2;
  fn_826913D8(param_1[2],param_2,param_2[2]);
  return;
}

