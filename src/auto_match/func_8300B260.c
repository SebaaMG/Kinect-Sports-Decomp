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
extern int fn_82FAB9C0();
extern int fn_83006458();
extern int fn_83006FF8();
extern int fn_83007088();
extern int fn_83007488();
extern int fn_83007940();
extern int fn_8300C538();
extern unsigned int lbl_832642E0;
extern unsigned int stack0x0000001c;
extern unsigned int stack0x00000024;
extern unsigned int uStack00000024;
extern unsigned int uStack_53;
extern unsigned int uStack_58;
extern unsigned int uStack_59;


undefined8 fn_8300B260(int *param_1,int param_2,undefined4 param_3)

{
  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  int *piVar8;
  undefined8 uVar7;
  float *pfVar9;
  uint *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  uint uVar13;
  longlong lVar14;
  double dVar15;
  uint *puStack0000001c;
  undefined4 uStack00000024;
  undefined1 uStack_59;
  undefined4 uStack_58;
  char cStack_54;
  undefined4 uStack_53;
  
  puStack0000001c = (uint *)(param_2 + 8);
  uStack00000024 = param_3;
  if (*(int *)(param_2 + 4) != 0) {
    piVar8 = (int *)fn_82FAB9C0((ulonglong)lbl_832642E0 + 4);
    if (piVar8 == (int *)0x0) {
      return 2;
    }
    uVar7 = (**(code **)(*piVar8 + 100))(piVar8,param_1[3]);
    (**(code **)(*piVar8 + 8))(piVar8);
    if ((int)uVar7 != 1) {
      return uVar7;
    }
  }
  (**(code **)(*param_1 + 0x124))(param_1,&stack0x0000001c,&stack0x00000024);
  uVar2 = *puStack0000001c;
  puStack0000001c = puStack0000001c + 1;
  uVar7 = fn_83007940(param_1,uVar2);
  if ((int)uVar7 == 1) {
    uVar13 = 0;
    param_1[0x15] = *puStack0000001c * 0x30;
    param_1[0x16] = puStack0000001c[1];
    *(byte *)((int)param_1 + 0x3e) =
         ((byte)puStack0000001c[2] & 0x1f) << 1 | *(byte *)((int)param_1 + 0x3e) & 0xc1;
    uVar4 = puStack0000001c[3];
    puStack0000001c = puStack0000001c + 4;
    if (uVar4 != 0) {
      do {
        uVar3 = *puStack0000001c;
        pfVar9 = (float *)(puStack0000001c + 1);
        fVar5 = (float)puStack0000001c[2];
        fVar6 = (float)puStack0000001c[3];
        bVar1 = *(byte *)(puStack0000001c + 4);
        puStack0000001c = (uint *)((int)puStack0000001c + 0x11);
        dVar15 = (double)*pfVar9;
        pfVar9 = (float *)fn_8300C538(param_1 + 0x17,uVar3);
        if (pfVar9 == (float *)0x0) {
          return 2;
        }
        *pfVar9 = (float)dVar15;
        uVar13 = uVar13 + 1;
        pfVar9[2] = fVar6;
        pfVar9[3] = (float)(uint)bVar1;
        pfVar9[1] = fVar5;
      } while (uVar13 < uVar4);
    }
    uVar7 = (**(code **)(*param_1 + 0x128))(param_1,&stack0x0000001c,&stack0x00000024,0);
    if (((int)uVar7 == 1) &&
       (uVar7 = fn_83006458(param_1,&stack0x0000001c,&stack0x00000024), (int)uVar7 == 1)) {
      uVar13 = 0;
      puVar10 = puStack0000001c + 1;
      uVar4 = *puStack0000001c;
      puStack0000001c = puVar10;
      if (uVar4 != 0) {
        do {
          puVar11 = &uStack_59;
          puVar12 = (undefined1 *)((int)puStack0000001c + -1);
          lVar14 = 9;
          do {
            puVar12 = puVar12 + 1;
            puVar11 = puVar11 + 1;
            *puVar11 = *puVar12;
            lVar14 = lVar14 + -1;
          } while (lVar14 != 0);
          puStack0000001c = (uint *)((int)puStack0000001c + 9);
          if (cStack_54 == '\0') {
            uVar7 = fn_83006FF8(param_1,uStack_58);
          }
          else {
            uVar7 = fn_83007088(param_1,uStack_53,uStack_58);
          }
          if ((int)uVar7 != 1) {
            return uVar7;
          }
          uVar13 = uVar13 + 1;
        } while (uVar13 < uVar4);
      }
      uVar7 = fn_83007488(param_1,&stack0x0000001c,&stack0x00000024);
    }
  }
  return uVar7;
}

