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
extern unsigned int *auStack_100;
extern unsigned int *auStack_10c;
extern unsigned int *auStack_110;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_c8;
extern unsigned int *auStack_f0;
extern int fn_822315A0();
extern int fn_8223AAC0();
extern int fn_82516FD8();
extern int fn_825174B8();
extern int fn_828A1958();
extern int fn_828AC428();
extern int fn_828AC488();
extern int fn_828AC498();
extern int fn_828B8550();
extern int fn_828BAC68();
extern int fn_828ED9C8();
extern unsigned int iStack_104;
extern unsigned int iStack_a4;
extern unsigned int iStack_ac;
extern unsigned int iStack_c4;
extern unsigned int iStack_d4;
extern unsigned int iStack_d8;
extern unsigned int iStack_dc;
extern unsigned int iStack_e0;
extern unsigned int stack0x00000000;
extern unsigned int uStack_108;


/* WARNING: Removing unreachable block (ram,0x828b8c5c) */
/* WARNING: Removing unreachable block (ram,0x828b8c90) */
/* WARNING: Removing unreachable block (ram,0x828b8c94) */
/* WARNING: Removing unreachable block (ram,0x828b8ca0) */
/* WARNING: Removing unreachable block (ram,0x828b8ca4) */
/* WARNING: Removing unreachable block (ram,0x828b8cb0) */
/* WARNING: Removing unreachable block (ram,0x828b8e58) */
/* WARNING: Removing unreachable block (ram,0x828b8e98) */

