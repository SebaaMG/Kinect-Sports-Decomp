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
extern int fn_8267BE38();
extern int fn_8270E320();
extern int fn_8276F9E8();
extern int fn_82770430();
extern int fn_82770B88();
extern int fn_827B6118();
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


void fn_82770E60(int param_1,int *param_2)

{
  int iVar3;
  longlong lVar1;
  int iVar4;
  undefined8 uVar2;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  
  iVar7 = 0;
  uVar6 = 0;
  uVar5 = 0;
  if (param_2[1] != 0) {
    iVar4 = 0;
    do {
      if ((*(int *)(*(int *)(iVar4 + *param_2) + 0x10) == 0) &&
         ((*(int *)(*(int *)(param_1 + 8) + 0x20) == 0 ||
          (iVar3 = (**(code **)(**(int **)(*(int *)(iVar4 + *param_2) + 0xc) + 0x38))(),
          iVar3 <= *(int *)(*(int *)(param_1 + 8) + 0x20))))) {
        lVar1 = (**(code **)(**(int **)(*(int *)(iVar4 + *param_2) + 0xc) + 0x38))();
        uVar6 = lVar1 + uVar6;
      }
      uVar5 = uVar5 + 1;
      iVar4 = iVar4 + 4;
    } while (uVar5 < (uint)param_2[1]);
  }
  uStack_50 = 0;
  uStack_4c = 0;
  uStack_48 = 0;
  if ((uVar6 & 0xffffffff) != 0) {
    fn_8270E320(&uStack_50,&uStack_50,uVar6);
  }
  fn_827B6118(param_1 + 0x148);
  uVar5 = 0;
  if (param_2[1] != 0) {
    do {
      if ((*(int *)(*(int *)(iVar7 + *param_2) + 0x10) == 0) &&
         ((*(int *)(*(int *)(param_1 + 8) + 0x20) == 0 ||
          (iVar4 = (**(code **)(**(int **)(*(int *)(iVar7 + *param_2) + 0xc) + 0x38))(),
          iVar4 <= *(int *)(*(int *)(param_1 + 8) + 0x20))))) {
        fn_82770B88(param_1,&uStack_50,*(undefined4 *)(iVar7 + *param_2));
      }
      uVar5 = uVar5 + 1;
      iVar7 = iVar7 + 4;
    } while (uVar5 < (uint)param_2[1]);
  }
  uVar2 = fn_82770430(param_1,&uStack_50);
  fn_8276F9E8(param_1,&uStack_50,uVar2);
  fn_8267BE38(uStack_50);
  return;
}

