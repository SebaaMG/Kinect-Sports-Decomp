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
extern unsigned int *auStack_6c;
extern int fn_82E439A0();
extern int fn_82E628A0();
extern int fn_82E628F0();
extern int fn_82E62918();
extern int fn_82E62940();
extern unsigned int lbl_820F8F08;
extern unsigned int lbl_82154978;
extern unsigned int lbl_821549D8;
extern unsigned int lbl_82154A68;
extern unsigned int lbl_82154A78;
extern unsigned int lbl_82154A98;
extern unsigned int lbl_82154B08;
extern unsigned int lbl_82154B18;


longlong fn_82E43BE8(int param_1)

{
  undefined1 *puVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  int *piStack_70;
  uint auStack_6c [3];
  undefined1 *apuStack_60 [4];
  undefined1 *puStack_50;
  undefined1 *puStack_4c;
  undefined1 *puStack_48;
  undefined4 *puStack_44;
  
  piStack_70 = (int *)0x0;
  if (*(int *)(param_1 + 0x1c) == 0) {
    lVar3 = fn_82E439A0();
  }
  else {
    apuStack_60[0] = &lbl_82154B18;
    apuStack_60[1] = &lbl_820F8F08;
    apuStack_60[2] = &lbl_82154B08;
    apuStack_60[3] = &lbl_82154A68;
    puStack_50 = &lbl_82154A78;
    puStack_4c = &lbl_821549D8;
    puStack_48 = &lbl_82154A98;
    uVar5 = 0;
    puStack_44 = &lbl_82154978;
    do {
      auStack_6c[0] = 0;
      puVar1 = apuStack_60[uVar5];
      lVar3 = (**(code **)(**(int **)(param_1 + 0x1c) + 0xc))
                        (*(int **)(param_1 + 0x1c),puVar1,auStack_6c);
      if (lVar3 < 0) goto LAB_82e43c18;
      uVar6 = 0;
      if (auStack_6c[0] != 0) {
        do {
          lVar3 = (**(code **)(**(int **)(param_1 + 0x1c) + 0x18))
                            (*(int **)(param_1 + 0x1c),puVar1,uVar6,0);
          if (lVar3 < 0) goto LAB_82e43c18;
          uVar6 = uVar6 + 1;
        } while ((uVar6 & 0xffffffff) < (ulonglong)auStack_6c[0]);
      }
      uVar5 = uVar5 + 1 & 0xffff;
    } while (uVar5 < 8);
    iVar4 = (**(code **)(**(int **)(param_1 + 0x1c) + 0x10))
                      (*(int **)(param_1 + 0x1c),0xffffffff82154aa8,0,&piStack_70);
    piVar2 = piStack_70;
    if (-1 < iVar4) {
      fn_82E628A0(piStack_70,0);
      fn_82E628F0(piVar2,0);
      fn_82E62918(piVar2,0);
      fn_82E62940(piVar2,0);
      if (piStack_70 == (int *)0x0) {
        return lVar3;
      }
      (**(code **)(*piStack_70 + 8))();
      piStack_70 = (int *)0x0;
    }
  }
LAB_82e43c18:
  if (piStack_70 != (int *)0x0) {
    (**(code **)(*piStack_70 + 8))(piStack_70);
  }
  return lVar3;
}

