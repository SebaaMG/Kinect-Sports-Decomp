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
extern int fn_82FA9400();
extern int fn_82FA9410();
extern int fn_82FA9A38();
extern int fn_82FABE28();
extern int fn_82FABE80();


undefined8
fn_82FB4580(undefined8 param_1,int param_2,undefined4 *param_3,undefined8 param_4,uint *param_5)

{
  ulonglong uVar1;
  undefined8 uVar2;
  int iVar4;
  longlong lVar3;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  uint *puVar8;
  
  puVar8 = param_5 + 2;
  uVar5 = ((ulonglong)*(uint *)(param_2 + 8) + ((ulonglong)*(uint *)(param_2 + 8) & 0x7fffffff) * 2
          & 0xfffffff) * 0x10 - (ulonglong)*(uint *)(param_2 + 0x10);
  if ((int)uVar5 <= (int)param_5[2]) {
    uVar5 = (ulonglong)param_5[2];
  }
  uVar1 = (ulonglong)*(ushort *)(param_2 + 0x2c) & 0xffffe000;
  lVar6 = uVar1 - 0x2000;
  uVar2 = fn_82FA9A38(param_3[1],param_1,*param_3,uVar5 - param_5[1],0,
                        *(uint *)(param_2 + 0x14) >> 0x1b,
                        lVar6 - ((uVar1 - 0x2001) + (ulonglong)(lVar6 == 0)),1);
  if (((((*(ushort *)(param_2 + 0x2c) & 0xe000) == 0x2000) && ((int)uVar2 == 1)) &&
      (*(int *)(param_3[1] + 0x40) != 0)) &&
     ((iVar4 = fn_82FABE80(param_4), iVar4 != 0 && (*(int *)(iVar4 + 0x40) != 0)))) {
    uVar2 = fn_82FA9400(param_3[1],*param_5);
    uVar2 = fn_82FABE28(param_4,param_2 + 0x18,uVar2,puVar8);
    if ((int)uVar2 == 1) {
      lVar6 = fn_82FA9410(param_3[1],param_5[1]);
      lVar7 = (ulonglong)*param_5 + lVar6;
      if ((int)lVar7 < (int)*puVar8) {
        do {
          lVar3 = fn_82FA9400(param_3[1]);
          uVar2 = fn_82FA9A38(param_3[1],param_1,*param_3,lVar7,lVar3 + (ulonglong)*puVar8,
                                *(uint *)(param_2 + 0x14) >> 0x1b,0,1);
          if ((int)uVar2 != 1) {
            return uVar2;
          }
          uVar2 = fn_82FA9400(param_3[1],*param_5);
          uVar2 = fn_82FABE28(param_4,param_2 + 0x18,uVar2,puVar8);
          if ((int)uVar2 != 1) {
            return uVar2;
          }
          lVar7 = (ulonglong)*param_5 + lVar6;
        } while ((int)lVar7 < (int)*puVar8);
      }
    }
  }
  return uVar2;
}

