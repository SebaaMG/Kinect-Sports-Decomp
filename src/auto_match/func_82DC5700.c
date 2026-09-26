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
#define TBLr 0
extern unsigned int *auStack_b0;
extern int fn_82CE5410();
extern int fn_82CE8E78();
extern int fn_82DC7928();
extern int fn_82F68CC0();
extern unsigned int iStack_64;
extern unsigned int iStack_68;
extern unsigned int iStack_7c;
extern unsigned int iStack_80;
extern unsigned int lbl_8202CF7C;
extern unsigned int lbl_8323B4A0;
extern unsigned int uStack_74;
extern unsigned int uStack_78;


void fn_82DC5700(longlong param_1,undefined8 param_2,int param_3)

{
  ushort uVar1;
  undefined4 *puVar2;
  ushort *puVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined8 uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined1 auStack_b0 [48];
  int iStack_80;
  int iStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  int iStack_68;
  int iStack_64;
  
  iVar12 = *(int *)(param_3 + 0x18);
  fn_82F68CC0(auStack_b0,param_1 + 0x10,0x60);
  if (0 < *(int *)(iVar12 + 0x74)) {
    iVar10 = KeTlsGetValue(lbl_8323B4A0);
    puVar2 = *(undefined4 **)(iVar10 + 4);
    if (puVar2 < *(undefined4 **)(iVar10 + 0xc)) {
      *puVar2 = "LtIntegrate";
      puVar2[3] = "StConstraintCallbacks";
      uVar9 = TBLr;
      puVar2[1] = (int)uVar9;
      *(undefined4 **)(iVar10 + 4) = puVar2 + 4;
    }
    iVar10 = 0;
    if (0 < *(int *)(iVar12 + 0x74)) {
      iVar11 = 0;
      do {
        piVar8 = *(int **)(iVar11 + *(int *)(iVar12 + 0x70));
        iStack_68 = *piVar8;
        iStack_64 = piVar8[7];
        iStack_80 = *(int *)(piVar8[1] + 0xa4) + *(int *)(iVar12 + 0x30);
        iStack_7c = *(int *)(piVar8[2] + 0xa4) + *(int *)(iVar12 + 0x30);
        uStack_78 = *(undefined4 *)(*(int *)(*piVar8 + 0x14) + 0x18);
        uStack_74 = *(undefined4 *)(*(int *)(*piVar8 + 0x18) + 0x18);
        if ((*(byte *)((int)piVar8 + 0x12) & 9) != 0) {
          puVar3 = (ushort *)piVar8[3];
          iVar4 = *(int *)(*piVar8 + 0x10);
          uVar1 = *puVar3;
          while (0x16 < uVar1) {
            puVar3 = *(ushort **)(puVar3 + 10);
            uVar1 = *puVar3;
          }
          fn_82DC7928(*(undefined4 *)(*piVar8 + 0xc),auStack_b0,puVar3,2);
          iVar5 = *(int *)(*piVar8 + 0x10);
          if (iVar4 != iVar5) {
            piVar6 = *(int **)(iVar11 + *(int *)(iVar12 + 0x70) + 4);
            *piVar6 = iVar5;
            *(undefined2 *)(piVar6 + 5) = *(undefined2 *)(iVar5 + 0x10);
          }
        }
        if ((*(byte *)((int)piVar8 + 0x12) & 4) != 0) {
          (**(code **)(**(int **)(*piVar8 + 0xc) + 0x38))(*(int **)(*piVar8 + 0xc),auStack_b0);
        }
        iVar10 = iVar10 + 1;
        iVar11 = iVar11 + 8;
      } while (iVar10 < *(int *)(iVar12 + 0x74));
    }
    iVar10 = *(int *)(iVar12 + 0x74);
    uVar7 = *(undefined4 *)(iVar12 + 0x70);
    iVar11 = fn_82CE5410();
    (**(code **)(**(int **)(iVar11 + 0x10) + 8))(*(int **)(iVar11 + 0x10),uVar7,iVar10 << 3);
    *(undefined4 *)(iVar12 + 0x74) = 0;
    *(undefined4 *)(iVar12 + 0x70) = 0;
    iVar12 = KeTlsGetValue(lbl_8323B4A0);
    puVar2 = *(undefined4 **)(iVar12 + 4);
    if (puVar2 < *(undefined4 **)(iVar12 + 0xc)) {
      *puVar2 = &lbl_8202CF7C;
      uVar9 = TBLr;
      puVar2[1] = (int)uVar9;
      *(undefined4 **)(iVar12 + 4) = puVar2 + 3;
    }
  }
  fn_82CE8E78(param_2,param_3,param_3,0);
  return;
}

