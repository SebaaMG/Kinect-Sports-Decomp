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
extern int fn_8267B7A8();
extern int fn_8267BE38();
extern int fn_8267C488();
extern int fn_8267C498();
extern int fn_8267C4F0();
extern int fn_82682298();
extern int fn_82687270();
extern int fn_82693F10();
extern int fn_826959C8();
extern int fn_82696330();
extern int fn_8269A608();
extern int fn_826AAB20();
extern int fn_826B2290();
extern int fn_826C66D0();
extern int fn_826C66D8();
extern int fn_826CE3B0();
extern int fn_826DF960();
extern int fn_826F5DE0();
extern int fn_826F6FA8();
extern int fn_826F8E90();
extern int fn_826FB150();
extern int fn_826FB1C8();
extern int fn_826FC7A0();
extern int fn_826FDAB8();
extern int fn_826FE988();
extern int fn_82700A78();
extern int fn_82703030();
extern int fn_82703E98();
extern int fn_82704708();
extern int fn_82704BC0();
extern int fn_82705028();
extern int fn_827B5EA8();
extern unsigned int lbl_82005928;
extern unsigned int lbl_82005B28;
extern unsigned int lbl_8200DE58;
extern unsigned int lbl_8200DE70;


void fn_82709CD0(undefined4 *param_1)

