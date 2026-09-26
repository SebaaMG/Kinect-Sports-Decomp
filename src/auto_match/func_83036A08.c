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
extern unsigned int *auStack_3a0;
extern int fn_82FA5060();
extern int fn_82FA5190();
extern int fn_82FEF8A0();
extern int fn_82FEFD50();
extern int fn_83022408();
extern int fn_830224E8();
extern int fn_83024B20();
extern int fn_83024C50();
extern int fn_83024E30();
extern int fn_83027798();
extern int fn_83037250();
extern unsigned int iStack_3d0;
extern unsigned int lbl_8217D218;
extern unsigned int lbl_831BC770;
extern unsigned int uStack_3bc;
extern unsigned int uStack_3c0;
extern unsigned int uStack_3c2;
extern unsigned int uStack_3c4;
extern unsigned int uStack_3cc;


void fn_83036A08(int *param_1,int param_2,uint param_3)

{
  ushort uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  undefined4 uVar11;
  uint *puVar12;
  int iStack_3d0;
  uint uStack_3cc;
  undefined2 uStack_3c4;
  undefined2 uStack_3c2;
  undefined2 uStack_3c0;
  undefined4 uStack_3bc;
  undefined1 auStack_3a0 [928];
  
  iVar3 = *(int *)(*(int *)(param_2 + 4) + 0x14);
  if (iVar3 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = *(undefined4 *)(*(int *)(iVar3 + 0xfc) + 8);
  }
  iVar3 = fn_82FEFD50(uVar11);
  iVar4 = fn_82FEF8A0(uVar11);
  piVar2 = *(int **)(param_2 + 0x3a0);
  uStack_3c0 = 0;
  uStack_3bc = 0;
  if (*piVar2 == 0) {
    uVar1 = *(ushort *)(iVar3 + 0x2c);
    iStack_3d0 = *(int *)(param_2 + 0x10);
    uStack_3c4 = *(undefined2 *)(param_2 + 0x1c);
    uStack_3c2 = *(undefined2 *)(param_2 + 0x1e);
  }
  else {
    uVar1 = *(ushort *)(iVar3 + 0x2c);
    iStack_3d0 = *piVar2;
    uStack_3c4 = *(undefined2 *)(piVar2 + 3);
    uStack_3c2 = *(undefined2 *)((int)piVar2 + 0xe);
  }
  uStack_3cc = (uint)uVar1;
  if (iVar4 != 3) {
    fn_83037250(iVar3,0,auStack_3a0);
  }
  iVar8 = 0;
  if (*(char *)(param_1 + 3) != '\0') {
    uVar7 = 0;
    do {
      if ((1 << (uVar7 & 0x3f) & param_3) == 0) {
        iVar8 = (uint)*(byte *)((int)param_1 + 0xd) + iVar8;
      }
      else {
        if (iVar4 == 3) {
          fn_83037250(iVar3,uVar7,auStack_3a0);
        }
        uVar9 = 0;
        if (*(char *)((int)param_1 + 0xd) != '\0') {
          iVar10 = iVar8 << 4;
          do {
            puVar12 = (uint *)(iVar10 + *param_1);
            if (puVar12[1] == 0) {
LAB_83036be4:
              iVar8 = iVar8 + 1;
              iVar10 = iVar10 + 0x10;
            }
            else {
              if (*puVar12 != 0) {
LAB_83036bd8:
                fn_83024B20(*puVar12,&iStack_3d0);
                goto LAB_83036be4;
              }
              puVar5 = (undefined4 *)fn_82FA5060(lbl_831BC770,0x180);
              *puVar12 = (uint)puVar5;
              if (puVar5 != (undefined4 *)0x0) {
                *puVar5 = &lbl_8217D218;
                puVar5[0x1c] = 0;
                fn_83022408(puVar5 + 0x20);
                puVar5[0x40] = 0;
                if (*puVar12 != 0) {
                  iVar6 = fn_83024C50(*puVar12,puVar12[3],0x400,0);
                  if (iVar6 == 1) {
                    fn_83024E30(*puVar12);
                    goto LAB_83036bd8;
                  }
                  fn_830224E8((ulonglong)*puVar12 + 0x80);
                  fn_82FA5190(lbl_831BC770,*puVar12);
                  *puVar12 = 0;
                }
              }
            }
            uVar9 = uVar9 + 1;
          } while (uVar9 < *(byte *)((int)param_1 + 0xd));
        }
      }
      uVar7 = uVar7 + 1 & 0xff;
    } while (uVar7 < *(byte *)(param_1 + 3));
  }
  fn_83027798(iVar3);
  return;
}

