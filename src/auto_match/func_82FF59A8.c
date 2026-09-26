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
extern int fn_82FA5060();
extern int fn_82FA5190();
extern int fn_82FF5CB8();
extern int fn_8302A9F8();
extern int fn_8302AA50();
extern int fn_8302AB88();
extern int fn_8302ABC0();
extern int fn_8302AC18();
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_831BC768;
extern unsigned int lbl_832642E4;


undefined4 * fn_82FF59A8(int param_1,undefined8 param_2,char param_3,int param_4)

{
  float fVar1;
  undefined4 *puVar2;
  float fVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  int *piVar8;
  
  piVar8 = (int *)(param_1 + 0x14);
  if (param_4 != 1) {
    piVar8 = (int *)(param_1 + 8);
  }
  puVar6 = (undefined4 *)0x0;
  if ((uint)(piVar8[1] - *piVar8 >> 2) < *(uint *)(param_1 + 4)) {
    iVar5 = fn_82FA5060(lbl_831BC768,0x3c);
    if (iVar5 == 0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      puVar6 = (undefined4 *)fn_8302A9F8();
      if (puVar6 != (undefined4 *)0x0) goto LAB_82ff5a84;
    }
  }
  piVar7 = (int *)*piVar8;
  fVar3 = lbl_821AAD20;
  if (piVar7 == (int *)piVar8[1]) {
    return puVar6;
  }
  do {
    fVar1 = (float)((undefined4 *)*piVar7)[8];
    if (fVar3 < fVar1) {
      fVar3 = fVar1;
      puVar6 = (undefined4 *)*piVar7;
    }
    piVar7 = piVar7 + 1;
  } while (piVar7 != (int *)piVar8[1]);
  if (puVar6 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  puVar6[7] = lbl_821AAD20;
  fn_8302AA50(puVar6,0);
  fn_8302AB88(puVar6);
  fn_82FF5CB8(piVar8,puVar6);
LAB_82ff5a84:
  iVar5 = fn_8302AC18(puVar6,param_2,*(undefined4 *)(lbl_832642E4 + 0x90));
  if (((iVar5 == 2) ||
      (puVar2 = (undefined4 *)piVar8[1], (uint)piVar8[2] <= (uint)((int)puVar2 - *piVar8 >> 2))) ||
     (piVar8[1] = (int)(puVar2 + 1), puVar2 == (undefined4 *)0x0)) {
    fn_8302ABC0(puVar6);
    uVar4 = lbl_831BC768;
    if (puVar6 != (undefined4 *)0x0) {
      (**(code **)*puVar6)(puVar6,0);
      fn_82FA5190(uVar4,puVar6);
    }
    puVar6 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = puVar6;
    if (param_3 != '\0') {
      puVar6[0xd] = 1;
    }
  }
  return puVar6;
}

