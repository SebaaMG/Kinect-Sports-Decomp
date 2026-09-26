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
extern int fn_8225F160();
extern int fn_8225F3C0();
extern int fn_8249C848();
extern int fn_8249CB58();
extern int fn_8249D600();
extern unsigned int stack0x0000001c;
extern unsigned int uStack0000001c;


ulonglong fn_8249C418(int param_1,ulonglong param_2,int param_3,int param_4,int param_5)

{
  bool bVar1;
  byte bVar2;
  bool bVar3;
  int iVar5;
  undefined4 *puVar6;
  ulonglong uVar4;
  undefined4 *puVar7;
  int iVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  undefined4 uStack0000001c;
  int aiStack_50 [20];
  
  uStack0000001c = (undefined4)param_2;
  aiStack_50[0] = 0;
  uVar9 = 1;
  if ((param_3 != 0) || (iVar5 = fn_8249C848(param_1,param_2,aiStack_50), iVar5 == 0)) {
    puVar7 = (undefined4 *)fn_8249CB58(param_1 + 0x34,&stack0x0000001c);
    (**(code **)(*(int *)*puVar7 + 0xc))((int *)*puVar7,*(undefined4 *)(param_1 + 0xb0));
    return 1;
  }
  if (param_4 != 0) {
    bVar1 = *(int *)(param_1 + 8) == 2;
    if ((!bVar1) || (uVar10 = 1, *(int *)(param_1 + 0x88) != 0)) {
      uVar10 = 0;
    }
    if (param_5 == 0) {
      puVar7 = (undefined4 *)fn_8249CB58(param_1 + 0x34,&stack0x0000001c);
      uVar9 = (**(code **)(*(int *)*puVar7 + 4))
                        ((int *)*puVar7,*(undefined4 *)(param_1 + 0xb0),0,bVar1,uVar10);
      uVar9 = uVar9 & 1;
    }
    else {
      fn_8225F160();
      iVar5 = fn_8225F3C0();
      if ((((*(int *)(param_1 + 8) == 2) || (*(int *)(param_1 + 8) == 1)) ||
          ((*(uint *)(param_1 + 0x6c) & param_2) != 0)) || (bVar3 = true, iVar5 != 1)) {
        bVar3 = false;
      }
      iVar5 = 0;
      puVar7 = (undefined4 *)(param_1 + 0x14);
      do {
        if ((!bVar3) || (iVar5 == *(int *)(param_1 + 0x20))) {
          puVar6 = (undefined4 *)fn_8249CB58(param_1 + 0x34,&stack0x0000001c);
          uVar4 = (**(code **)(*(int *)*puVar6 + 4))
                            ((int *)*puVar6,*(undefined4 *)(param_1 + 0xb0),*puVar7,bVar1,uVar10);
          uVar9 = uVar4 & uVar9;
        }
        iVar5 = iVar5 + 1;
        puVar7 = puVar7 + 1;
      } while (iVar5 < 2);
    }
  }
  if (aiStack_50[0] == 0) {
    return uVar9;
  }
  iVar5 = *(int *)(*(int *)(param_1 + 0x110) + 0x2c);
  if (*(int *)(param_1 + 8) == 0) {
    iVar8 = fn_8249D600(*(int *)(param_1 + 0x110),*(undefined4 *)(param_1 + 4));
    bVar2 = 0;
    if (iVar8 == 0) goto LAB_8249c5a4;
  }
  bVar2 = 1;
LAB_8249c5a4:
  if ((bool)(iVar5 == 0 & bVar2)) {
    *(undefined4 *)(param_1 + 0x8c) = 1;
  }
  return uVar9;
}

