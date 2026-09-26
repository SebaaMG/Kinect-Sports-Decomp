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
extern int fn_822F86F0();
extern int fn_822F8A68();
extern int fn_822F8F38();
extern unsigned int iStack_40;
extern unsigned int uStack_3c;


void fn_822F8298(ulonglong param_1,int param_2,ulonglong param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  undefined4 *puVar7;
  int iStack_40;
  uint uStack_3c;
  
  uVar3 = param_2 - (int)param_1 >> 3;
  if (0x20 < (int)uVar3) {
    do {
      iVar5 = (int)param_3;
      if (iVar5 < 1) break;
      fn_822F86F0(&iStack_40,param_1,param_2,param_4);
      iVar2 = iStack_40;
      param_3 = (longlong)(iVar5 >> 1) + (ulonglong)(iVar5 < 0 && (param_3 & 1) != 0);
      param_3 = (longlong)((int)param_3 >> 1) + (ulonglong)((int)param_3 < 0 && (param_3 & 1) != 0)
                + param_3;
      uVar6 = (ulonglong)uStack_3c;
      if ((int)(iStack_40 - (int)param_1 & 0xfffffff8U) < (int)(param_2 - uStack_3c & 0xfffffff8)) {
        fn_822F8298(param_1,iStack_40,param_3,param_4);
        param_1 = uVar6;
      }
      else {
        fn_822F8298(uVar6,param_2,param_3,param_4);
        param_2 = iVar2;
      }
      uVar3 = param_2 - (int)param_1 >> 3;
    } while (0x20 < (int)uVar3);
    if (0x20 < (int)uVar3) {
      if ((int)uVar3 < 2) {
        return;
      }
      uVar6 = (longlong)((int)uVar3 >> 1) + (ulonglong)((int)uVar3 < 0 && (uVar3 & 1) != 0);
      if (0 < (longlong)uVar6) {
        lVar4 = (uVar6 & 0x1fffffff) * 8 + param_1;
        do {
          lVar4 = lVar4 + -8;
          iStack_40 = *(int *)lVar4;
          uVar6 = uVar6 - 1;
          uStack_3c = ((int *)lVar4)[1];
          fn_822F8F38(param_1,uVar6,uVar3,&iStack_40,param_4);
        } while (0 < (int)uVar6);
      }
      if ((int)uVar3 < 2) {
        return;
      }
      puVar1 = (undefined4 *)param_1;
      puVar7 = (undefined4 *)(param_2 + -4);
      do {
        uStack_3c = *puVar7;
        iStack_40 = puVar7[-1];
        puVar7[-1] = *puVar1;
        *puVar7 = puVar1[1];
        fn_822F8F38(param_1,0,(-4 - (int)puVar1) + (int)puVar7 >> 3,&iStack_40,param_4);
        puVar7 = puVar7 + -2;
      } while (8 < (int)((4 - (int)puVar1) + (int)puVar7 & 0xfffffff8U));
      return;
    }
  }
  if (1 < (int)uVar3) {
    fn_822F8A68(param_1,param_2,param_4);
  }
  return;
}

