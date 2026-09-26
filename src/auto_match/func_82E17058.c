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
extern int fn_82CEA160();
extern int fn_82CEA220();
extern int fn_82CEA280();
extern int fn_82CEA358();
extern int fn_82CEAC20();
extern int fn_82E17300();
extern int fn_82E1BD60();


void fn_82E17058(int *param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4)

{
  undefined4 *puVar1;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar2;
  int iVar8;
  undefined4 *puVar9;
  int *piVar10;
  
  iVar3 = fn_82CEA280(param_1 + 6,param_2,0xffffffffffffffff);
  if ((param_3 & 0xffffffff) == 0) {
    iVar4 = -1;
  }
  else {
    iVar4 = fn_82CEA280(param_1 + 6,param_3,0xffffffffffffffff);
  }
  if (iVar3 != -1) {
    piVar10 = param_1 + 3;
    iVar8 = iVar3;
    do {
      puVar1 = *(undefined4 **)(iVar8 * 8 + *piVar10);
      *puVar1 = (int)param_3;
      if (iVar4 != -1) {
        uVar5 = fn_82CEA280(param_1 + 6,param_3,0xffffffffffffffff);
        iVar6 = fn_82E1BD60(piVar10);
        puVar9 = (undefined4 *)(iVar6 * 8 + *piVar10);
        *puVar9 = puVar1;
        puVar9[1] = uVar5;
        iVar7 = fn_82CE5410();
        fn_82CEA160(param_1 + 6,*(undefined4 *)(iVar7 + 0x10),param_3,iVar6);
      }
      iVar8 = *(int *)(iVar8 * 8 + *piVar10 + 4);
    } while (iVar8 != -1);
  }
  if ((iVar4 == -1) && ((param_3 & 0xffffffff) != 0)) {
    if (iVar3 != -1) {
      piVar10 = param_1 + 6;
      iVar3 = fn_82CEA220(piVar10,param_2);
      uVar5 = *(undefined4 *)(iVar3 * 8 + param_1[6] + 4);
      fn_82CEA358(piVar10,iVar3);
      iVar3 = fn_82CE5410();
      fn_82CEA160(piVar10,*(undefined4 *)(iVar3 + 0x10),param_3,uVar5);
    }
  }
  else {
    fn_82E17300(param_1 + 3,param_2);
  }
  iVar3 = param_1[2];
  iVar4 = 0;
  if (0 < *(int *)(iVar3 + 0x50)) {
    iVar8 = 0;
    do {
      iVar3 = *(int *)(iVar3 + 0x4c) + iVar8;
      if ((ulonglong)*(uint *)(iVar3 + 4) == (param_2 & 0xffffffff)) {
        *(int *)(iVar3 + 4) = (int)param_3;
      }
      iVar3 = param_1[2];
      iVar4 = iVar4 + 1;
      iVar8 = iVar8 + 8;
    } while (iVar4 < *(int *)(iVar3 + 0x50));
  }
  (**(code **)(*param_1 + 0x20))(param_1,param_2);
  if ((param_4 & 0xffffffff) != 0) {
    iVar3 = *param_1;
    uVar2 = fn_82CEAC20(param_4);
    (**(code **)(iVar3 + 0x1c))(param_1,param_3,uVar2);
  }
  return;
}

