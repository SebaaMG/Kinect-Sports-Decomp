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
extern unsigned int *auStack_50;
extern unsigned int fStack_64;
extern unsigned int fStack_68;
extern int fn_8268CC00();
extern int fn_8268CCB0();
extern int fn_82695608();
extern int fn_826957D0();
extern int fn_826959C8();
extern int fn_82696480();
extern int fn_826972E0();
extern int fn_8269A240();
extern int fn_826A7398();
extern int fn_826F97E8();
extern unsigned int iStack_6c;
extern unsigned int iStack_70;
extern unsigned int lbl_82005728;


void fn_82721190(int param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar6;
  char *pcVar7;
  undefined8 uVar4;
  uint uVar8;
  longlong lVar5;
  int *piVar9;
  undefined8 uVar10;
  uint uVar11;
  double dVar12;
  double dVar13;
  int iStack_70;
  int iStack_6c;
  float fStack_68;
  float fStack_64;
  longlong lStack_60;
  undefined1 auStack_50 [80];
  
  puVar1 = *(undefined1 **)(param_1 + 4);
  fn_826959C8(puVar1);
  *puVar1 = 0;
  piVar6 = (int *)fn_826A7398(*(undefined4 *)(param_1 + 0x18));
  uVar10 = 1;
  uVar11 = 0;
  if (0 < *(int *)(param_1 + 0x1c)) {
    pcVar7 = (char *)fn_826957D0(param_1,0);
    if (*pcVar7 == '\x02') {
      uVar2 = *(undefined4 *)(param_1 + 0x18);
      uVar10 = fn_826957D0(param_1,0);
      uVar10 = fn_82695608(uVar10,uVar2);
      if (1 < *(int *)(param_1 + 0x1c)) {
        uVar2 = *(undefined4 *)(param_1 + 0x18);
        uVar4 = fn_826957D0(param_1,1);
        dVar12 = (double)fn_826972E0(uVar4,uVar2);
        uVar11 = (uint)dVar12;
        lStack_60 = (longlong)(int)uVar11;
      }
    }
    else {
      iVar3 = *(int *)(param_1 + 0x1c);
      if (iVar3 == 1) {
        uVar2 = *(undefined4 *)(param_1 + 0x18);
        uVar4 = fn_826957D0(param_1,0);
        dVar12 = (double)fn_826972E0(uVar4,uVar2);
        uVar11 = (uint)dVar12;
        lStack_60 = (longlong)(int)uVar11;
      }
      else if (1 < iVar3) {
        if (2 < iVar3) {
          uVar2 = *(undefined4 *)(param_1 + 0x18);
          uVar10 = fn_826957D0(param_1,2);
          uVar10 = fn_82695608(uVar10,uVar2);
        }
        uVar2 = *(undefined4 *)(param_1 + 0x18);
        uVar4 = fn_826957D0(param_1,0);
        dVar12 = (double)fn_826972E0(uVar4,uVar2);
        uVar2 = *(undefined4 *)(param_1 + 0x18);
        uVar4 = fn_826957D0(param_1,1);
        dVar13 = (double)fn_826972E0(uVar4,uVar2);
        iVar3 = piVar6[0x1a];
        if (iVar3 == 0) {
          return;
        }
        fn_8268CC00(auStack_50);
        fn_8269A240(iVar3,auStack_50);
        fStack_68 = (float)(dVar12 * lbl_82005728);
        fStack_64 = (float)(dVar13 * lbl_82005728);
        fn_8268CCB0(auStack_50,&iStack_70,&fStack_68);
        goto LAB_82721354;
      }
    }
  }
  uVar8 = (**(code **)(*piVar6 + 0xd0))(piVar6);
  if (uVar8 <= uVar11) {
    return;
  }
  if (uVar11 < 4) {
    piVar9 = piVar6 + uVar11 * 9 + 0x251;
  }
  else {
    piVar9 = (int *)0x0;
  }
  iStack_6c = piVar9[6];
  iStack_70 = piVar9[5];
LAB_82721354:
  lVar5 = fn_826F97E8(piVar6,&iStack_70,uVar10,0);
  if (lVar5 != 0) {
    fn_82696480(*(undefined4 *)(param_1 + 4));
  }
  return;
}

