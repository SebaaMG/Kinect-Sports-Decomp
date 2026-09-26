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
extern unsigned int *auStack_80;
extern int fn_822315A0();
extern int fn_8223AAC0();
extern int fn_823AA970();
extern int fn_82516FD8();
extern int fn_825174B8();
extern int fn_8265C9E0();
extern int fn_8288A398();
extern int fn_828A4ED0();
extern int fn_828AC6A8();
extern int fn_828BA568();
extern int fn_828BB4F8();
extern int fn_828C2190();
extern int fn_828C2248();
extern int fn_828E9D50();
extern int fn_828E9D90();
extern int fn_828E9DA8();
extern int fn_828E9FF8();
extern int fn_828EA0D0();
extern int fn_828EA180();
extern unsigned int iStack_74;
extern unsigned int iStack_7c;
extern unsigned int iStack_8c;
extern unsigned int iStack_90;
extern unsigned int iStack_9c;
extern unsigned int iStack_a0;
extern unsigned int iStack_a4;
extern unsigned int iStack_a8;
extern unsigned int iStack_ac;
extern unsigned int iStack_b0;
extern unsigned int lbl_8202678C;
extern unsigned int uStack_88;


void fn_828DEED0(int param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar7;
  int iVar8;
  undefined8 uVar2;
  undefined4 uVar9;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  undefined4 *puVar10;
  char cVar11;
  int iVar12;
  int iVar13;
  int iStack_b0;
  int iStack_ac;
  int iStack_a8;
  int iStack_a4;
  int iStack_a0;
  int iStack_9c;
  int iStack_90;
  int iStack_8c;
  undefined4 uStack_88;
  undefined4 *puStack_84;
  undefined1 auStack_80 [4];
  int iStack_7c;
  int iStack_74;
  
  iVar7 = fn_828E9DA8(param_2);
  iVar8 = fn_828E9D90(param_2);
  if (iVar7 - iVar8 < 0x20) {
    iVar7 = 0;
  }
  else {
    iVar7 = fn_828E9FF8(param_2,0x20);
  }
  iVar8 = fn_8288A398();
  bVar1 = *(int *)(iVar8 + 0x38) == iVar7;
  *(bool *)(param_1 + 0xcc) = bVar1;
  if (bVar1) {
    iVar7 = fn_828E9DA8();
    iVar8 = fn_828E9D90(param_2);
    if (iVar7 - iVar8 < 0x40) {
      uVar2 = 0;
    }
    else {
      uVar2 = fn_828EA0D0(param_2,0x40);
    }
    *(undefined8 *)(param_1 + 0x80) = uVar2;
    iVar7 = fn_828E9DA8(param_2);
    iVar8 = fn_828E9D90(param_2);
    if (iVar7 - iVar8 < 8) {
      uVar9 = 0;
    }
    else {
      uVar9 = fn_828E9FF8(param_2,8);
    }
    *(undefined4 *)(param_1 + 0x88) = uVar9;
    iVar7 = fn_828E9DA8(param_2);
    iVar8 = fn_828E9D90(param_2);
    if (iVar7 - iVar8 < 8) {
      uVar9 = 0;
    }
    else {
      uVar9 = fn_828E9FF8(param_2,8);
    }
    *(undefined4 *)(param_1 + 0x8c) = uVar9;
    iVar7 = fn_828E9DA8(param_2);
    iVar8 = fn_828E9D90(param_2);
    if (0x3f < iVar7 - iVar8) {
      fn_828EA180(param_2,param_1 + 0x90,8);
    }
    iVar7 = fn_828E9DA8(param_2);
    iVar8 = fn_828E9D90(param_2);
    if (0x7f < iVar7 - iVar8) {
      fn_828EA180(param_2,param_1 + 0x98,0x10);
    }
    iVar7 = fn_828E9DA8(param_2);
    iVar8 = fn_828E9D90(param_2);
    if (0x11f < iVar7 - iVar8) {
      fn_828EA180(param_2,param_1 + 0xa8,0x24);
    }
    uVar3 = fn_828A4ED0(*(undefined4 *)(param_1 + 0x88));
    iVar7 = fn_828E9DA8(param_2);
    iVar8 = fn_828E9D90(param_2);
    if (iVar7 - iVar8 < 0x20) {
      uVar4 = 0;
    }
    else {
      uVar4 = fn_828E9FF8(param_2,0x20);
    }
    uVar6 = uVar4 & 0xffffffff;
    while (uVar6 != 0) {
      iVar7 = fn_828E9DA8(param_2);
      iVar8 = fn_828E9D90(param_2);
      if (iVar7 - iVar8 < 0x20) {
        uVar2 = 0;
      }
      else {
        uVar2 = fn_828E9FF8(param_2,0x20);
      }
      iVar7 = fn_828E9DA8(param_2);
      iVar8 = fn_828E9D90(param_2);
      if (iVar7 - iVar8 < 0x20) {
        uVar5 = 0;
      }
      else {
        uVar5 = fn_828E9FF8(param_2,0x20);
      }
      if ((uVar3 & 0xffffffff) != 0) {
        fn_828C2190(&iStack_a8,uVar3,uVar2);
        if (iStack_a8 != 0) {
          fn_828C2248(&iStack_b0,iStack_a8,uVar5);
          if (iStack_b0 != 0) {
            uVar2 = fn_825174B8(auStack_80,&iStack_a8,&iStack_b0);
            fn_82516FD8(param_1 + 0xd0,uVar2);
            if (iStack_74 != 0) {
              fn_822315A0();
            }
            if (iStack_7c != 0) {
              fn_822315A0();
            }
          }
          if (iStack_ac != 0) {
            fn_822315A0();
          }
        }
        if (iStack_a4 != 0) {
          fn_822315A0();
        }
      }
      uVar4 = uVar4 - 1;
      uVar6 = uVar4;
    }
    iVar7 = fn_828E9DA8(param_2);
    iVar8 = fn_828E9D90(param_2);
    if (iVar7 - iVar8 < 0x20) {
      uVar4 = 0;
    }
    else {
      uVar4 = fn_828E9FF8(param_2,0x20);
    }
    uVar6 = uVar4 & 0xffffffff;
    while (uVar6 != 0) {
      iVar7 = fn_828E9DA8(param_2);
      iVar8 = fn_828E9D90(param_2);
      if (iVar7 - iVar8 < 0x20) {
        uVar2 = 0;
      }
      else {
        uVar2 = fn_828E9FF8(param_2,0x20);
      }
      uVar6 = fn_8265C9E0(0x20);
      if ((uVar6 & 0xffffffff) == 0) {
        uVar9 = 0;
      }
      else {
        uVar9 = fn_828BA568(uVar6,param_2);
      }
      puVar10 = (undefined4 *)fn_8265C9E0(0x10);
      if (puVar10 == (undefined4 *)0x0) {
        puVar10 = (undefined4 *)0x0;
      }
      else {
        puVar10[3] = uVar9;
        *puVar10 = &lbl_8202678C;
        puVar10[1] = 1;
        puVar10[2] = 1;
      }
      if ((uVar3 & 0xffffffff) != 0) {
        fn_828BB4F8(&iStack_a0,uVar3,uVar2);
        iVar8 = iStack_9c;
        iVar7 = iStack_a0;
        if (iStack_a0 != 0) {
          iVar13 = 0;
          iVar12 = 0;
          if ((iStack_9c != 0) && (cVar11 = fn_8223AAC0(), cVar11 != '\0')) {
            iVar13 = iVar8;
            iVar12 = iVar7;
          }
          uStack_88 = 0;
          puStack_84 = (undefined4 *)0x0;
          iStack_90 = iVar12;
          iStack_8c = iVar13;
          if ((puVar10 != (undefined4 *)0x0) && (cVar11 = fn_8223AAC0(puVar10), cVar11 != '\0')) {
            uStack_88 = uVar9;
            puStack_84 = puVar10;
          }
          fn_82516FD8(param_1 + 0xe0,&iStack_90);
          if (puStack_84 != (undefined4 *)0x0) {
            fn_822315A0();
          }
          if (iStack_8c != 0) {
            fn_822315A0();
          }
        }
        if (iStack_9c != 0) {
          fn_822315A0();
        }
      }
      if (puVar10 != (undefined4 *)0x0) {
        fn_822315A0(puVar10);
      }
      uVar4 = uVar4 - 1;
      uVar6 = uVar4;
    }
    fn_828AC6A8(param_1 + 0xf0,param_2);
  }
  else {
    uVar2 = fn_823AA970(param_2);
    fn_828E9D50(param_2,uVar2);
  }
  return;
}

