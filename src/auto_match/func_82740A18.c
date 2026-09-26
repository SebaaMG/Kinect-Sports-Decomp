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
extern unsigned int fStack_7c;
extern unsigned int fStack_88;
extern int fn_8267C498();
extern int fn_82681930();
extern int fn_826824B0();
extern int fn_8268CE70();
extern int fn_8268CE78();
extern int fn_8268CE80();
extern int fn_8268CE98();
extern int fn_8268CEB0();
extern int fn_82696958();
extern int fn_8269A678();
extern int fn_8269AFB8();
extern int fn_8269B930();
extern int fn_826C1BA0();
extern int fn_82741A50();
extern int fn_82F68CC0();
extern unsigned int iStack_6c;
extern unsigned int iStack_70;
extern unsigned int iStack_80;
extern unsigned int iStack_84;
extern unsigned int iStack_8c;
extern unsigned int iStack_90;
extern unsigned int lbl_82005708;
extern unsigned int lbl_8200571C;
extern unsigned int lbl_82012408;


undefined8 fn_82740A18(int param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4)

{
  char cVar1;
  char cVar2;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar3;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  double dVar10;
  int iStack_90;
  int iStack_8c;
  float fStack_88;
  int iStack_84;
  int iStack_80;
  float fStack_7c;
  int iStack_70;
  int iStack_6c;
  double dStack_68;
  double dStack_60;
  double dStack_58;
  
  pcVar7 = "pixelBounds";
  pcVar9 = *(char **)*param_3;
  pcVar8 = pcVar9;
  do {
    cVar1 = *pcVar8;
    cVar2 = *pcVar7;
    if (cVar1 == '\0') break;
    pcVar8 = pcVar8 + 1;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 == cVar2);
  if (cVar1 != cVar2) {
    pcVar7 = "colorTransform";
    pcVar8 = pcVar9;
    do {
      cVar1 = *pcVar8;
      cVar2 = *pcVar7;
      if (cVar1 == '\0') break;
      pcVar8 = pcVar8 + 1;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 == cVar2);
    if (cVar1 == cVar2) {
      if (*(int *)(param_1 + 0x20) == 0) {
        return 1;
      }
      piVar4 = (int *)fn_8269A678(*(undefined4 *)(param_1 + 0x24));
      if (piVar4 == (int *)0x0) {
        return 1;
      }
      piVar4[1] = piVar4[1] + 1;
      iVar5 = fn_82696958(param_4,param_2);
      if (iVar5 != 0) {
        *(uint *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1U & 0x8fffffff;
        iVar6 = (**(code **)(*(int *)(iVar5 + 0x10) + 8))(iVar5 + 0x10);
        if (iVar6 == 0x12) {
          fn_82F68CC0(piVar4 + 9,iVar5 + 0x30,0x20);
          (**(code **)(*piVar4 + 4))(piVar4);
          (**(code **)(*piVar4 + 0x14))(piVar4,0);
        }
        fn_826824B0(iVar5);
      }
    }
    else {
      pcVar8 = "matrix";
      do {
        cVar1 = *pcVar9;
        cVar2 = *pcVar8;
        if (cVar1 == '\0') break;
        pcVar9 = pcVar9 + 1;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 == cVar2);
      if (cVar1 != cVar2) {
        uVar3 = fn_826C1BA0(param_1,param_2,param_3,param_4);
        return uVar3;
      }
      if (*(int *)(param_1 + 0x20) == 0) {
        return 1;
      }
      piVar4 = (int *)fn_8269A678(*(undefined4 *)(param_1 + 0x24));
      if (piVar4 == (int *)0x0) {
        return 1;
      }
      piVar4[1] = piVar4[1] + 1;
      iVar5 = fn_82696958(param_4,param_2);
      if (iVar5 != 0) {
        *(uint *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1U & 0x8fffffff;
        iVar6 = (**(code **)(*(int *)(iVar5 + 0x10) + 8))(iVar5 + 0x10);
        if (iVar6 == 0xf) {
          fn_82741A50(&iStack_90,iVar5,param_2);
          fStack_88 = fStack_88 * lbl_8200571C;
          fStack_7c = fStack_7c * lbl_8200571C;
          piVar4[0x11] = iStack_90;
          piVar4[0x12] = iStack_8c;
          piVar4[0x13] = (int)fStack_88;
          piVar4[0x14] = iStack_84;
          piVar4[0x15] = iStack_80;
          piVar4[0x16] = (int)fStack_7c;
          fn_82681930(&iStack_70);
          fn_8269AFB8(piVar4,&iStack_70);
          dVar10 = (double)fn_8268CE70(&iStack_90);
          iStack_70 = (int)dVar10;
          dVar10 = (double)fn_8268CE78(&iStack_90);
          iStack_6c = (int)dVar10;
          dStack_58 = (double)fn_8268CEB0(&iStack_90);
          dStack_58 = dStack_58 * lbl_82012408;
          dStack_68 = (double)fn_8268CE80(&iStack_90);
          dStack_68 = dStack_68 * lbl_82005708;
          dVar10 = lbl_82005708;
          dStack_60 = (double)fn_8268CE98(&iStack_90);
          dStack_60 = dStack_60 * dVar10;
          fn_8269B930(piVar4,&iStack_70);
        }
        fn_826824B0(iVar5);
      }
    }
    fn_8267C498(piVar4);
  }
  return 1;
}

