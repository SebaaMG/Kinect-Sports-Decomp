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
extern unsigned int *auStack_80;
extern int fn_82CE4118();
extern int fn_82CE5410();
extern int fn_82D9A260();
extern int fn_82DA6530();
extern int fn_82DA6A58();
extern int fn_82DA6BA8();
extern int fn_82DADC08();
extern int fn_830885D0();
extern unsigned int iStack_54;
extern unsigned int iStack_60;
extern unsigned int iStack_64;
extern unsigned int iStack_70;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_78;


void fn_82D86660(int param_1,int *param_2,ulonglong param_3)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined1 auStack_80 [4];
  int *piStack_7c;
  undefined2 uStack_78;
  int iStack_70;
  uint uStack_6c;
  uint uStack_68;
  int iStack_64;
  int iStack_60;
  uint uStack_5c;
  uint uStack_58;
  int iStack_54;
  
  if ((ulonglong)*(uint *)(param_1 + 0x98) + (ulonglong)*(uint *)(param_1 + 0x94) == 0) {
    iStack_70 = 0;
    *(uint *)(param_1 + 0x94) = *(uint *)(param_1 + 0x94) + 1;
    uStack_6c = 0;
    uStack_68 = 0x80000000;
    piVar3 = (int *)fn_82CE5410();
    uVar2 = (uint)param_3;
    uStack_68 = uVar2 | 0x80000000;
    iStack_70 = *piVar3;
    *piVar3 = ((int)((param_3 & 0xffffffff) << 2) + 0x7fU & 0xffffff80) + iStack_70;
    iStack_64 = iStack_70;
    if (0 < (int)uVar2) {
      piVar3 = param_2 + -1;
      uVar8 = param_3;
      do {
        piVar3 = piVar3 + 1;
        iVar4 = *piVar3;
        *(int *)(uStack_6c * 4 + iStack_70) = iVar4 + 0x24;
        uStack_6c = uStack_6c + 1;
        fn_82DADC08(param_1,iVar4);
        fn_82D9A260(iVar4);
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
    if (uStack_6c != 0) {
      iStack_60 = 0;
      uStack_5c = 0;
      uStack_58 = 0x80000000;
      uVar1 = *(uint *)(param_1 + 0x338);
      piVar3 = (int *)fn_82CE5410();
      uStack_58 = uVar1 | 0x80000000;
      iStack_60 = *piVar3;
      *piVar3 = (uVar1 * 8 + 0x7f & 0xffffff80) + iStack_60;
      iStack_54 = iStack_60;
      (**(code **)(**(int **)(param_1 + 0x58) + 0x20))
                (*(int **)(param_1 + 0x58),&iStack_70,&iStack_60);
      fn_830885D0(*(undefined4 *)(param_1 + 100),iStack_60,uStack_5c);
      iVar4 = iStack_54;
      uStack_5c = -(uint)(iStack_60 != iStack_54) & uStack_5c;
      piVar3 = (int *)fn_82CE5410();
      *piVar3 = iVar4;
      iVar4 = fn_82CE5410();
      uStack_5c = 0;
      if ((uStack_58 & 0x80000000) == 0) {
        (**(code **)(**(int **)(iVar4 + 0x10) + 0x10))
                  (*(int **)(iVar4 + 0x10),iStack_60,uStack_58 & 0x3fffffff);
      }
      iStack_60 = 0;
      uStack_58 = 0x80000000;
    }
    if (0 < (int)uVar2) {
      do {
        piVar3 = (int *)*param_2;
        iVar4 = 0;
        piVar3[2] = 0;
        if (0 < *(int *)(param_1 + 0x118)) {
          piVar5 = *(int **)(param_1 + 0x114);
          do {
            if ((int *)*piVar5 == piVar3) goto LAB_82d8686c;
            iVar4 = iVar4 + 1;
            piVar5 = piVar5 + 1;
          } while (iVar4 < *(int *)(param_1 + 0x118));
        }
        iVar4 = -1;
LAB_82d8686c:
        iVar6 = *(int *)(param_1 + 0x118) + -1;
        *(int *)(param_1 + 0x118) = iVar6;
        if (iVar6 != iVar4) {
          *(undefined4 *)(iVar4 * 4 + *(int *)(param_1 + 0x114)) =
               *(undefined4 *)(iVar6 * 4 + *(int *)(param_1 + 0x114));
        }
        if (*(short *)(piVar3 + 1) == 0) {
          (**(code **)(*piVar3 + 0x34))(piVar3);
        }
        fn_82CE4118(piVar3);
        param_3 = param_3 - 1;
        param_2 = param_2 + 1;
      } while (param_3 != 0);
    }
    lVar7 = (ulonglong)*(uint *)(param_1 + 0x94) - 1;
    *(int *)(param_1 + 0x94) = (int)lVar7;
    if ((lVar7 == 0) && (*(char *)(param_1 + 0x9c) == '\0')) {
      if (*(int *)(param_1 + 0x8c) != 0) {
        *(undefined4 *)(param_1 + 0x8c) = 0;
        fn_82DA6BA8(*(undefined4 *)(param_1 + 0x88));
      }
      if ((*(int *)(param_1 + 0xa4) == 1) && (*(int *)(param_1 + 0x90) != 0)) {
        *(undefined4 *)(param_1 + 0x90) = 0;
        fn_82DA6A58(*(undefined4 *)(param_1 + 0x88));
      }
    }
    iVar4 = iStack_64;
    uStack_6c = -(uint)(iStack_70 != iStack_64) & uStack_6c;
    piVar3 = (int *)fn_82CE5410();
    *piVar3 = iVar4;
    iVar4 = fn_82CE5410();
    uStack_6c = 0;
    if ((uStack_68 & 0x80000000) == 0) {
      (**(code **)(**(int **)(iVar4 + 0x10) + 0x10))
                (*(int **)(iVar4 + 0x10),iStack_70,uStack_68 & 0x3fffffff,4);
    }
  }
  else {
    uStack_78 = (undefined2)param_3;
    auStack_80[0] = 0x10;
    piStack_7c = param_2;
    fn_82DA6530(*(undefined4 *)(param_1 + 0x88),auStack_80);
  }
  return;
}

