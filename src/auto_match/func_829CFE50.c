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
extern int fn_829C9838();
extern unsigned int lbl_83215058;
extern unsigned int lbl_8321505C;
extern unsigned int lbl_832171C8;


undefined8
fn_829CFE50(int param_1,int *param_2,uint param_3,int param_4,uint param_5,int *param_6,
             int *param_7)

{
  int iVar1;
  undefined8 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  int iVar5;
  double dVar6;
  
  if ((((param_6 == (int *)0x0) || (param_7 == (int *)0x0)) || (param_1 != 2)) ||
     (((param_2 != (int *)0x0 && (*param_2 != 0)) && (*param_2 != 1)))) {
    uVar2 = 0xffffffff80070057;
  }
  else {
    RtlEnterCriticalSection(0xffffffff8315c3ec);
    if (lbl_8321505C == 0) {
      if (lbl_83215058 == 0) {
        uVar2 = 0xffffffff80070015;
        RtlLeaveCriticalSection(0xffffffff8315c3ec);
      }
      else {
        RtlLeaveCriticalSection(0xffffffff8315c3ec);
        uVar2 = 0xffffffff8007048f;
      }
    }
    else {
      iVar1 = (param_3 & 0x7fffffff) * -2 + 0x27f;
      uVar3 = (undefined2)(param_4 * 2);
      uVar4 = (undefined2)iVar1;
      dVar6 = (double)fn_829C9838(0xffffffff83217178,uVar4,uVar3);
      iVar5 = ((0x27f - ((int)*(short *)((param_5 >> 2 & 0x3ffe) + lbl_832171C8) >> 4)) - iVar1) -
              (int)dVar6;
      dVar6 = (double)fn_829C9838(0xffffffff832171a0,uVar4,uVar3);
      iVar1 = (int)dVar6 + param_4 * 2;
      if ((param_2 != (int *)0x0) && (*param_2 == 1)) {
        iVar5 = (iVar5 + -0xa0) * 2 - param_2[1];
        iVar1 = (iVar1 + -0x78) * 2 - param_2[2];
      }
      *param_6 = iVar5;
      *param_7 = iVar1;
      RtlLeaveCriticalSection(0xffffffff8315c3ec);
      uVar2 = 0;
    }
  }
  return uVar2;
}

