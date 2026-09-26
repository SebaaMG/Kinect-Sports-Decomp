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
extern int fn_8227F500();
extern int fn_82533578();


longlong fn_8227F020(int param_1,int param_2,uint *param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  bool bVar4;
  longlong lVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  int *piVar9;
  
  if (param_2 == 0) {
    lVar5 = 0;
  }
  else {
    piVar9 = *(int **)(param_1 + 0xc);
    piVar1 = *(int **)(param_1 + 0x10);
    *param_3 = 0xffffffff;
    uVar8 = 0;
    for (; piVar9 != piVar1; piVar9 = piVar9 + 1) {
      iVar2 = *piVar9;
      uVar7 = (ulonglong)*(uint *)(iVar2 + 0x70);
      if (uVar7 == 0) {
        bVar4 = false;
      }
      else {
        lVar5 = uVar7 + 0x10;
        iVar6 = fn_82533578(uVar7,uVar7 + 8,lVar5,param_2 + 0x24);
        if (iVar6 == 0) {
          iVar6 = fn_82533578(uVar7,lVar5,uVar7 + 0x18);
          bVar4 = false;
          if (iVar6 == 0) goto LAB_8227f0c4;
        }
        bVar4 = true;
      }
LAB_8227f0c4:
      if (bVar4) {
        if ((*(char *)(param_2 + 0x40) == '\0') || (bVar4 = true, *(char *)(param_2 + 0x42) == '\0')
           ) {
          bVar4 = false;
        }
        if (((!bVar4) || ((~(ulonglong)*(uint *)(iVar2 + 0x6c) & 1) == 0)) ||
           (((~(ulonglong)*(uint *)(iVar2 + 0x6c) & 0xffffffff) >> 1 & 1) == 0)) goto LAB_8227f120;
        *param_3 = uVar8;
        fn_8227F500(iVar2);
      }
      else {
LAB_8227f120:
        if ((*(uint *)(iVar2 + 0x6c) & 4) != 0) {
          if (*(code **)(iVar2 + 4) != (code *)0x0) {
            (**(code **)(iVar2 + 4))(*(undefined4 *)(iVar2 + 0x14),*(undefined4 *)(iVar2 + 0xc),0);
          }
          piVar3 = *(int **)(iVar2 + 0x10);
          if (piVar3 != (int *)0x0) {
            (**(code **)(*piVar3 + 4))(piVar3,*(undefined4 *)(iVar2 + 0x14),0);
          }
          *(uint *)(iVar2 + 0x6c) = *(uint *)(iVar2 + 0x6c) & 0xfffffffb;
        }
      }
      uVar8 = uVar8 + 1;
    }
    lVar5 = -(ulonglong)*param_3 + -1;
    lVar5 = lVar5 + (-(ulonglong)(lVar5 == 0) - (-(ulonglong)*param_3 + -2));
  }
  return lVar5;
}

