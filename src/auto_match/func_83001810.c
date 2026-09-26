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
extern int fn_82FA5060();
extern int fn_82FA5190();
extern int fn_8300FA30();
extern int fn_8300FCF0();
extern int fn_8302BD60();
extern int fn_8302C6A8();
extern int fn_8302CA88();
extern int fn_8302DD08();
extern int fn_83032B08();
extern int fn_83032BE0();
extern int fn_83032D88();
extern int fn_83032FB8();
extern int fn_83032FC8();
extern int fn_83032FD0();
extern int fn_83032FF0();
extern int fn_83033018();
extern int fn_83033070();
extern int fn_83033110();
extern int fn_83033360();
extern int fn_830337B0();
extern int fn_83033C70();
extern unsigned int lbl_8201FBB8;
extern unsigned int lbl_831BC768;
extern unsigned int lbl_832642E4;


int fn_83001810(undefined8 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar4;
  int iVar5;
  ulonglong uVar3;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  undefined4 *puVar11;
  bool bVar12;
  double dVar13;
  undefined2 auStack_70 [4];
  longlong alStack_68 [13];
  
  puVar10 = (uint *)(param_2 + 0x28);
  iVar7 = 2;
  if (*(int *)(param_2 + 0x28) != 0) {
    do {
      uVar9 = *puVar10;
      uVar8 = uVar9 - 1;
      if (uVar8 < 0x20) {
        bVar12 = (1 << (uVar8 & 0x3f) & *(uint *)(param_2 + 0x6c)) != 0;
      }
      else {
        bVar12 = false;
      }
    } while ((!bVar12) && (*puVar10 = uVar8, uVar9 != 1));
  }
  auStack_70[0] = 0;
  iVar6 = *(int *)(*(int *)(param_2 + 0x78) + 0x10);
  if (*(int *)(iVar6 + 8) != *(int *)(iVar6 + 4)) {
    do {
      iVar5 = *(int *)(iVar6 + 8);
      puVar11 = (undefined4 *)(iVar5 + -0x14);
      if (*(int *)(iVar5 + -8) == 0) {
        piVar4 = (int *)fn_8302DD08(*puVar11,*(undefined4 *)(param_2 + 8),auStack_70,alStack_68,
                                      iVar5 + -0x10,iVar5 + -0xc);
        uVar9 = *puVar10;
        if (piVar4 != (int *)0x0) {
          *(undefined2 *)((uVar9 + 0x15) * 2 + param_2) = auStack_70[0];
          iVar6 = piVar4[3];
          (**(code **)(*piVar4 + 8))();
          iVar5 = fn_8302C6A8(*puVar11);
          dVar13 = (double)fn_8302CA88(*puVar11,*(undefined4 *)(param_2 + 8));
          if ((iVar6 != 0) &&
             (piVar4 = (int *)fn_83033360(0x5011,0,(ulonglong)*(uint *)(param_2 + 0x78) + 0x10
                                               ), piVar4 != (int *)0x0)) {
            piVar4[0x27] = *(int *)(*(int *)(param_2 + 0x78) + 0x14);
            fn_83032FB8(piVar4,puVar10);
            (**(code **)(*piVar4 + 0x14))(piVar4,iVar6);
            fn_83032FD0(piVar4,*(undefined4 *)(param_2 + 4));
            uVar3 = fn_82FA5060(lbl_831BC768,0x38);
            if (((uVar3 & 0xffffffff) != 0) &&
               (puVar11 = (undefined4 *)fn_8300FA30(uVar3,*(undefined4 *)(param_2 + 8)),
               puVar11 != (undefined4 *)0x0)) {
              fn_83033018(piVar4,*(undefined4 *)(param_2 + 0x7c));
              fn_83032FF0(piVar4,*(undefined1 *)(param_2 + 0x81));
              fn_83032FC8(piVar4,*(undefined4 *)(param_2 + 0x70));
              iVar6 = fn_83033070(piVar4,**(undefined4 **)(param_2 + 0x78),
                                      *(undefined1 *)(*(undefined4 **)(param_2 + 0x78) + 3),puVar11)
              ;
              if ((iVar6 == 1) &&
                 (iVar6 = fn_83033110(piVar4,*(undefined4 *)(*(int *)(param_2 + 0x78) + 4),
                                          *(undefined1 *)(*(int *)(param_2 + 0x78) + 0xd),puVar11),
                 iVar6 == 1)) {
                fn_830337B0(piVar4,*(undefined4 *)(*(int *)(param_2 + 0x78) + 8));
                if (iVar5 == 3) {
                  iVar7 = (int)(dVar13 * (double)lbl_8201FBB8);
                  alStack_68[0] = (longlong)iVar7;
                }
                else {
                  iVar7 = 0x2800;
                }
                fn_8302BD60(piVar4,iVar7,0,0);
                puVar11[2] = piVar4;
                *(undefined8 *)(puVar11 + 6) = *(undefined8 *)(param_2 + 0x10);
                *(undefined8 *)(puVar11 + 8) = *(undefined8 *)(param_2 + 0x18);
                *(undefined8 *)(puVar11 + 10) = *(undefined8 *)(param_2 + 0x20);
                fn_8300FCF0(lbl_832642E4,puVar11);
                iVar7 = 1;
              }
              else {
                uVar2 = lbl_831BC768;
                (**(code **)*puVar11)(puVar11,0);
                fn_82FA5190(uVar2,puVar11);
              }
            }
            (**(code **)(*piVar4 + 8))(piVar4);
          }
          break;
        }
        *puVar10 = uVar9 - 1;
        uVar9 = uVar9 - 1;
        if (uVar9 != 0) {
          do {
            if (uVar9 - 1 < 0x20) {
              bVar12 = (1 << (uVar9 - 1 & 0x3f) & *(uint *)(param_2 + 0x6c)) != 0;
            }
            else {
              bVar12 = false;
            }
            if (bVar12) break;
            uVar8 = *puVar10;
            uVar9 = uVar8 - 1;
            *puVar10 = uVar9;
          } while (uVar8 != 1);
        }
        iVar6 = *(int *)(*(int *)(param_2 + 0x78) + 0x10);
        fn_83032BE0((ulonglong)*(uint *)(iVar6 + 8) - 0x14);
        *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + -0x14;
      }
      else {
        fn_83032BE0((ulonglong)*(uint *)(iVar6 + 8) - 0x14);
        *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + -0x14;
        iVar5 = fn_83033C70(*(undefined4 *)(iVar5 + -8),*(undefined4 *)(iVar5 + -4));
        iVar6 = *(int *)(param_2 + 0x78);
        if (iVar5 != 0) {
          fn_83032B08();
        }
        iVar1 = *(int *)(iVar6 + 0x10);
        *(int *)(iVar6 + 0x10) = iVar5;
        if (iVar1 != 0) {
          fn_83032D88();
        }
        if (*(int *)(*(int *)(param_2 + 0x78) + 0x10) == 0) {
          iVar7 = 3;
          break;
        }
      }
      iVar6 = *(int *)(*(int *)(param_2 + 0x78) + 0x10);
    } while (*(int *)(iVar6 + 8) != *(int *)(iVar6 + 4));
  }
  iVar6 = *(int *)(*(int *)(param_2 + 0x78) + 0x10);
  if ((((iVar6 != 0) && (iVar7 != 1)) && (iVar7 != 3)) &&
     (*(undefined4 *)(*(int *)(param_2 + 0x78) + 0x10) = 0, iVar6 != 0)) {
    fn_83032D88();
  }
  return iVar7;
}

