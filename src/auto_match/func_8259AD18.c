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
extern int fn_822315A0();
extern int fn_82517978();
extern int fn_82517A50();
extern unsigned int uStack_64;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;


ulonglong fn_8259AD18(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  int iVar11;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  
  if (*(int *)(param_1 + 0x94) != 2) {
    return 0;
  }
  if (*(int *)(param_1 + 0x88) == 0) {
    piVar6 = *(int **)(param_1 + 0x78);
    iVar5 = 0;
    uVar4 = 0;
    if (piVar6 != *(int **)(param_1 + 0x7c)) {
      piVar7 = piVar6 + 2;
      do {
        uStack_70 = 0;
        uStack_6c = 0;
        fn_82517978(&uStack_70,piVar7[-1],*piVar7,0);
        uVar3 = (**(code **)(*(int *)*piVar6 + 8))
                          ((int *)*piVar6,*(undefined4 *)(param_1 + 0x74),&uStack_70);
        if (uVar3 == 0) {
          uStack_68 = 0;
          uStack_64 = 0;
          fn_82517978(&uStack_68,piVar7[-1],*piVar7,0);
          (*(code *)piVar7[2])(&uStack_68,piVar7[1],*(undefined4 *)(param_1 + 0x70),param_1);
        }
        if (((uVar3 & 0xffffffff) == 0x3e5) || ((uVar3 & 0xffffffff) == 0x3e4)) {
          iVar5 = iVar5 + 1;
          piVar6 = piVar6 + 5;
          piVar7 = piVar7 + 5;
        }
        else {
          if ((uVar4 & 0xffffffff) == 0) {
            uVar4 = uVar3;
          }
          puVar1 = (undefined4 *)*piVar6;
          if (puVar1 != (undefined4 *)0x0) {
            (**(code **)*puVar1)(puVar1,1);
          }
          piVar9 = *(int **)(param_1 + 0x7c);
          piVar8 = piVar7 + 3;
          if (piVar8 != piVar9) {
            piVar10 = piVar7 + 1;
            do {
              piVar10[-3] = *piVar8;
              fn_82517A50(piVar10 + -2,piVar10 + 3);
              piVar8 = piVar8 + 5;
              *piVar10 = piVar10[5];
              piVar10[1] = piVar10[6];
              piVar10 = piVar10 + 5;
            } while (piVar8 != piVar9);
          }
          iVar2 = *(int *)(param_1 + 0x7c);
          iVar11 = iVar2 + -0x14;
          if (iVar2 + -0x14 != iVar2) {
            piVar9 = (int *)(iVar2 + -0xc);
            do {
              if (*piVar9 != 0) {
                fn_822315A0();
              }
              iVar11 = iVar11 + 0x14;
              piVar9 = piVar9 + 5;
            } while (iVar11 != iVar2);
          }
          *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) + -0x14;
        }
      } while (piVar6 != *(int **)(param_1 + 0x7c));
      if (0 < iVar5) {
        return 0x3e5;
      }
    }
    if (*(uint *)(param_1 + 0x88) <= *(uint *)(param_1 + 0x8c)) {
      return uVar4;
    }
  }
  else if (*(int *)(param_1 + 0x88) == *(int *)(param_1 + 0x8c)) {
    return (ulonglong)*(uint *)(param_1 + 0x90);
  }
  return 0x3e5;
}

