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
extern unsigned int *auStack_60;
extern int fn_822315A0();
extern int fn_8223AAC0();
extern int fn_82246748();
extern int fn_82268238();
extern int fn_82297428();
extern int fn_82297DB0();
extern int fn_824C04E0();
extern int fn_825089A0();
extern int fn_825373A0();
extern int fn_82537458();
extern int fn_8265C9E0();
extern int fn_8265CA20();
extern int fn_828A1C18();
extern int fn_828A1D58();
extern int fn_828C14D0();


void fn_824C37C0(int param_1)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  undefined4 uVar4;
  bool bVar5;
  char cVar10;
  int *piVar8;
  undefined8 uVar6;
  int iVar9;
  ulonglong uVar7;
  undefined4 *puVar11;
  int iVar12;
  int iVar13;
  longlong *plVar14;
  undefined1 auStack_60 [96];
  
  iVar1 = *(int *)(param_1 + 4);
  if (*(char *)(param_1 + 0x24) == '\0') {
    cVar10 = fn_82537458(*(undefined4 *)(param_1 + 0x10),0);
    if (cVar10 != '\0') {
      iVar9 = *(int *)(param_1 + 0x10);
      do {
        cVar10 = fn_82537458(iVar9,1);
      } while (cVar10 == '\0');
      plVar2 = *(longlong **)(iVar9 + 0x24);
      iVar9 = *(int *)(param_1 + 0x10);
      do {
        cVar10 = fn_82537458(iVar9,1);
      } while (cVar10 == '\0');
      plVar14 = *(longlong **)(iVar9 + 0x20);
      if (plVar14 != plVar2) {
        do {
          if (*plVar14 == *(longlong *)(iVar1 + 0x60)) break;
          plVar14 = plVar14 + 7;
        } while (plVar14 != plVar2);
      }
      iVar9 = *(int *)(param_1 + 0x10);
      do {
        cVar10 = fn_82537458(iVar9,1);
      } while (cVar10 == '\0');
      if (plVar14 != *(longlong **)(iVar9 + 0x24)) {
        *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(plVar14 + 6);
      }
      *(undefined1 *)(param_1 + 0x24) = 1;
      piVar8 = (int *)fn_825089A0();
      uVar6 = (**(code **)(*piVar8 + 0xc))();
      *(undefined8 *)(param_1 + 0x18) = uVar6;
      iVar9 = *(int *)(param_1 + 0x10);
      if (iVar9 != 0) {
        fn_82268238(iVar9);
        fn_8265CA20(iVar9);
        *(undefined4 *)(param_1 + 0x10) = 0;
      }
      iVar9 = *(int *)(iVar1 + 0x4c);
      iVar3 = *(int *)(iVar1 + 0x48);
      iVar12 = 0;
      iVar13 = 0;
      if ((iVar9 != 0) && (cVar10 = fn_8223AAC0(iVar9), cVar10 != '\0')) {
        iVar12 = iVar3;
        iVar13 = iVar9;
      }
      uVar4 = *(undefined4 *)(iVar12 + 8);
      if (iVar13 != 0) {
        fn_822315A0(iVar13);
      }
      fn_828A1C18(uVar4,*(uint *)(iVar1 + 0x58) & 0xff);
      puVar11 = (undefined4 *)(iVar1 + 0x70);
      if (7 < *(uint *)(iVar1 + 0x84)) {
        puVar11 = (undefined4 *)*puVar11;
      }
      fn_82297428(auStack_60,puVar11);
      uVar4 = *(undefined4 *)(iVar1 + 0x54);
      uVar6 = fn_828A1D58();
      fn_828C14D0(uVar6,uVar4,iVar1 + 0x60,auStack_60);
      fn_82297DB0(auStack_60,1,0);
    }
  }
  else {
    if (*(int *)(param_1 + 0x10) == 0) {
      piVar8 = (int *)fn_825089A0();
      uVar7 = (**(code **)(*piVar8 + 0xc))();
      if (*(longlong *)(param_1 + 0x18) + 10000U < uVar7) {
        uVar7 = fn_8265C9E0(0x40);
        if ((uVar7 & 0xffffffff) == 0) {
          iVar9 = 0;
        }
        else {
          iVar9 = fn_825373A0(uVar7,*(undefined4 *)(iVar1 + 0x54));
        }
        iVar3 = *(int *)(param_1 + 0x10);
        if (iVar9 != iVar3) {
          if (iVar3 != 0) {
            fn_82268238(iVar3);
            fn_8265CA20(iVar3);
          }
          *(int *)(param_1 + 0x10) = iVar9;
        }
        goto LAB_824c3b04;
      }
    }
    if ((*(int *)(param_1 + 0x10) != 0) &&
       (cVar10 = fn_82537458(*(int *)(param_1 + 0x10),0), cVar10 != '\0')) {
      iVar9 = *(int *)(param_1 + 0x10);
      do {
        cVar10 = fn_82537458(iVar9,1);
      } while (cVar10 == '\0');
      plVar2 = *(longlong **)(iVar9 + 0x24);
      iVar9 = *(int *)(param_1 + 0x10);
      do {
        cVar10 = fn_82537458(iVar9,1);
      } while (cVar10 == '\0');
      plVar14 = *(longlong **)(iVar9 + 0x20);
      if (plVar14 != plVar2) {
        do {
          if (*plVar14 == *(longlong *)(iVar1 + 0x60)) break;
          plVar14 = plVar14 + 7;
        } while (plVar14 != plVar2);
      }
      iVar9 = *(int *)(param_1 + 0x10);
      do {
        cVar10 = fn_82537458(iVar9,1);
      } while (cVar10 == '\0');
      if (((plVar14 != *(longlong **)(iVar9 + 0x24)) && ((*(uint *)(plVar14 + 6) & 0x20000000) != 0)
          ) && ((*(uint *)(param_1 + 0x20) & 0x20000000) == 0)) {
        *(undefined4 *)(iVar1 + 0x44) = 4;
        fn_824C04E0(iVar1,1);
      }
      iVar9 = *(int *)(param_1 + 0x10);
      if (iVar9 != 0) {
        fn_82268238(iVar9);
        fn_8265CA20(iVar9);
        *(undefined4 *)(param_1 + 0x10) = 0;
      }
      piVar8 = (int *)fn_825089A0();
      uVar6 = (**(code **)(*piVar8 + 0xc))();
      *(undefined8 *)(param_1 + 0x18) = uVar6;
    }
  }
LAB_824c3b04:
  piVar8 = (int *)fn_825089A0();
  uVar7 = (**(code **)(*piVar8 + 0xc))();
  if (*(longlong *)(param_1 + 8) + 240000U < uVar7) {
    *(undefined4 *)(iVar1 + 0x44) = 3;
    iVar9 = *(int *)(*(int *)(param_1 + 4) + 0x48);
    if (iVar9 != 0) {
      fn_82246748(iVar9,0);
    }
    uVar6 = 1;
  }
  else {
    if ((*(int *)(iVar1 + 0x48) == 0) ||
       (bVar5 = true, *(uint *)(*(int *)(*(int *)(iVar1 + 0x48) + 8) + 0x204) < 2)) {
      bVar5 = false;
    }
    if (!bVar5) {
      return;
    }
    uVar6 = 6;
  }
  fn_824C04E0(iVar1,uVar6);
  return;
}

