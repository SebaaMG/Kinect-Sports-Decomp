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
extern unsigned int *auStack_50;
extern int fn_823D70B0();
extern int fn_823D73A0();
extern int fn_823D7540();
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;


void fn_823D6F20(ulonglong param_1,ulonglong param_2,ulonglong param_3,undefined8 param_4)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar5;
  ulonglong uVar4;
  ulonglong uVar6;
  undefined8 *puVar7;
  uint uStack_60;
  uint uStack_5c;
  undefined8 uStack_58;
  undefined8 auStack_50 [10];
  
  lVar2 = param_2 - param_1;
  uVar1 = (int)lVar2 >> 3;
  uVar4 = param_2;
  if (0x20 < (int)uVar1) {
    do {
      iVar5 = (int)param_3;
      param_2 = uVar4;
      if (iVar5 < 1) break;
      fn_823D70B0(&uStack_60,param_1,uVar4,param_4);
      param_3 = (longlong)(iVar5 >> 1) + (ulonglong)(iVar5 < 0 && (param_3 & 1) != 0);
      param_3 = (longlong)((int)param_3 >> 1) + (ulonglong)((int)param_3 < 0 && (param_3 & 1) != 0)
                + param_3;
      uVar6 = (ulonglong)uStack_5c;
      param_2 = (ulonglong)uStack_60;
      if ((int)(uStack_60 - (int)param_1 & 0xfffffff8) < (int)((int)uVar4 - uStack_5c & 0xfffffff8))
      {
        fn_823D6F20(param_1,param_2,param_3,param_4);
        param_2 = uVar4;
        param_1 = uVar6;
      }
      else {
        fn_823D6F20(uVar6,uVar4,param_3,param_4);
      }
      lVar2 = param_2 - param_1;
      uVar1 = (int)lVar2 >> 3;
      uVar4 = param_2;
    } while (0x20 < (int)uVar1);
    if (0x20 < (int)uVar1) {
      if ((int)uVar1 < 2) {
        return;
      }
      uVar4 = (longlong)((int)uVar1 >> 1) + (ulonglong)((int)uVar1 < 0 && (uVar1 & 1) != 0);
      if (0 < (longlong)uVar4) {
        lVar3 = (uVar4 & 0x1fffffff) * 8 + param_1;
        do {
          lVar3 = lVar3 + -8;
          uStack_58 = *(undefined8 *)lVar3;
          uVar4 = uVar4 - 1;
          fn_823D7540(param_1,uVar4,uVar1,&uStack_58,param_4);
        } while (0 < (int)uVar4);
      }
      if ((int)uVar1 < 2) {
        return;
      }
      lVar3 = param_2 - 8;
      do {
        puVar7 = (undefined8 *)lVar3;
        auStack_50[0] = *puVar7;
        *(undefined4 *)puVar7 = *(undefined4 *)param_1;
        *(undefined4 *)((int)puVar7 + 4) = ((undefined4 *)param_1)[1];
        fn_823D7540(param_1,0,(int)lVar2 + -8 >> 3,auStack_50,param_4);
        lVar3 = lVar3 + -8;
        lVar2 = (lVar3 - param_1) + 8;
      } while (8 < (int)((uint)lVar2 & 0xfffffff8));
      return;
    }
  }
  if (1 < (int)uVar1) {
    fn_823D73A0(param_1,param_2,param_4);
  }
  return;
}

