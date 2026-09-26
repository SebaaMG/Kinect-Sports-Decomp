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
extern unsigned int *auStack_48;
extern int fn_82230040();
extern int fn_8265C9E0();
extern int fn_828C49F8();
extern int fn_828C5A90();
extern unsigned int iStack_50;
extern unsigned int iStack_60;
extern unsigned int lbl_82002B04;
extern unsigned int uStack_54;
extern unsigned int uStack_58;
extern unsigned int uStack_64;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;


void fn_828C5CC0(int *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  undefined **ppuStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  int iStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  int iStack_50;
  undefined1 auStack_48 [72];
  
  uVar5 = param_1[4];
  if (param_2 < uVar5) {
    piVar6 = (int *)*param_1;
    uStack_68 = 0;
    iStack_60 = param_1[3] + uVar5;
    uStack_64 = 0;
    if ((piVar6 != (int *)0x0) && ((undefined4 *)*piVar6 != (undefined4 *)0x0)) {
      uStack_68 = *(undefined4 *)*piVar6;
    }
    piVar4 = (int *)0x0;
    if ((piVar6 != (int *)0x0) && ((undefined4 *)*piVar6 != (undefined4 *)0x0)) {
      piVar4 = *(int **)*piVar6;
    }
    iStack_50 = param_1[3] + param_2;
    piVar6 = (int *)0x0;
    if ((piVar4 != (int *)0x0) && ((undefined4 *)*piVar4 != (undefined4 *)0x0)) {
      piVar6 = *(int **)*piVar4;
    }
    uStack_58 = 0;
    uStack_54 = 0;
    if ((piVar6 != (int *)0x0) && ((undefined4 *)*piVar6 != (undefined4 *)0x0)) {
      uStack_58 = *(undefined4 *)*piVar6;
    }
    fn_828C5A90(auStack_48,param_1,&uStack_58,&uStack_68);
  }
  else {
    while (uVar5 < param_2) {
      if (((param_1[4] + param_1[3] & 3U) == 0) && ((uint)param_1[2] <= param_1[4] + 4U >> 2)) {
        fn_828C49F8(param_1,1);
      }
      iVar1 = param_1[4];
      iVar2 = param_1[3];
      uVar5 = (uint)(iVar1 + iVar2) >> 2;
      if ((uint)param_1[2] <= uVar5) {
        uVar5 = uVar5 - param_1[2];
      }
      iVar7 = uVar5 * 4;
      if (*(int *)(iVar7 + param_1[1]) == 0) {
        iVar3 = fn_8265C9E0(0x10);
        if (iVar3 == 0) {
          uStack_6c = 0;
          ppuStack_70 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
          fn_82230040(&ppuStack_70);
        }
        *(int *)(iVar7 + param_1[1]) = iVar3;
      }
      *(undefined4 *)(*(int *)(iVar7 + param_1[1]) + ((iVar1 + iVar2) * 4 & 0xcU)) = 0;
      uVar5 = param_1[4] + 1;
      param_1[4] = uVar5;
    }
  }
  return;
}

