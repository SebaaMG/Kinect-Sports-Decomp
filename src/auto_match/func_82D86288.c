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
extern unsigned int *auStack_90;
extern int fn_82CE4040();
extern int fn_82CE5410();
extern int fn_82CE63B0();
extern int fn_82D9A040();
extern int fn_82D9A2C8();
extern int fn_82DA6530();
extern int fn_82DA6A58();
extern int fn_82DA6BA8();
extern int fn_82DADB30();
extern int fn_83088518();
extern unsigned int iStack_54;
extern unsigned int iStack_60;
extern unsigned int iStack_64;
extern unsigned int iStack_70;
extern unsigned int iStack_8c;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_74;
extern unsigned int uStack_78;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;
extern unsigned int uStack_88;


void fn_82D86288(int param_1,int param_2,ulonglong param_3)

{
  uint uVar1;
  int *piVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  undefined1 auStack_90 [4];
  int iStack_8c;
  undefined2 uStack_88;
  uint uStack_80;
  uint uStack_7c;
  uint uStack_78;
  uint uStack_74;
  int iStack_70;
  uint uStack_6c;
  uint uStack_68;
  int iStack_64;
  int iStack_60;
  uint uStack_5c;
  uint uStack_58;
  int iStack_54;
  
  if ((ulonglong)*(uint *)(param_1 + 0x98) + (ulonglong)*(uint *)(param_1 + 0x94) == 0) {
    iStack_60 = 0;
    *(uint *)(param_1 + 0x94) = *(uint *)(param_1 + 0x94) + 1;
    uStack_5c = 0;
    uStack_58 = 0x80000000;
    piVar2 = (int *)fn_82CE5410();
    uVar1 = (uint)param_3;
    uVar7 = uVar1 | 0x80000000;
    iStack_60 = *piVar2;
    *piVar2 = ((int)((param_3 & 0xffffffff) << 2) + 0x7fU & 0xffffff80) + iStack_60;
    uStack_80 = 0;
    uStack_7c = 0;
    uStack_78 = 0x80000000;
    uStack_58 = uVar7;
    iStack_54 = iStack_60;
    puVar3 = (uint *)fn_82CE5410();
    uStack_80 = *puVar3;
    *puVar3 = ((int)((param_3 & 0xffffffff) << 5) + 0x7fU & 0xffffff80) + uStack_80;
    uStack_7c = uVar1;
    uStack_78 = uVar7;
    uStack_74 = uStack_80;
    uStack_5c = uVar1;
    if (0 < (int)uVar1) {
      lVar6 = 0;
      iVar5 = 0;
      do {
        piVar2 = *(int **)(iVar5 + param_2);
        if (piVar2[6] == 0) {
          iVar4 = (**(code **)(*piVar2 + 0x10))(piVar2);
          piVar2[6] = iVar4;
        }
        piVar2[2] = param_1;
        *(int **)(iVar5 + iStack_60) = piVar2 + 9;
        (**(code **)(*piVar2 + 0x18))(piVar2,lVar6 + (ulonglong)uStack_80);
        fn_82D9A040(piVar2,lVar6 + (ulonglong)uStack_80);
        fn_82CE4040(piVar2);
        iVar4 = fn_82CE5410();
        if (*(uint *)(param_1 + 0x118) == (*(uint *)(param_1 + 0x11c) & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
          fn_82CE63B0(*(undefined4 *)(iVar4 + 0x10),(int *)(param_1 + 0x114),4);
        }
        *(int **)(*(int *)(param_1 + 0x118) * 4 + *(int *)(param_1 + 0x114)) = piVar2;
        *(int *)(param_1 + 0x118) = *(int *)(param_1 + 0x118) + 1;
        fn_82DADB30(param_1,piVar2);
        fn_82D9A2C8(piVar2);
        param_3 = param_3 - 1;
        iVar5 = iVar5 + 4;
        lVar6 = lVar6 + 0x20;
      } while (param_3 != 0);
    }
    iStack_70 = 0;
    uStack_6c = 0;
    uStack_68 = 0x80000000;
    uVar1 = *(uint *)(param_1 + 0x338);
    piVar2 = (int *)fn_82CE5410();
    uStack_68 = uVar1 | 0x80000000;
    iStack_70 = *piVar2;
    *piVar2 = (uVar1 * 8 + 0x7f & 0xffffff80) + iStack_70;
    iStack_64 = iStack_70;
    (**(code **)(**(int **)(param_1 + 0x58) + 0x18))
              (*(int **)(param_1 + 0x58),&iStack_60,&uStack_80,&iStack_70);
    fn_83088518(*(undefined4 *)(param_1 + 100),iStack_70,uStack_6c);
    lVar6 = (ulonglong)*(uint *)(param_1 + 0x94) - 1;
    *(int *)(param_1 + 0x94) = (int)lVar6;
    if ((lVar6 == 0) && (*(char *)(param_1 + 0x9c) == '\0')) {
      if (*(int *)(param_1 + 0x8c) != 0) {
        *(undefined4 *)(param_1 + 0x8c) = 0;
        fn_82DA6BA8(*(undefined4 *)(param_1 + 0x88));
      }
      if ((*(int *)(param_1 + 0xa4) == 1) && (*(int *)(param_1 + 0x90) != 0)) {
        *(undefined4 *)(param_1 + 0x90) = 0;
        fn_82DA6A58(*(undefined4 *)(param_1 + 0x88));
      }
    }
    iVar5 = iStack_64;
    uStack_6c = -(uint)(iStack_70 != iStack_64) & uStack_6c;
    piVar2 = (int *)fn_82CE5410();
    *piVar2 = iVar5;
    iVar5 = fn_82CE5410();
    uStack_6c = 0;
    if ((uStack_68 & 0x80000000) == 0) {
      (**(code **)(**(int **)(iVar5 + 0x10) + 0x10))
                (*(int **)(iVar5 + 0x10),iStack_70,uStack_68 & 0x3fffffff);
    }
    uVar1 = uStack_74;
    iStack_70 = 0;
    uStack_68 = 0x80000000;
    uStack_7c = -(uint)(uStack_80 != uStack_74) & uStack_7c;
    puVar3 = (uint *)fn_82CE5410();
    *puVar3 = uVar1;
    iVar5 = fn_82CE5410();
    uStack_7c = 0;
    if ((uStack_78 & 0x80000000) == 0) {
      (**(code **)(**(int **)(iVar5 + 0x10) + 0x10))
                (*(int **)(iVar5 + 0x10),uStack_80,uStack_78 & 0x3fffffff);
    }
    iVar5 = iStack_54;
    uStack_80 = 0;
    uStack_78 = 0x80000000;
    uStack_5c = -(uint)(iStack_60 != iStack_54) & uStack_5c;
    piVar2 = (int *)fn_82CE5410();
    *piVar2 = iVar5;
    iVar5 = fn_82CE5410();
    uStack_5c = 0;
    if ((uStack_58 & 0x80000000) == 0) {
      (**(code **)(**(int **)(iVar5 + 0x10) + 0x10))
                (*(int **)(iVar5 + 0x10),iStack_60,uStack_58 & 0x3fffffff,4);
    }
  }
  else {
    uStack_88 = (undefined2)param_3;
    auStack_90[0] = 0xf;
    iStack_8c = param_2;
    fn_82DA6530(*(undefined4 *)(param_1 + 0x88),auStack_90);
  }
  return;
}

