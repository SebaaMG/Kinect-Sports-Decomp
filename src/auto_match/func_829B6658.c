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
extern int fn_829B6388();
extern int fn_829B7828();


int fn_829B6658(int *param_1,int *param_2,uint param_3,uint param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  uVar2 = param_3 + param_4;
  if ((((uint)param_2[1] < uVar2) || ((uint)param_2[3] < param_4)) || (*param_2 == 0)) {
    *(undefined4 *)(*param_1 + 0x14) = 0x16;
    (**(code **)*param_1)(param_1);
  }
  if ((param_3 < (uint)param_2[6]) || ((uint)(param_2[4] + param_2[6]) < uVar2)) {
    if (param_2[10] == 0) {
      *(undefined4 *)(*param_1 + 0x14) = 0x45;
      (**(code **)*param_1)(param_1);
    }
    if (param_2[9] != 0) {
      fn_829B6388(param_1,param_2,1);
      param_2[9] = 0;
    }
    if ((uint)param_2[6] < param_3) {
      param_2[6] = param_3;
    }
    else {
      param_2[6] = -((int)(uVar2 - param_2[4]) >> 0x1f) - 1U & uVar2 - param_2[4];
    }
    fn_829B6388(param_1,param_2,0);
  }
  uVar3 = param_2[7];
  if (uVar3 < uVar2) {
    if ((uVar3 < param_3) && (uVar3 = param_3, param_5 != 0)) {
      *(undefined4 *)(*param_1 + 0x14) = 0x16;
      (**(code **)*param_1)(param_1);
    }
    if (param_5 != 0) {
      param_2[7] = uVar2;
    }
    if (param_2[8] != 0) {
      iVar1 = param_2[2];
      uVar3 = uVar3 - param_2[6];
      uVar2 = uVar2 - param_2[6];
      if (uVar3 < uVar2) {
        iVar4 = uVar3 * 4;
        iVar5 = uVar2 - uVar3;
        do {
          fn_829B7828(*(undefined4 *)(*param_2 + iVar4),iVar1 << 7);
          iVar5 = iVar5 + -1;
          iVar4 = iVar4 + 4;
        } while (iVar5 != 0);
      }
      goto LAB_829b67f8;
    }
    if (param_5 == 0) {
      *(undefined4 *)(*param_1 + 0x14) = 0x16;
      (**(code **)*param_1)(param_1);
      goto LAB_829b6808;
    }
  }
  else {
LAB_829b67f8:
    if (param_5 == 0) goto LAB_829b6808;
  }
  param_2[9] = 1;
LAB_829b6808:
  return (param_3 - param_2[6]) * 4 + *param_2;
}

