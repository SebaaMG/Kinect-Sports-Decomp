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
extern unsigned int *auStack_220;
extern unsigned int *auStack_230;
extern int fn_82CED958();
extern int fn_82CEDB38();
extern int fn_82CEE578();
extern unsigned int *lbl_8323B464;


undefined8 fn_82DED480(int param_1,int param_2,int param_3)

{
  bool bVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int in_r0;
  ulonglong uVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 auStack_230 [16];
  undefined1 auStack_220 [544];
  
  piVar2 = *(int **)(param_1 + 0xc);
  uVar5 = (**(code **)(*piVar2 + 0x20))(piVar2);
  if ((uVar5 & 0xffffffff) < 8) {
    bVar1 = (int)uVar5 != 0;
    if ((uVar5 == 1 && bVar1) || (uVar5 == 2 && bVar1)) {
LAB_82ded4e4:
      iVar8 = 0x50;
      iVar7 = 0x90;
    }
    else {
      if ((uVar5 == 3 && bVar1) ||
         (((uVar5 == 4 && bVar1 || (uVar5 == 5 && bVar1)) || (uVar5 == 6 && bVar1))))
      goto LAB_82ded508;
      if (bVar1) goto LAB_82ded4e4;
      iVar8 = 0x20;
      iVar7 = 0x30;
    }
    puVar3 = (undefined4 *)((int)piVar2 + iVar8 & 0xfffffff0);
    uVar9 = puVar3[1];
    uVar10 = puVar3[2];
    uVar11 = puVar3[3];
    uVar6 = 0;
    puVar4 = (undefined4 *)(in_r0 + param_2 & 0xfffffff0);
    *puVar4 = *puVar3;
    puVar4[1] = uVar9;
    puVar4[2] = uVar10;
    puVar4[3] = uVar11;
    puVar3 = (undefined4 *)((int)piVar2 + iVar7 & 0xfffffff0);
    uVar9 = puVar3[1];
    uVar10 = puVar3[2];
    uVar11 = puVar3[3];
    puVar4 = (undefined4 *)(in_r0 + param_3 & 0xfffffff0);
    *puVar4 = *puVar3;
    puVar4[1] = uVar9;
    puVar4[2] = uVar10;
    puVar4[3] = uVar11;
  }
  else {
LAB_82ded508:
    fn_82CEE578(auStack_230,auStack_220,0x200);
    fn_82CEDB38(auStack_230,0xffffffff821453b0);
    (**(code **)(*lbl_8323B464 + 0xc))
              (lbl_8323B464,1,0xffffffffabbabf3b,auStack_220,0xffffffff82145380,0xe2);
    fn_82CED958(auStack_230);
    uVar6 = 1;
  }
  return uVar6;
}

