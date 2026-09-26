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
extern int fn_82B7BD28();
extern int fn_82BA03B8();
extern int fn_82BC0088();
extern int fn_82BC7368();
extern int fn_82BD1FF0();


void fn_82BD2228(uint *param_1,int param_2,undefined8 param_3,undefined8 param_4,int param_5)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  uint *puVar5;
  undefined4 *puVar6;
  int *piVar7;
  undefined4 *puVar8;
  longlong lVar9;
  uint *puVar10;
  uint *puVar11;
  undefined4 *puVar12;
  uint *puVar13;
  uint *puVar14;
  int iVar15;
  uint uVar16;
  
  uVar1 = *(undefined4 *)(param_5 + 0x5b0);
  puVar6 = (undefined4 *)fn_82B7BD28(uVar1,0x14);
  puVar12 = puVar6 + 1;
  *puVar6 = uVar1;
  if (puVar12 == (undefined4 *)0x0) {
    puVar12 = (undefined4 *)0x0;
  }
  else {
    fn_82BA03B8(puVar12,*(undefined4 *)(param_5 + 0x5b0));
  }
  param_1[2] = 0;
  uVar1 = *(undefined4 *)(param_5 + 0x5b0);
  puVar6 = (undefined4 *)fn_82B7BD28(uVar1,0x14);
  puVar8 = puVar6 + 1;
  *puVar6 = uVar1;
  if (puVar8 == (undefined4 *)0x0) {
    puVar8 = (undefined4 *)0x0;
  }
  else {
    fn_82BA03B8(puVar8,*(undefined4 *)(param_5 + 0x5b0));
  }
  bVar4 = false;
  puVar5 = (uint *)param_1[5];
  puVar13 = (uint *)0x0;
  do {
    while (puVar10 = puVar5, puVar11 = param_1, puVar14 = puVar13, bVar4) {
LAB_82bd2358:
      bVar4 = false;
      param_1 = puVar11;
      puVar5 = (uint *)puVar10[4];
      puVar13 = puVar14;
      if ((uint *)puVar10[4] == (uint *)0x0) {
        if (puVar11[7] == 0) {
          if (puVar10[5] != 0) {
            puVar10 = (uint *)puVar10[7];
          }
          puVar11[7] = (uint)puVar10;
        }
        if (puVar8[1] == 0) {
          uVar16 = 0;
          if (puVar12[1] != 0) {
            iVar15 = 0;
            if (puVar12[1] == 0) {
              piVar7 = (int *)fn_82BC0088(puVar12,0);
              goto LAB_82bd240c;
            }
            do {
              piVar7 = (int *)(puVar12[2] + iVar15);
LAB_82bd240c:
              iVar2 = *piVar7;
              if (1 < *(int *)(iVar2 + 8)) {
                uVar1 = *(undefined4 *)(param_5 + 0x5b0);
                puVar6 = (undefined4 *)fn_82B7BD28(uVar1,0xc);
                *puVar6 = uVar1;
                if (puVar6 + 1 == (undefined4 *)0x0) {
                  puVar6 = (undefined4 *)0x0;
                }
                else {
                  puVar6 = (undefined4 *)fn_82BD1FF0(puVar6 + 1,param_5);
                }
                puVar8 = (undefined4 *)
                         fn_82BC0088(*(int *)(param_2 + 0x60),
                                           *(undefined4 *)(*(int *)(param_2 + 0x60) + 4));
                *puVar8 = puVar6;
                *puVar6 = *(undefined4 *)(iVar2 + 8);
                iVar3 = *(int *)(iVar2 + 0x18);
                while( true ) {
                  if (iVar3 != 0) {
                    puVar8 = (undefined4 *)
                             fn_82BC0088(puVar6[1],*(undefined4 *)(puVar6[1] + 4));
                    *puVar8 = *(undefined4 *)(iVar3 + 0xc);
                  }
                  if (iVar3 == *(int *)(iVar2 + 0x1c)) break;
                  iVar3 = *(int *)(iVar3 + 0x20);
                }
              }
              uVar16 = uVar16 + 1;
              iVar15 = iVar15 + 4;
            } while (uVar16 < (uint)puVar12[1]);
          }
          return;
        }
        param_1 = (uint *)fn_82BC7368(puVar8);
        bVar4 = true;
        puVar5 = puVar11;
        if (param_1[6] == 0) {
          if (puVar11[5] != 0) {
            puVar11 = (uint *)puVar11[6];
          }
          param_1[6] = (uint)puVar11;
        }
      }
    }
    if (puVar10[5] == 0) {
      puVar10[3] = *puVar10 - puVar11[2];
      if (puVar11[6] == 0) {
        puVar11[6] = (uint)puVar10;
      }
      puVar14 = puVar10;
      if (puVar13 != (uint *)0x0) {
        puVar13[8] = (uint)puVar10;
      }
      goto LAB_82bd2358;
    }
    lVar9 = ((ulonglong)puVar10[1] - (ulonglong)*puVar10) + 1;
    puVar10[2] = (uint)lVar9;
    if (lVar9 < 0) {
      puVar10[2] = 0;
    }
    puVar10[2] = puVar11[2] + puVar10[2];
    puVar6 = (undefined4 *)fn_82BC0088(puVar12,puVar12[1]);
    *puVar6 = puVar10;
    puVar6 = (undefined4 *)fn_82BC0088(puVar8,puVar8[1]);
    *puVar6 = puVar11;
    param_1 = puVar10;
    puVar5 = (uint *)puVar10[5];
  } while( true );
}

