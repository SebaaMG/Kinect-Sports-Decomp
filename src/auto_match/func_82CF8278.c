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
extern unsigned int *auStack_130;
extern int fn_82CE4118();
extern int fn_82CF7C08();
extern int fn_82CFBB60();
extern unsigned int uStack_138;
extern unsigned int uStack_13c;
extern unsigned int uStack_140;


void fn_82CF8278(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined8 in_r0;
  longlong lVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined1 auStack_130 [304];
  
  if ((*(uint *)(*(int *)(param_1 + 0x44) + 4) & 0x7fffffff) != 0) {
    (**(code **)(param_1 + 0x3c))(0xffffffff82133868,*(undefined4 *)(param_1 + 0x40));
    piVar5 = *(int **)(param_1 + 0x44);
    iVar7 = 0;
    if (-1 < piVar5[2]) {
      piVar6 = (int *)*piVar5;
      do {
        if (*piVar6 != -1) break;
        iVar7 = iVar7 + 1;
        piVar6 = piVar6 + 4;
      } while (iVar7 <= piVar5[2]);
    }
    if (iVar7 <= piVar5[2]) {
      do {
        iVar1 = *piVar5;
        iVar4 = iVar1 + iVar7 * 0x10;
        uStack_140 = *(undefined4 *)(iVar4 + 4);
        uStack_13c = *(undefined4 *)(iVar4 + 8);
        uStack_138 = *(undefined4 *)(iVar4 + 0xc);
        fn_82CF7C08(param_1,0xffffffff82133854,*(undefined4 *)(iVar1 + iVar7 * 0x10),&uStack_140,
                      uStack_140,iVar1);
        piVar5 = *(int **)(param_1 + 0x44);
        iVar7 = iVar7 + 1;
        if (iVar7 <= piVar5[2]) {
          piVar6 = (int *)(iVar7 * 0x10 + *piVar5);
          do {
            if (*piVar6 != -1) break;
            iVar7 = iVar7 + 1;
            piVar6 = piVar6 + 4;
          } while (iVar7 <= piVar5[2]);
        }
      } while (iVar7 <= piVar5[2]);
    }
    fn_82CFBB60(auStack_130,0x100,0xffffffff82133840,piVar5[1] & 0x7fffffff);
    (**(code **)(param_1 + 0x3c))(auStack_130,*(undefined4 *)(param_1 + 0x40));
    (**(code **)(param_1 + 0x3c))(0xffffffff82133780,*(undefined4 *)(param_1 + 0x40));
    trapWord(0x1f,in_r0,0x16);
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  if ((*(uint *)(param_1 + 0x10) & 0x80000000) == 0) {
    (**(code **)(**(int **)(param_1 + 0x14) + 0x10))
              (*(int **)(param_1 + 0x14),*(undefined4 *)(param_1 + 8),
               *(uint *)(param_1 + 0x10) & 0x3fffffff,0x10);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0x80000000;
  piVar5 = *(int **)(param_1 + 0x44);
  piVar6 = *(int **)(param_1 + 0x34);
  lVar3 = (ulonglong)(uint)piVar5[2] + 1;
  if (lVar3 != 0) {
    iVar7 = 0;
    do {
      *(undefined4 *)(iVar7 + *piVar5) = 0xffffffff;
      iVar7 = iVar7 + 0x10;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  uVar2 = piVar5[1];
  piVar5[1] = uVar2 & 0x80000000;
  if ((uVar2 & 0x80000000) == 0) {
    (**(code **)(*piVar6 + 8))(piVar6,*piVar5,((ulonglong)(uint)piVar5[2] + 1 & 0xfffffff) << 4);
  }
  (**(code **)(**(int **)(param_1 + 0x38) + 8))
            (*(int **)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x44),0xc);
  fn_82CE4118(*(undefined4 *)(param_1 + 4));
  return;
}

