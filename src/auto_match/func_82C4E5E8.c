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


void fn_82C4E5E8(longlong *param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  byte *pbVar9;
  
  do {
    pbVar9 = *(byte **)((int)param_1 + 0xc);
    if (pbVar9 < *(byte **)(param_1 + 2) + -4) {
      bVar1 = *pbVar9;
      bVar2 = pbVar9[1];
      bVar3 = pbVar9[2];
      bVar4 = pbVar9[3];
      bVar5 = pbVar9[4];
      bVar6 = pbVar9[5];
      iVar7 = *(int *)(param_1 + 1);
      *(byte **)((int)param_1 + 0xc) = pbVar9 + 6;
      *(int *)(param_1 + 1) = iVar7 + 0x30;
      *param_1 = ((((((ulonglong)bVar1 * 0x100 + (ulonglong)bVar2) * 0x100 + (ulonglong)bVar3) *
                    0x100 + (ulonglong)bVar4) * 0x100 + (ulonglong)bVar5) * 0x100 + (ulonglong)bVar6
                 << ((longlong)-iVar7 & 0x7fU)) + *param_1;
      return;
    }
    if (pbVar9 <= *(byte **)(param_1 + 2)) {
      do {
        iVar7 = *(int *)(param_1 + 1);
        bVar1 = *pbVar9;
        pbVar9 = pbVar9 + 1;
        iVar8 = iVar7 + 8;
        *(int *)(param_1 + 1) = iVar8;
        *param_1 = ((ulonglong)bVar1 << ((longlong)(0x28 - iVar7) & 0x7fU)) + *param_1;
      } while (pbVar9 <= *(byte **)(param_1 + 2));
      *(byte **)((int)param_1 + 0xc) = pbVar9;
      if (-1 < iVar8) {
        return;
      }
    }
    if (*(int *)(param_1 + 3) != 1) {
      if (-0x11 < *(int *)(param_1 + 1)) {
        return;
      }
      if (*(int *)((int)param_1 + 0x14) == 0) {
        *(undefined4 *)((int)param_1 + 0x14) = 2;
      }
      *(undefined4 *)(param_1 + 1) = 0x7f;
      return;
    }
    fn_82C4E0F8(param_1);
  } while( true );
}

