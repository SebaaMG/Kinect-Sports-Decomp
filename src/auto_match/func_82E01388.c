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
extern int fn_82CE5410();
extern int fn_82CE6310();
extern int fn_82DFE6F8();
extern unsigned int lbl_82132BC4;
extern unsigned int lbl_8323B4A0;
extern unsigned int uStack_94;
extern unsigned int uStack_98;
extern unsigned int uStack_9c;
extern unsigned int uStack_a0;


void fn_82E01388(int param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  byte bVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  int iVar9;
  char cVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  ulonglong uVar14;
  uint uStack_a0;
  uint uStack_9c;
  uint uStack_98;
  uint uStack_94;
  
  iVar7 = KeTlsGetValue(lbl_8323B4A0);
  puVar2 = *(undefined4 **)(iVar7 + 4);
  if (puVar2 < *(undefined4 **)(iVar7 + 0xc)) {
    *puVar2 = "TtDoVehicles";
    uVar5 = TBLr;
    puVar2[1] = (int)uVar5;
    *(undefined4 **)(iVar7 + 4) = puVar2 + 3;
  }
  iVar7 = *(int *)(param_1 + 0xc);
  uStack_a0 = 0;
  uStack_9c = 0;
  uStack_98 = 0x80000000;
  iVar6 = (uint)*(ushort *)(param_1 + 0x14) * 0x60 + (uint)*(ushort *)(param_1 + 0x14) * 0x50 +
          param_4;
  puVar8 = (uint *)fn_82CE5410();
  iVar12 = 0;
  uStack_a0 = *puVar8;
  *puVar8 = uStack_a0 + 0x600;
  uStack_98 = 0x80000010;
  uStack_94 = uStack_a0;
  if (0 < iVar7) {
    iVar11 = 0;
    do {
      iVar4 = *(int *)(iVar11 + *(int *)(param_1 + 8));
      bVar1 = *(byte *)(*(int *)(iVar4 + 0x1c) + 0x20);
      iVar9 = fn_82CE5410();
      if ((uStack_98 & 0x3fffffff) < (uint)bVar1) {
        uVar13 = (uStack_98 & 0x3fffffff) << 1;
        if (uVar13 <= bVar1) {
          uVar13 = (uint)bVar1;
        }
        fn_82CE6310(*(undefined4 *)(iVar9 + 0x10),&uStack_a0,uVar13);
      }
      uStack_9c = (uint)bVar1;
      piVar3 = *(int **)(iVar4 + 0x3c);
      uVar13 = (uint)*(byte *)(*(int *)(iVar4 + 0x1c) + 0x20);
      if (uVar13 != 0) {
        uVar14 = 0;
        do {
          cVar10 = *(char *)(iVar6 + iVar12);
          if ((cVar10 == '\0') || (*(int *)(param_4 + 0x48) == 0)) {
            (**(code **)(*piVar3 + 0x40))
                      (piVar3,iVar4,uVar14,
                       (uVar14 + (uVar14 & 0x7fffffff) * 2 & 0x7ffffff) * 0x20 +
                       (ulonglong)uStack_a0);
          }
          else {
            (**(code **)(*piVar3 + 0x3c))
                      (piVar3,iVar4,uVar14,*(undefined4 *)(param_4 + 0x40),
                       (uVar14 + (uVar14 & 0x7fffffff) * 2 & 0x7ffffff) * 0x20 +
                       (ulonglong)uStack_a0);
          }
          (**(code **)(*piVar3 + 0x2c))(piVar3,iVar4,uVar14);
          if (cVar10 != '\0') {
            param_4 = param_4 + 0x50;
          }
          cVar10 = (char)uVar14 + '\x01';
          uVar14 = (ulonglong)cVar10;
        } while ((int)cVar10 < (int)uVar13);
      }
      fn_82DFE6F8(*(undefined4 *)(iVar11 + *(int *)(param_1 + 8)),param_2,uStack_a0);
      iVar12 = iVar12 + 1;
      iVar11 = iVar11 + 4;
    } while (iVar12 < iVar7);
  }
  iVar7 = KeTlsGetValue(lbl_8323B4A0);
  uVar13 = uStack_94;
  puVar2 = *(undefined4 **)(iVar7 + 4);
  if (puVar2 < *(undefined4 **)(iVar7 + 0xc)) {
    *puVar2 = &lbl_82132BC4;
    uVar5 = TBLr;
    puVar2[1] = (int)uVar5;
    *(undefined4 **)(iVar7 + 4) = puVar2 + 3;
  }
  uStack_9c = -(uint)(uStack_a0 != uStack_94) & uStack_9c;
  puVar8 = (uint *)fn_82CE5410();
  *puVar8 = uVar13;
  iVar7 = fn_82CE5410();
  uStack_9c = 0;
  if ((uStack_98 & 0x80000000) == 0) {
    (**(code **)(**(int **)(iVar7 + 0x10) + 0x10))
              (*(int **)(iVar7 + 0x10),uStack_a0,uStack_98 & 0x3fffffff,0x60);
  }
  return;
}

