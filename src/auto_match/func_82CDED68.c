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
extern unsigned int uStack_a0;


void fn_82CDED68(int param_1,int param_2,byte *param_3,int param_4,int param_5,int param_6,
                  int param_7,longlong param_8)

{
  byte bVar1;
  int unaff_10000394;
  int *piVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  int iVar7;
  ulonglong uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint in_stack_00000054;
  uint in_stack_00000064;
  int in_stack_0000006c;
  int in_stack_0000007c;
  int in_stack_00000084;
  uint uStack_a0;
  
  pbVar6 = param_3 + param_5;
  if ((int)in_stack_00000054 < (int)param_8) {
    uVar8 = param_8 - (ulonglong)in_stack_00000054;
    uStack_a0 = (uint)uVar8;
    iVar10 = 0;
    iVar9 = 0;
    pbVar5 = pbVar6;
    pbVar3 = param_3;
    do {
      iVar11 = ((int)in_stack_00000064 >> 8) * unaff_10000394;
      iVar7 = iVar11 + param_1;
      iVar11 = param_1 + param_7 + iVar11;
      if (iVar7 == iVar10) {
        iVar10 = 0;
        if (0 < param_4) {
          piVar2 = (int *)(in_stack_00000084 + -4);
          pbVar4 = pbVar3;
          iVar9 = param_4;
          do {
            piVar2 = piVar2 + 1;
            *pbVar4 = (byte)((int)((uint)*(byte *)(*piVar2 + iVar11) *
                                   (0x80 - (uint)pbVar4[in_stack_0000007c - (int)pbVar3]) +
                                  (uint)*(byte *)(iVar11 + 1 + *piVar2) *
                                  (uint)pbVar4[in_stack_0000007c - (int)pbVar3]) >> 7);
            pbVar4 = pbVar4 + 1;
            iVar9 = iVar9 + -1;
            iVar10 = param_4;
          } while (iVar9 != 0);
        }
        pbVar4 = pbVar3;
        if (iVar10 < param_5) {
          iVar9 = param_5 - iVar10;
          piVar2 = (int *)(iVar10 * 4 + in_stack_00000084 + -4);
          do {
            piVar2 = piVar2 + 1;
            pbVar3[iVar10] = *(byte *)(*piVar2 + iVar11);
            iVar10 = iVar10 + 1;
            iVar9 = iVar9 + -1;
          } while (iVar9 != 0);
        }
      }
      else {
        pbVar4 = pbVar5;
        pbVar5 = pbVar3;
        if (iVar7 != iVar9) {
          iVar10 = 0;
          if (0 < param_4) {
            piVar2 = (int *)(in_stack_00000084 + -4);
            pbVar5 = param_3;
            iVar10 = param_4;
            do {
              piVar2 = piVar2 + 1;
              iVar9 = *piVar2;
              bVar1 = pbVar5[in_stack_0000007c - (int)param_3];
              *pbVar5 = (byte)((int)((uint)*(byte *)(iVar7 + 1 + iVar9) * (uint)bVar1 +
                                    (uint)*(byte *)(iVar9 + iVar7) * (0x80 - (uint)bVar1)) >> 7);
              pbVar5[(int)pbVar6 - (int)param_3] =
                   (byte)((int)((uint)*(byte *)(iVar11 + 1 + iVar9) * (uint)bVar1 +
                               (uint)*(byte *)(iVar9 + iVar11) * (0x80 - (uint)bVar1)) >> 7);
              pbVar5 = pbVar5 + 1;
              iVar10 = iVar10 + -1;
            } while (iVar10 != 0);
            uVar8 = (ulonglong)uStack_a0;
            unaff_10000394 = param_7;
            iVar10 = param_4;
          }
          pbVar4 = pbVar6;
          pbVar5 = param_3;
          if (iVar10 < param_5) {
            iVar9 = param_5 - iVar10;
            pbVar3 = pbVar6 + iVar10;
            piVar2 = (int *)(iVar10 * 4 + in_stack_00000084 + -4);
            do {
              piVar2 = piVar2 + 1;
              iVar10 = *piVar2;
              pbVar3[(int)param_3 - (int)pbVar6] = *(byte *)(iVar10 + iVar7);
              *pbVar3 = *(byte *)(iVar10 + iVar11);
              pbVar3 = pbVar3 + 1;
              iVar9 = iVar9 + -1;
            } while (iVar9 != 0);
          }
        }
      }
      pbVar3 = pbVar5;
      pbVar5 = pbVar4;
      if (0 < param_5) {
        pbVar4 = pbVar5;
        iVar10 = param_5;
        do {
          pbVar4[param_2 - (int)pbVar5] =
               (byte)((uint)pbVar4[(int)pbVar3 - (int)pbVar5] * (0x100 - (in_stack_00000064 & 0xff))
                      + (uint)*pbVar4 * (in_stack_00000064 & 0xff) >> 8);
          pbVar4 = pbVar4 + 1;
          iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
      }
      uVar8 = uVar8 - 1;
      uStack_a0 = (uint)uVar8;
      param_2 = param_2 + param_6;
      in_stack_00000064 = in_stack_00000064 + in_stack_0000006c;
      iVar10 = iVar11;
      iVar9 = iVar7;
    } while (uVar8 != 0);
  }
  return;
}

