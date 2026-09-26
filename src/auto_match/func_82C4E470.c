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
extern int fn_82C4E0F8();


void fn_82C4E470(longlong *param_1,ulonglong param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  byte *pbVar10;
  
  pbVar10 = *(byte **)((int)param_1 + 0xc);
  if (pbVar10 != (byte *)0x0) {
    uVar7 = *(uint *)(param_1 + 1);
    *param_1 = *param_1 << (param_2 & 0x7f);
    *(int *)(param_1 + 1) = (int)(uVar7 - param_2);
    if ((longlong)(uVar7 - param_2) < 0) {
      if ((byte *)(*(int *)(param_1 + 2) + -4) <= pbVar10) {
        do {
          if (pbVar10 <= *(byte **)(param_1 + 2)) {
            do {
              iVar8 = *(int *)(param_1 + 1);
              bVar1 = *pbVar10;
              pbVar10 = pbVar10 + 1;
              iVar9 = iVar8 + 8;
              *(int *)(param_1 + 1) = iVar9;
              *param_1 = ((ulonglong)bVar1 << ((longlong)(0x28 - iVar8) & 0x7fU)) + *param_1;
            } while (pbVar10 <= *(byte **)(param_1 + 2));
            *(byte **)((int)param_1 + 0xc) = pbVar10;
            if (-1 < iVar9) {
              return;
            }
          }
          if (*(int *)(param_1 + 3) != 1) {
            if (*(int *)(param_1 + 1) < -0x10) {
              if (*(int *)((int)param_1 + 0x14) == 0) {
                *(undefined4 *)((int)param_1 + 0x14) = 2;
              }
              *(undefined4 *)(param_1 + 1) = 0x7f;
            }
            goto LAB_82c4e5cc;
          }
          fn_82C4E0F8(param_1);
          pbVar10 = *(byte **)((int)param_1 + 0xc);
        } while ((byte *)(*(int *)(param_1 + 2) + -4) <= pbVar10);
      }
      bVar1 = *pbVar10;
      bVar2 = pbVar10[1];
      bVar3 = pbVar10[2];
      bVar4 = pbVar10[3];
      iVar8 = *(int *)(param_1 + 1);
      bVar5 = pbVar10[4];
      bVar6 = pbVar10[5];
      *(int *)(param_1 + 1) = iVar8 + 0x30;
      pbVar10 = pbVar10 + 6;
      *param_1 = ((((((ulonglong)bVar1 * 0x100 + (ulonglong)bVar2) * 0x100 + (ulonglong)bVar3) *
                    0x100 + (ulonglong)bVar4) * 0x100 + (ulonglong)bVar5) * 0x100 + (ulonglong)bVar6
                 << ((longlong)-iVar8 & 0x7fU)) + *param_1;
LAB_82c4e5cc:
      *(byte **)((int)param_1 + 0xc) = pbVar10;
    }
  }
  return;
}

