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
extern int fn_82421E98();
extern int fn_82CE5410();
extern int fn_82CE63B0();
extern int fn_82D40130();
extern int fn_82E05A40();
extern int fn_82E084C8();
extern unsigned int iStack_70;
extern unsigned int iStack_74;
extern unsigned int uStack_6c;
extern unsigned int uStack_78;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;


void fn_82E05B78(int param_1,int param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  
  uVar9 = 0xffffffffffffffff;
  iVar8 = 0;
  if (0 < *(int *)(param_1 + 0xc)) {
    iVar10 = 0;
    do {
      iVar1 = *(int *)(param_2 + 4);
      if (param_3 != (int *)0x0) {
        uVar9 = 0;
        uVar2 = param_3[1];
        iVar6 = *(int *)(*(int *)(iVar10 + *(int *)(param_1 + 8)) + 0x18);
        if (0 < (int)uVar2) {
          piVar7 = (int *)*param_3;
          do {
            if (*piVar7 == iVar6) {
              if ((int)uVar9 != -1) goto LAB_82e05c54;
              break;
            }
            uVar9 = uVar9 + 1;
            piVar7 = piVar7 + 1;
          } while ((int)uVar9 < (int)uVar2);
        }
        iVar5 = fn_82CE5410();
        if (param_3[1] == (param_3[2] & 0x3fffffffU)) {
                    /* WARNING: Subroutine does not return */
          fn_82CE63B0(*(undefined4 *)(iVar5 + 0x10),param_3,4);
        }
        *(int *)(param_3[1] * 4 + *param_3) = iVar6;
        param_3[1] = param_3[1] + 1;
        uVar9 = (ulonglong)uVar2;
      }
LAB_82e05c54:
      uStack_80 = 0;
      uStack_7c = 0;
      uStack_78 = 0x80000000;
      iStack_74 = 0;
      iStack_70 = 0;
      uStack_6c = 0x80000000;
      fn_82E084C8(*(undefined4 *)(iVar10 + *(int *)(param_1 + 8)),&uStack_80,uVar9);
      uVar4 = uStack_7c;
      uVar3 = uStack_80;
      iVar6 = 0;
      if (0 < iStack_70) {
        iVar5 = 0;
        do {
          iVar6 = iVar6 + 1;
          *(int *)(iVar5 + iStack_74) = iVar1 + *(int *)(iVar5 + iStack_74);
          *(int *)(iVar5 + iStack_74 + 4) = iVar1 + *(int *)(iVar5 + iStack_74 + 4);
          *(int *)(iVar5 + iStack_74 + 8) = iVar1 + *(int *)(iVar5 + iStack_74 + 8);
          iVar5 = iVar5 + 0x10;
        } while (iVar6 < iStack_70);
      }
      iVar6 = fn_82CE5410();
      fn_82D40130(param_2,*(undefined4 *)(iVar6 + 0x10),iVar1,0,uVar3,uVar4);
      iVar6 = iStack_70;
      iVar1 = iStack_74;
      uVar3 = *(undefined4 *)(param_2 + 0x10);
      iVar5 = fn_82CE5410();
      fn_82E05A40(param_2 + 0xc,*(undefined4 *)(iVar5 + 0x10),uVar3,0,iVar1,iVar6);
      fn_82421E98(&uStack_80);
      iVar8 = iVar8 + 1;
      iVar10 = iVar10 + 4;
    } while (iVar8 < *(int *)(param_1 + 0xc));
  }
  return;
}

