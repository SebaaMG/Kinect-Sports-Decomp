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
extern unsigned int *auStack_240;
extern unsigned int *auStack_250;
extern int fn_82CE4040();
extern int fn_82CE4118();
extern int fn_82CE5410();
extern int fn_82CE63B0();
extern int fn_82CED958();
extern int fn_82CEDB38();
extern int fn_82CEE128();
extern int fn_82CEE578();
extern unsigned int *lbl_8323B464;


undefined8 fn_82E15258(int *param_1,int *param_2)

{
  int *piVar2;
  int iVar3;
  undefined8 uVar1;
  int iVar5;
  longlong lVar4;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  undefined1 auStack_250 [16];
  undefined1 auStack_240 [576];
  
  for (piVar2 = param_2; piVar2 != (int *)0x0; piVar2 = (int *)(**(code **)(*piVar2 + 0x24))()) {
    if (piVar2 == param_1) {
      fn_82CEE578(auStack_250,auStack_240,0x200);
      uVar1 = fn_82CEDB38(auStack_250,0xffffffff8214b368);
      uVar1 = fn_82CEE128(uVar1,param_1 + 2);
      uVar1 = fn_82CEDB38(uVar1,0xffffffff8214b360);
      uVar1 = fn_82CEE128(uVar1,param_2 + 2);
      fn_82CEDB38(uVar1,0xffffffff8214b330);
      (**(code **)(*lbl_8323B464 + 0xc))
                (lbl_8323B464,1,0xffffffffabba4554,auStack_240,0xffffffff8214b2c0,0x199);
                    /* WARNING: Subroutine does not return */
      fn_82CED958(auStack_250);
    }
  }
  fn_82CE4040(param_1);
  if (param_1 != (int *)0x0) {
    fn_82CE4040(param_1);
  }
  iVar7 = 0;
  iVar3 = *(int *)(param_1[3] + 0x20);
  if (0 < iVar3) {
    puVar6 = *(undefined4 **)(param_1[3] + 0x1c);
    do {
      if ((int *)*puVar6 == param_1) goto LAB_82e152e8;
      iVar7 = iVar7 + 1;
      puVar6 = puVar6 + 1;
    } while (iVar7 < iVar3);
  }
  iVar7 = -1;
LAB_82e152e8:
  fn_82CE4118(param_1);
  iVar3 = param_1[3];
  iVar8 = iVar7 * 4;
  iVar5 = *(int *)(iVar3 + 0x1c);
  if (*(int *)(iVar5 + iVar8) != 0) {
    fn_82CE4118();
  }
  *(undefined4 *)(iVar5 + iVar8) = 0;
  iVar5 = *(int *)(iVar3 + 0x20) + -1;
  *(int *)(iVar3 + 0x20) = iVar5;
  puVar6 = (undefined4 *)(*(int *)(iVar3 + 0x1c) + iVar8);
  iVar3 = (iVar5 - iVar7) * 4;
  if (0 < iVar3) {
    lVar4 = (ulonglong)(iVar3 - 1U >> 2) + 1;
    do {
      *puVar6 = puVar6[1];
      puVar6 = puVar6 + 1;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  fn_82CE4040(param_1);
  iVar3 = fn_82CE5410();
  if (param_2[8] != (param_2[9] & 0x3fffffffU)) {
    puVar6 = (undefined4 *)(param_2[8] * 4 + param_2[7]);
    if (puVar6 != (undefined4 *)0x0) {
      fn_82CE4040(param_1);
      *puVar6 = param_1;
    }
    param_2[8] = param_2[8] + 1;
    fn_82CE4118(param_1);
    param_1[3] = (int)param_2;
    fn_82CE4118(param_1);
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  fn_82CE63B0(*(undefined4 *)(iVar3 + 0x10),param_2 + 7,4);
}

