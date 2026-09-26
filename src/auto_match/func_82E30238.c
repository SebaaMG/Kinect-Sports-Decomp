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
extern int fn_82E2DF38();
extern int fn_82E2E188();
extern int fn_82E2F3F8();
extern int fn_82E2F460();
extern int fn_82E50CB8();
extern int fn_82E50F10();


undefined8 fn_82E30238(int param_1,int *param_2)

{
  int *piVar1;
  ushort uVar4;
  int iVar2;
  ushort uVar5;
  int iVar3;
  undefined8 uVar6;
  ulonglong uVar7;
  int *apiStack_60 [24];
  
  uVar7 = 0;
  apiStack_60[0] = (int *)0x0;
  uVar6 = 0;
  fn_82E50CB8(param_1 + 0x54);
  uVar4 = (**(code **)(*param_2 + 0x88))(param_2);
  if (*(int *)(param_1 + 0xfc) != 0) {
    iVar3 = param_1 + 0x94;
    do {
      iVar2 = fn_82E2F3F8(iVar3,uVar7,apiStack_60);
      piVar1 = apiStack_60[0];
      if (iVar2 == 0) goto LAB_82e3031c;
      if (apiStack_60[0] == (int *)0x0) {
        uVar6 = 0xffffffffc00d36bb;
        goto LAB_82e30324;
      }
      uVar5 = (**(code **)(*apiStack_60[0] + 0x88))(apiStack_60[0]);
      iVar2 = *piVar1;
      if (uVar5 == uVar4) {
        (**(code **)(iVar2 + 8))(piVar1);
        if ((ulonglong)*(uint *)(param_1 + 0xfc) <= (uVar7 & 0xffffffff)) goto LAB_82e3031c;
        iVar3 = fn_82E2E188(iVar3,uVar7,param_2);
        goto LAB_82e30314;
      }
      uVar5 = (**(code **)(iVar2 + 0x88))();
      if (uVar4 < uVar5) {
        iVar3 = fn_82E2F460(iVar3,uVar7,param_2);
        goto LAB_82e30314;
      }
      uVar7 = uVar7 + 1;
    } while ((uVar7 & 0xffffffff) < (ulonglong)*(uint *)(param_1 + 0xfc));
  }
  iVar3 = fn_82E2DF38(param_1 + 0x94,param_2,apiStack_60);
LAB_82e30314:
  if (iVar3 == 0) {
LAB_82e3031c:
    uVar6 = 0xffffffff8007000e;
  }
LAB_82e30324:
  fn_82E50F10(param_1 + 0x54);
  return uVar6;
}

