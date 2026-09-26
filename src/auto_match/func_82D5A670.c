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
extern int fn_82CE5410();
extern int fn_82CE6310();
extern unsigned int lbl_82138EC0;


undefined4 *
fn_82D5A670(undefined4 *param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
             int param_5)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  undefined2 *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  
  param_1[2] = param_5;
  *(undefined2 *)((int)param_1 + 6) = 1;
  *param_1 = &lbl_82138EC0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0x80000000;
  if (param_5 != 0) {
    lVar2 = (**(code **)(*(int *)*param_2 + 0x2c))();
    iVar3 = fn_82CE5410();
    iVar7 = (int)lVar2;
    if ((int)(param_1[5] & 0x3fffffff) < iVar7) {
      lVar5 = ((ulonglong)(uint)param_1[5] & 0x3fffffff) << 1;
      if ((int)lVar5 <= iVar7) {
        lVar5 = lVar2;
      }
      fn_82CE6310(*(undefined4 *)(iVar3 + 0x10),param_1 + 3,lVar5,2);
    }
    uVar6 = lVar2 - (ulonglong)(uint)param_1[4];
    if (0 < (longlong)uVar6) {
      puVar4 = (undefined2 *)(param_1[4] * 2 + param_1[3] + -2);
      uVar1 = uVar6 & 0xffffffff;
      while (uVar1 != 0) {
        puVar4 = puVar4 + 1;
        *puVar4 = 0xffff;
        uVar6 = uVar6 - 1;
        uVar1 = uVar6;
      }
    }
    param_1[4] = iVar7;
  }
  return param_1;
}

