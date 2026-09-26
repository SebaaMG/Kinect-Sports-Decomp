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
extern int fn_82CE4118();
extern int fn_82CE52E0();
extern int fn_82CE5410();
extern int fn_82CE6310();
extern int fn_82E0DF70();
extern int fn_82E162A8();


undefined8 fn_82E0B220(int param_1,int *param_2,ulonglong param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  ulonglong uVar3;
  int iVar5;
  undefined8 uVar4;
  undefined4 *puVar6;
  ulonglong uVar7;
  int iVar8;
  
  if (*(int *)(param_1 + 0x7c) != 0) {
    fn_82CE4118();
  }
  *(undefined4 *)(param_1 + 0x7c) = 0;
  fn_82E162A8(*(undefined4 *)(param_1 + 0x18),0);
  if ((param_3 & 0xffffffff) == 0) {
    uVar1 = *(uint *)(*(int *)(param_1 + 0x1c) + 0x14);
    iVar5 = fn_82CE5410();
    param_3 = fn_82CE52E0(*(undefined4 *)(iVar5 + 0x10),
                                ((ulonglong)uVar1 + ((ulonglong)uVar1 & 0x7fffffff) * 2 & 0xfffffff)
                                << 4);
    fn_82E0DF70(*(undefined4 *)(param_1 + 0x18),param_3);
  }
  iVar8 = *(int *)(*(int *)(param_1 + 0x1c) + 0x14) * 0x30;
  iVar5 = (**(code **)(*param_2 + 0x10))(param_2,param_3,iVar8);
  if (iVar5 == iVar8) {
    *(int *)(param_1 + 0x20) = (int)param_3;
    uVar1 = *(uint *)(*(int *)(param_1 + 0x1c) + 0x14);
    iVar5 = fn_82CE5410();
    if ((int)(*(uint *)(param_1 + 0x2c) & 0x3fffffff) < (int)uVar1) {
      uVar7 = ((ulonglong)*(uint *)(param_1 + 0x2c) & 0x3fffffff) << 1;
      if ((int)uVar7 <= (int)uVar1) {
        uVar7 = (ulonglong)uVar1;
      }
      fn_82CE6310(*(undefined4 *)(iVar5 + 0x10),(int *)(param_1 + 0x24),uVar7,4);
    }
    uVar7 = (ulonglong)uVar1 - (ulonglong)*(uint *)(param_1 + 0x28);
    if (0 < (longlong)uVar7) {
      puVar6 = (undefined4 *)(*(uint *)(param_1 + 0x28) * 4 + *(int *)(param_1 + 0x24) + -4);
      uVar3 = uVar7 & 0xffffffff;
      while (uVar3 != 0) {
        puVar6 = puVar6 + 1;
        *puVar6 = 0;
        uVar7 = uVar7 - 1;
        uVar3 = uVar7;
      }
    }
    *(uint *)(param_1 + 0x28) = uVar1;
    if (*(int *)(*(int *)(param_1 + 0x1c) + 0xc) < 4) {
      uVar1 = *(uint *)(*(int *)(param_1 + 0x1c) + 0x14);
      uVar7 = (ulonglong)uVar1;
      if (0 < (int)uVar1) {
        puVar6 = (undefined4 *)(*(int *)(param_1 + 0x20) + -0xc);
        do {
          puVar2 = puVar6 + 0xd;
          puVar6[0xe] = *puVar2;
          puVar6 = puVar6 + 0xc;
          *puVar6 = *puVar2;
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
      }
    }
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  return uVar4;
}