{
  int *piVar1;
  uint *puVar2;
  int *piVar5;
  char cVar7;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar6;
  undefined4 *puVar8;
  undefined4 *puVar9;
  uint uVar10;
  uint uVar12;
  longlong lVar11;
  ulonglong uVar13;
  undefined4 *puVar14;
  
  *param_1 = &lbl_8200DE70;
  param_1[2] = &lbl_8200DE58;
  fn_8267B7A8(param_1[5],0);
  piVar5 = (int *)(**(code **)(param_1[2] + 0xc))(param_1 + 2,0x1b);
  if ((piVar5 != (int *)0x0) &&
     (cVar7 = (**(code **)(*piVar5 + 0x48))(piVar5,param_1), cVar7 != '\0')) {
    (**(code **)(*piVar5 + 0x50))(piVar5);
  }
  fn_8267BE38(param_1[0x2c1]);
  if (param_1[0x46] != 0) {
    fn_8267C498();
  }
  param_1[0x46] = 0;
  piVar1 = (int *)param_1[0x1a];
  if (piVar1 != (int *)0x0) {
    uVar10 = param_1[0x279];
    uVar3 = (**(code **)(*(int *)param_1[0x1b] + 0x30))();
    uVar4 = (**(code **)(*piVar1 + 0x94))(piVar1);
    fn_82693F10((ulonglong)uVar10 + 0x254,uVar4,uVar3);
  }
  fn_82703E98(param_1);
  fn_826FB150(param_1 + 0x41);
  iVar6 = fn_826F6FA8(param_1,0);
  if (iVar6 != 0) {
    fn_826CE3B0();
  }
  uVar13 = (ulonglong)(uint)param_1[0x18];
  if (uVar13 != 0) {
    iVar6 = param_1[0x18] << 3;
    do {
      fn_826C66D8(*(undefined4 *)(param_1[0x17] + iVar6 + -4));
      uVar13 = uVar13 - 1;
      iVar6 = iVar6 + -8;
    } while (uVar13 != 0);
  }
  uVar13 = (ulonglong)(uint)param_1[0x18];
  if (uVar13 != 0) {
    iVar6 = param_1[0x18] << 3;
    do {
      fn_826C66D0(*(undefined4 *)(param_1[0x17] + iVar6 + -4));
      uVar13 = uVar13 - 1;
      iVar6 = iVar6 + -8;
    } while (uVar13 != 0);
  }
  puVar8 = param_1 + 0x17;
  fn_826FE988(puVar8,0);
  fn_82700A78(param_1);
  if (param_1[0x27a] != 0) {
    fn_82703030(param_1[0x27a],1);
  }
  iVar6 = param_1[0x2ca];
  uVar10 = 0;
  if (iVar6 != 0) {
    do {
      uVar10 = uVar10 + 1;
      *(undefined1 *)(*(int *)(iVar6 + 0x10) + 0x78) = 1;
      iVar6 = *(int *)(iVar6 + 4);
    } while (iVar6 != 0);
    if (uVar10 != 0) {
      do {
        uVar12 = 0;
        for (piVar1 = (int *)param_1[0x2ca]; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
          cVar7 = (**(code **)(*piVar1 + 4))(piVar1);
          if (cVar7 != '\0') {
            uVar12 = uVar12 + 1;
          }
        }
      } while (uVar12 < uVar10);
    }
  }
  while (param_1[0x2c8] != 0) {
    puVar9 = (undefined4 *)param_1[0x2c8];
    param_1[0x2c8] = *puVar9;
    fn_826FC7A0(puVar9);
    fn_8267BE38(puVar9);
  }
  while (param_1[0x2ca] != 0) {
    puVar9 = (undefined4 *)param_1[0x2ca];
    param_1[0x2ca] = puVar9[1];
    (**(code **)*puVar9)(puVar9,1);
  }
  *(undefined4 *)(param_1[0x279] + 0x284) = 0;
  iVar6 = param_1[0x280];
  if (iVar6 != 0) {
    fn_82704BC0(iVar6);
    fn_8267BE38(iVar6);
  }
  fn_826F5DE0(param_1);
  fn_826959C8(param_1 + 0x27c);
  fn_8267BE38(param_1[4]);
  fn_826B2290(param_1[0x279],0);
  if (param_1[0x278] != 0) {
    fn_8267C498();
  }
  param_1[0x278] = 0;
  fn_82704708(param_1 + 0x28b);
  puVar9 = param_1 + 6;
  fn_826AAB20(puVar9);
  if (piVar5 != (int *)0x0) {
    fn_8267C4F0(piVar5);
  }
  param_1[0x2c2] = &lbl_82005B28;
  puVar2 = (uint *)param_1[0x2b7];
  if ((puVar2 != (uint *)0x0) &&
     (uVar10 = *puVar2, *puVar2 = (uint)((ulonglong)uVar10 - 1),
     (longlong)((ulonglong)uVar10 - 1) < 1)) {
    fn_8269A608(puVar2);
    fn_8267BE38(puVar2);
  }
  puVar2 = (uint *)param_1[0x2b6];
  if ((puVar2 != (uint *)0x0) &&
     (uVar10 = *puVar2, *puVar2 = (uint)((ulonglong)uVar10 - 1), (ulonglong)uVar10 - 1 == 0)) {
    fn_8267BE38();
  }
  fn_826DF960(param_1[0x2b3],param_1[0x2b4]);
  fn_8267BE38(param_1[0x2b3]);
  fn_8267BE38(param_1[0x2ae]);
  fn_826DF960(param_1[0x2a6],param_1[0x2a7]);
  fn_8267BE38(param_1[0x2a6]);
  fn_826DF960(param_1[0x2a3],param_1[0x2a4]);
  fn_8267BE38(param_1[0x2a3]);
  fn_82705028(param_1 + 0x28b);
  fn_826FDAB8(param_1 + 0x28a);
  fn_82696330(param_1 + 0x27c);
  if (param_1[0x279] != 0) {
    fn_8267C498();
  }
  if (param_1[0x278] != 0) {
    fn_8267C498();
  }
  puVar14 = param_1 + 0x275;
  lVar11 = 3;
  do {
    puVar14 = puVar14 + -9;
    fn_826F8E90(puVar14);
    lVar11 = lVar11 + -1;
  } while (-1 < lVar11);
  if (param_1[0x47] != 0) {
    fn_8267C498();
  }
  if (param_1[0x46] != 0) {
    fn_8267C498();
  }
  if (param_1[0x45] != 0) {
    fn_8267C4F0();
  }
  if (param_1[0x44] != 0) {
    fn_8267C4F0();
  }
  if (param_1[0x43] != 0) {
    fn_8267C4F0();
  }
  if (param_1[0x42] != 0) {
    fn_8267C4F0();
  }
  fn_826FB150(param_1 + 0x41);
  if (param_1[0x40] != 0) {
    fn_8267C4F0();
  }
  if (param_1[0x1b] != 0) {
    fn_82687270();
  }
  fn_826FB1C8(*puVar8,param_1[0x18]);
  fn_8267BE38(*puVar8);
  fn_82682298(puVar9,0);
  fn_827B5EA8(puVar9);
  param_1[2] = &lbl_82005928;
  fn_8267C488(param_1);
  return;
}