void fn_828B89F8(int param_1,undefined8 param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar13;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char cVar15;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined4 *puVar14;
  undefined8 uVar12;
  longlong lVar16;
  undefined1 auStack_110 [4];
  undefined1 auStack_10c [4];
  undefined4 uStack_108;
  int iStack_104;
  undefined1 auStack_100 [16];
  undefined1 auStack_f0 [16];
  int iStack_e0;
  int iStack_dc;
  int iStack_d8;
  int iStack_d4;
  undefined1 auStack_c8 [4];
  int iStack_c4;
  undefined1 auStack_b0 [4];
  int iStack_ac;
  int iStack_a4;
  undefined1 auStack_a0 [160];
  
  (**(code **)(**(int **)(param_1 + 0x50) + 4))();
  iVar13 = (*(int **)(param_1 + 0x50))[2];
  if (iVar13 != 1) {
    iVar1 = **(int **)(param_1 + 0x50);
    if (iVar13 == 2) {
      lVar16 = 0;
      iVar13 = (**(code **)(iVar1 + 0xc))();
      if (0 < iVar13) {
        do {
          uVar4 = (**(code **)(**(int **)(param_1 + 0x50) + 0x24))(*(int **)(param_1 + 0x50),lVar16)
          ;
          uVar5 = (**(code **)(**(int **)(param_1 + 0x50) + 0x28))(*(int **)(param_1 + 0x50),lVar16)
          ;
          uVar6 = (**(code **)(**(int **)(param_1 + 0x50) + 0x2c))(*(int **)(param_1 + 0x50),lVar16)
          ;
          fn_828AC428(&stack0x00000000 + -0xa0);
          cVar15 = fn_828ED9C8(*(undefined4 *)(param_1 + 0x50));
          if (cVar15 != '\0') {
            lVar7 = (**(code **)(**(int **)(param_1 + 0x50) + 0x40))
                              (*(int **)(param_1 + 0x50),lVar16);
            lVar8 = (**(code **)(**(int **)(param_1 + 0x50) + 0x3c))
                              (*(int **)(param_1 + 0x50),lVar16);
            lVar9 = (**(code **)(**(int **)(param_1 + 0x50) + 0x34))
                              (*(int **)(param_1 + 0x50),lVar16);
            lVar10 = (**(code **)(**(int **)(param_1 + 0x50) + 0x30))
                               (*(int **)(param_1 + 0x50),lVar16);
            fn_828AC498(&stack0x00000000 + -0xa0,lVar8,lVar10,lVar8 + lVar7,lVar10 + lVar9);
          }
          piVar2 = *(int **)(*(int *)(param_1 + 0x14) + 0xdc);
          piVar3 = (int *)*piVar2;
          while (piVar3 != piVar2) {
            iVar13 = piVar3[0xb];
            iVar1 = piVar3[10];
            iStack_e0 = 0;
            iStack_dc = 0;
            if ((iVar13 != 0) && (cVar15 = fn_8223AAC0(iVar13), cVar15 != '\0')) {
              iStack_e0 = iVar1;
              iStack_dc = iVar13;
            }
            (**(code **)(**(int **)(param_1 + 0x50) + 0x20))
                      (*(int **)(param_1 + 0x50),lVar16,*(undefined4 *)(iStack_e0 + 8),
                       &stack0x00000000 + -0x110);
            if (iStack_dc != 0) {
              fn_822315A0(iStack_dc);
            }
            fn_828A1958(&stack0x00000000 + -0x10c);
            piVar2 = *(int **)(*(int *)(param_1 + 0x14) + 0xdc);
          }
          piVar2 = *(int **)(*(int *)(param_1 + 0x14) + 0xfc);
          piVar3 = (int *)*piVar2;
          while (piVar3 != piVar2) {
            iVar13 = piVar3[0xb];
            iVar1 = piVar3[10];
            iStack_d8 = 0;
            iStack_d4 = 0;
            if ((iVar13 != 0) && (cVar15 = fn_8223AAC0(iVar13), cVar15 != '\0')) {
              iStack_d8 = iVar1;
              iStack_d4 = iVar13;
            }
            uVar11 = (**(code **)(**(int **)(param_1 + 0x50) + 0x10))
                               (*(int **)(param_1 + 0x50),lVar16,*(undefined4 *)(iStack_d8 + 8));
            if ((uVar11 & 0xffffffff) != 0) {
              puVar14 = (undefined4 *)fn_828BAC68(&stack0x00000000 + -200,uVar11 + 8);
              iStack_104 = 0;
              if ((undefined4 *)(&stack0x00000000 + -0x108) != puVar14) {
                iStack_104 = puVar14[1];
                puVar14[1] = 0;
                *puVar14 = 0;
              }
              if (iStack_c4 != 0) {
                fn_822315A0();
              }
              uVar12 = fn_825174B8(&stack0x00000000 + -0xb0,&stack0x00000000 + -0xd8,
                                         &stack0x00000000 + -0x108);
              fn_82516FD8(&stack0x00000000 + -0xf0,uVar12);
              if (iStack_a4 != 0) {
                fn_822315A0();
              }
              if (iStack_ac != 0) {
                fn_822315A0();
              }
              if (iStack_104 != 0) {
                fn_822315A0(iStack_104);
              }
            }
            if (iStack_d4 != 0) {
              fn_822315A0(iStack_d4);
            }
            fn_828A1958(&stack0x00000000 + -0x10c);
            piVar2 = *(int **)(*(int *)(param_1 + 0x14) + 0xfc);
          }
          fn_828B8550(param_1,param_2,uVar4,uVar5,uVar6,&stack0x00000000 + -0xa0,
                        &stack0x00000000 + -0x100,&stack0x00000000 + -0xf0);
          fn_828AC488(&stack0x00000000 + -0xa0);
          lVar16 = lVar16 + 1;
          iVar13 = (**(code **)(**(int **)(param_1 + 0x50) + 0xc))();
        } while ((int)lVar16 < iVar13);
      }
      (**(code **)(**(int **)(param_1 + 0x50) + 8))();
      puVar14 = *(undefined4 **)(param_1 + 0x50);
      if (puVar14 != (undefined4 *)0x0) {
        (**(code **)*puVar14)(puVar14,1);
      }
      *(undefined4 *)(param_1 + 0x50) = 0;
      *(undefined4 *)(param_1 + 0x20) = 2;
    }
    else {
      (**(code **)(iVar1 + 8))();
      puVar14 = *(undefined4 **)(param_1 + 0x50);
      if (puVar14 != (undefined4 *)0x0) {
        (**(code **)*puVar14)(puVar14,1);
      }
      *(undefined4 *)(param_1 + 0x50) = 0;
      *(undefined4 *)(param_1 + 0x20) = 3;
    }
  }
  return;
}

