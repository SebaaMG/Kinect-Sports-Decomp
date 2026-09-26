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
extern unsigned int *auStack_80;
extern int fn_82CE5040();
extern int fn_82F63108();
extern V16 vectorAddFloatingPoint();
extern void *memcpy(void *, const void *, unsigned int);


void fn_826050B8(int param_1,undefined8 param_2,undefined8 param_3,uint *param_4)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined8 in_r0;
  uint uVar4;
  int iVar5;
  ushort uVar6;
  int iVar7;
  byte bVar8;
  int iVar9;
  undefined1 in_vs32 [16];
  undefined1 in_vs45 [16];
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [112];
  
  uVar4 = *param_4;
  uVar1 = param_4[1];
  if (uVar4 < uVar1) {
    iVar9 = uVar4 + 0x280;
    do {
      if ((*(uint *)(iVar9 + 0x234) & *(uint *)(param_1 + 0x144)) != 0) {
        if ('\0' < *(char *)(iVar9 + -0x23e)) {
          uVar6 = *(ushort *)(iVar9 + -0x23a);
          if ((uVar6 & 0x87) != 0x87) {
            if ((uVar6 & 1) == 0) {
              fn_82CE5040(iVar9 + 0x240,param_3,iVar9 + -0x270);
              uVar6 = uVar6 | 1;
            }
            if ((uVar6 & 4) == 0) {
              puVar2 = (undefined4 *)(iVar9 - 0x270U & 0xfffffff0);
              uVar10 = puVar2[1];
              uVar11 = puVar2[2];
              uVar12 = puVar2[3];{ V16 _vt0 = vectorAddFloatingPoint(in_vs45,in_vs32); memcpy(in_vs32, &_vt0, 16); }
              puVar3 = (undefined4 *)((uint)(auStack_70 + (int)in_r0) & 0xfffffff0);
              *puVar3 = *puVar2;
              puVar3[1] = uVar10;
              puVar3[2] = uVar11;
              puVar3[3] = uVar12;
              fn_82CE5040(iVar9 + 0x250,param_3,auStack_70);
              uVar6 = uVar6 | 4;
            }
            if ((uVar6 & 2) == 0) {
              iVar5 = 0;
              if ('\0' < *(char *)(iVar9 + -0x240)) {
                iVar7 = iVar9 + 0x260;
                do {
                  puVar2 = (undefined4 *)(iVar7 - 0x490U & 0xfffffff0);
                  uVar10 = *puVar2;
                  uVar11 = puVar2[1];
                  uVar12 = puVar2[2];
                  uVar13 = puVar2[3];
                  puVar2 = (undefined4 *)((uint)(auStack_80 + (int)in_r0) & 0xfffffff0);
                  *puVar2 = uVar10;
                  puVar2[1] = uVar11;
                  puVar2[2] = uVar12;
                  puVar2[3] = uVar13;{ V16 _vt1 = vectorAddFloatingPoint(in_vs32,in_vs45); memcpy(in_vs32, &_vt1, 16); }
                  puVar2 = (undefined4 *)((uint)(auStack_80 + (int)in_r0) & 0xfffffff0);
                  *puVar2 = uVar10;
                  puVar2[1] = uVar11;
                  puVar2[2] = uVar12;
                  puVar2[3] = uVar13;
                  fn_82CE5040(auStack_80,param_3,auStack_80);
                  iVar5 = iVar5 + 1;
                  puVar2 = (undefined4 *)((uint)(auStack_80 + (int)in_r0) & 0xfffffff0);
                  uVar10 = puVar2[1];
                  uVar11 = puVar2[2];
                  uVar12 = puVar2[3];
                  puVar3 = (undefined4 *)((int)in_r0 + iVar7 & 0xfffffff0);
                  *puVar3 = *puVar2;
                  puVar3[1] = uVar10;
                  puVar3[2] = uVar11;
                  puVar3[3] = uVar12;
                  iVar7 = iVar7 + 0x10;
                } while (iVar5 < *(char *)(iVar9 + -0x240));
              }
              uVar6 = uVar6 | 2;
            }
            if ((uVar6 & 0x80) == 0) {
              bVar8 = *(byte *)(iVar9 + -0x23b) ^ 2;
              if ((bVar8 & 7) != 0) {
                if (*(int *)(param_1 + 0x80) == 0) {
                    /* WARNING: Subroutine does not return */
                  fn_82F63108();
                }
                (**(code **)(**(int **)(param_1 + 0x80) + 4))
                          (*(int **)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x10),param_2,
                           iVar9 + 0x20,iVar9 + -8,iVar9 + -4,iVar9,iVar9 + 0x10);
              }
              uVar6 = uVar6 | 0x80;
              *(byte *)(iVar9 + -0x23b) = bVar8;
            }
            *(ushort *)(iVar9 + -0x23a) = uVar6;
          }
        }
      }
      uVar4 = uVar4 + 0x560;
      iVar9 = iVar9 + 0x560;
    } while (uVar4 < uVar1);
  }
  return;
}

