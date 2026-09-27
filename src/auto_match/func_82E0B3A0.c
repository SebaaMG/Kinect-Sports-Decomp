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
extern int fn_82CE63B0();
extern int fn_82CEA160();
extern int fn_82CEA220();
extern int fn_82CEA280();
extern int fn_82E0A578();
extern int fn_82E129F0();
extern unsigned int iStack_70;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;


undefined8 fn_82E0B3A0(int param_1,undefined8 param_2,undefined8 param_3,int *param_4)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  struct { int first; uint second; } stack_pair_70;

  uint uStack_68;
  
  piVar1 = *(int **)(param_1 + 4);
  iVar3 = fn_82CE5410();
  if (piVar1[1] == (piVar1[2] & 0x3fffffffU)) {
                    /* WARNING: Subroutine does not return */
    fn_82CE63B0(*(undefined4 *)(iVar3 + 0x10),piVar1,8);
  }
  iVar3 = *piVar1;
  iVar4 = piVar1[1] * 8;
  piVar1[1] = piVar1[1] + 1;
  *(int *)(iVar4 + iVar3) = (int)param_2;
  *(int *)(iVar4 + iVar3 + 4) = (int)param_3;
  iVar3 = fn_82CE5410();
  iVar8 = param_1 + 0xc;
  fn_82CEA160(iVar8,*(undefined4 *)(iVar3 + 0x10),param_2,2);
  stack_pair_70.first = 0;
  stack_pair_70.second = 0;
  uStack_68 = 0x80000000;
  iVar3 = param_4[1];
  iVar4 = fn_82CE5410();
  if ((int)(uStack_68 & 0x3fffffff) < iVar3) {
    fn_82CE6310(*(undefined4 *)(iVar4 + 0xc),&stack_pair_70.first,iVar3,8);
  }
  iVar3 = 0;
  if (0 < param_4[1]) {
    iVar4 = 0;
    do {
      puVar9 = (undefined4 *)(iVar4 + *param_4);
      iVar7 = **(int **)(iVar4 + *param_4);
      if ((iVar7 != 0) && (iVar5 = fn_82CEA220(iVar8,iVar7), *(int *)(param_1 + 0x14) < iVar5)) {
        uVar6 = fn_82CEA280(*(undefined4 *)(param_1 + 8),iVar7,puVar9[1]);
        puVar9[1] = uVar6;
        iVar5 = fn_82CE5410();
        fn_82CEA160(iVar8,*(undefined4 *)(iVar5 + 0x10),iVar7,1);
        fn_82E129F0(puVar9[1],*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c),
                     *(undefined4 *)(param_1 + 0x20));
        iVar7 = fn_82CE5410();
        if (stack_pair_70.second == (uStack_68 & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
          fn_82CE63B0(*(undefined4 *)(iVar7 + 0xc),&stack_pair_70.first,8);
        }
        iVar7 = stack_pair_70.second * 8;
        stack_pair_70.second = stack_pair_70.second + 1;
        *(undefined4 *)(iVar7 + stack_pair_70.first) = *puVar9;
        *(undefined4 *)(iVar7 + stack_pair_70.first + 4) = puVar9[1];
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 8;
    } while (iVar3 < param_4[1]);
  }
  iVar3 = *param_4;
  iVar4 = param_4[1];
  uVar2 = param_4[2];
  param_4[2] = uStack_68;
  *param_4 = stack_pair_70.first;
  param_4[1] = stack_pair_70.second;
  stack_pair_70.first = iVar3;
  stack_pair_70.second = iVar4;
  uStack_68 = uVar2;
  fn_82E0A578(param_2,param_3,*(undefined4 *)(param_1 + 8),1);
  iVar3 = fn_82CE5410();
  stack_pair_70.second = 0;
  if ((uStack_68 & 0x80000000) == 0) {
    (**(code **)(**(int **)(iVar3 + 0xc) + 0x10))
              (*(int **)(iVar3 + 0xc),stack_pair_70.first,uStack_68 & 0x3fffffff,8);
  }
  return 0;
}

