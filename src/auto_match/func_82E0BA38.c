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
extern int fn_82CE4040();
extern int fn_82CE4118();
extern int fn_82CE5410();
extern int fn_82CEAC20();
extern int fn_82E09F28();
extern int fn_82E0A398();
extern int fn_82E0A430();
extern int fn_82E0AAF0();
extern int fn_82E0ADB8();
extern int fn_82E129F0();
extern int fn_82E17418();
extern int fn_82E17540();
extern unsigned int iStack_6c;
extern unsigned int iStack_70;
extern unsigned int uStack_68;


int fn_82E0BA38(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar5;
  int *piVar6;
  undefined8 uVar4;
  int *piVar7;
  int iVar8;
  int iStack_70;
  int iStack_6c;
  uint uStack_68;
  
  piVar7 = param_1 + 0x1f;
  iVar5 = param_1[0x1f];
  if (iVar5 == 0) {
    (**(code **)(*param_1 + 0x28))(param_1);
    uVar3 = fn_82E0A398();
    iVar5 = fn_82CE5410();
    iVar5 = (**(code **)(**(int **)(iVar5 + 0x10) + 4))(*(int **)(iVar5 + 0x10),0x20);
    *(undefined2 *)(iVar5 + 4) = 0x20;
    iVar5 = fn_82E17540(iVar5,0);
    if (iVar5 != 0) {
      fn_82CE4040();
    }
    if (*piVar7 != 0) {
      fn_82CE4118();
    }
    *piVar7 = iVar5;
    fn_82CE4118(iVar5);
    if ((param_1[0x1e] == 0) || (*(int *)(param_1[0x1e] + 0x38) == 0)) {
      iStack_70 = 0;
      iStack_6c = 0;
      uStack_68 = 0x80000000;
      fn_82E0ADB8(param_1,&iStack_70);
      if (0 < iStack_6c) {
        iVar5 = 0;
        iVar8 = 0;
        do {
          uVar1 = *(undefined4 *)(iVar8 + iStack_70);
          uVar4 = (**(code **)(*param_1 + 0x28))(param_1);
          fn_82E129F0(uVar1,*(undefined4 *)(param_1[7] + 0xc),uVar4,param_1 + 2);
          piVar6 = (int *)*piVar7;
          iVar2 = *piVar6;
          uVar4 = fn_82CEAC20(uVar1);
          (**(code **)(iVar2 + 0x1c))(piVar6,uVar1,uVar4);
          iVar5 = iVar5 + 1;
          iVar8 = iVar8 + 0xc;
        } while (iVar5 < iStack_6c);
        fn_82E0A430(piVar7,*(undefined4 *)(param_1[7] + 0xc));
      }
      iVar5 = fn_82CE5410();
      iStack_6c = 0;
      if ((uStack_68 & 0x80000000) == 0) {
        (**(code **)(**(int **)(iVar5 + 0x10) + 0x10))
                  (*(int **)(iVar5 + 0x10),iStack_70,uStack_68 & 0x3fffffff,0xc);
      }
      iStack_70 = 0;
      uStack_68 = 0x80000000;
    }
    else {
      fn_82E17418(*piVar7,0);
      piVar6 = (int *)(**(code **)(*param_1 + 0x1c))(param_1);
      iVar5 = 0;
      if (0 < piVar6[1]) {
        iVar8 = 0;
        do {
          uVar1 = *(undefined4 *)(*piVar6 + iVar8 + 4);
          fn_82E09F28(*piVar7,uVar1);
          fn_82E0AAF0(*piVar7,*(undefined4 *)(*piVar6 + iVar8),uVar1,1);
          iVar5 = iVar5 + 1;
          iVar8 = iVar8 + 8;
        } while (iVar5 < piVar6[1]);
      }
    }
    fn_82E17418(*piVar7,uVar3);
    iVar5 = *piVar7;
  }
  return iVar5;
}

