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
extern unsigned int *auStack_70;
extern float fRam831d14ec;
extern int fn_822315A0();
extern int fn_8223AAC0();
extern int fn_822E64E0();
extern int fn_822E68B8();
extern int fn_822E9128();
extern int fn_822F9060();
extern int fn_822F9750();
extern int fn_8252AFE0();
extern int fn_8265C9E0();
extern unsigned int iStack_64;
extern unsigned int lbl_821ADF7C;
extern unsigned int lbl_821AE598;
extern unsigned int lbl_821CC160;
extern unsigned int uStack_68;


void fn_822E4330(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4,
                  undefined4 *param_5,undefined8 param_6)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  char cVar5;
  undefined4 *puVar4;
  undefined4 uVar6;
  int iVar7;
  undefined4 auStack_70 [2];
  undefined4 uStack_68;
  int iStack_64;
  
  *(undefined4 *)(param_1 + 0x1bc) = param_2;
  iVar1 = param_3[1];
  uVar2 = *param_3;
  iVar7 = 0;
  uVar6 = 0;
  if ((iVar1 != 0) && (cVar5 = fn_8223AAC0(iVar1), cVar5 != '\0')) {
    iVar7 = iVar1;
    uVar6 = uVar2;
  }
  iVar1 = *(int *)(param_1 + 0x1a4);
  *(int *)(param_1 + 0x1a4) = iVar7;
  *(undefined4 *)(param_1 + 0x1a0) = uVar6;
  if (iVar1 != 0) {
    fn_822315A0();
  }
  *(undefined4 *)(param_1 + 0x1c4) = *param_4;
  *(undefined4 *)(param_1 + 0x1c8) = *param_5;
  auStack_70[0] = *(undefined4 *)(*(int *)(param_1 + 0x1bc) + 0x844);
  puVar4 = (undefined4 *)fn_8265C9E0(0x24);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4[1] = 1;
    puVar4[2] = 1;
    *puVar4 = &lbl_821AE598;
    if (puVar4 + 3 != (undefined4 *)0x0) {
      iVar1 = *(int *)(param_1 + 0x1a4);
      uVar2 = *(undefined4 *)(param_1 + 0x1a0);
      uStack_68 = 0;
      iStack_64 = 0;
      if ((iVar1 != 0) && (cVar5 = fn_8223AAC0(iVar1), cVar5 != '\0')) {
        uStack_68 = uVar2;
        iStack_64 = iVar1;
      }
      fn_822F9060(puVar4 + 3,&uStack_68,auStack_70);
    }
  }
  iVar1 = *(int *)(param_1 + 0x1ac);
  *(undefined4 **)(param_1 + 0x1ac) = puVar4;
  *(undefined4 **)(param_1 + 0x1a8) = puVar4 + 3;
  if (iVar1 != 0) {
    fn_822315A0();
  }
  uVar2 = *(undefined4 *)(param_1 + 0x1bc);
  puVar4 = (undefined4 *)fn_8265C9E0(0x3c);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4[1] = 1;
    puVar4[2] = 1;
    *puVar4 = &lbl_821ADF7C;
    if (puVar4 + 3 != (undefined4 *)0x0) {
      iVar1 = *(int *)(param_1 + 0x1ac);
      uVar6 = *(undefined4 *)(param_1 + 0x1a8);
      uStack_68 = 0;
      iStack_64 = 0;
      if ((iVar1 != 0) && (cVar5 = fn_8223AAC0(iVar1), cVar5 != '\0')) {
        uStack_68 = uVar6;
        iStack_64 = iVar1;
      }
      fn_822F9750(puVar4 + 3,uVar2,param_1,0xffffffff831cd218,&uStack_68);
    }
  }
  iVar1 = *(int *)(param_1 + 0x270);
  *(undefined4 **)(param_1 + 0x270) = puVar4;
  *(undefined4 **)(param_1 + 0x26c) = puVar4 + 3;
  if (iVar1 != 0) {
    fn_822315A0();
  }
  piVar3 = *(int **)(*(int *)(param_1 + 0x2c) * 4 + *(int *)(*(int *)(param_1 + 0x1bc) + 0x20));
  if ((piVar3[1] - *piVar3 & 0xfffffffcU) == 0) {
    puVar4 = (undefined4 *)fn_822E64E0((double)fRam831d14ec,param_1);
    *(undefined4 **)(param_1 + 0x210) = puVar4;
    fn_8252AFE0((double)lbl_821CC160,*puVar4);
  }
  fn_822E68B8(param_1);
  fn_822E9128(*(undefined4 *)(param_1 + 0x114),param_6);
  if (param_3[1] != 0) {
    fn_822315A0();
  }
  return;
}

