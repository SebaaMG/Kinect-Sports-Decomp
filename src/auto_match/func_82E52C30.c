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
extern int fn_82E50F00();
extern int fn_82E51028();
extern int fn_82E52428();
extern int fn_82F64D08();


undefined8 fn_82E52C30(longlong param_1,undefined8 param_2,short *param_3,undefined4 *param_4)

{
  byte bVar1;
  byte bVar2;
  short sVar3;
  short *psVar4;
  int iVar5;
  longlong lVar6;
  byte *pbVar7;
  byte *pbVar8;
  undefined4 uVar9;
  byte *pbVar10;
  bool bVar11;
  
  fn_82E50F00(param_1 + 4,1);
  psVar4 = (short *)fn_82E52428(param_1,param_2);
  if ((psVar4 == (short *)0x0) || (sVar3 = *psVar4, *param_3 != sVar3)) {
LAB_82e52d8c:
    uVar9 = 0;
  }
  else {
    if (sVar3 == 5) {
      bVar11 = *(double *)(psVar4 + 4) == *(double *)(param_3 + 4);
joined_r0x82e52d0c:
      if (!bVar11) goto LAB_82e52d8c;
    }
    else if (sVar3 != 0xd) {
      if (sVar3 == 0x13) {
        bVar11 = *(int *)(psVar4 + 4) == *(int *)(param_3 + 4);
      }
      else if (sVar3 == 0x15) {
        bVar11 = *(longlong *)(psVar4 + 4) == *(longlong *)(param_3 + 4);
      }
      else if (sVar3 == 0x1f) {
        iVar5 = fn_82F64D08(*(undefined4 *)(psVar4 + 4),*(undefined4 *)(param_3 + 4));
        bVar11 = iVar5 == 0;
      }
      else if (sVar3 == 0x48) {
        pbVar7 = *(byte **)(psVar4 + 4);
        pbVar10 = *(byte **)(param_3 + 4);
        pbVar8 = pbVar7 + 0x10;
        do {
          bVar1 = *pbVar7;
          bVar2 = *pbVar10;
          if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
          pbVar7 = pbVar7 + 1;
          pbVar10 = pbVar10 + 1;
        } while (pbVar7 != pbVar8);
        bVar11 = (int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0;
      }
      else {
        if (sVar3 != 0x1011) goto LAB_82e52cb8;
        iVar5 = *(int *)(psVar4 + 4);
        if (iVar5 != *(int *)(param_3 + 4)) goto LAB_82e52d8c;
        pbVar7 = *(byte **)(param_3 + 6);
        lVar6 = 0;
        pbVar10 = *(byte **)(psVar4 + 6);
        if (iVar5 != 0) {
          pbVar8 = pbVar10 + iVar5;
          do {
            lVar6 = (ulonglong)*pbVar10 - (ulonglong)*pbVar7;
            if (lVar6 != 0) break;
            pbVar10 = pbVar10 + 1;
            pbVar7 = pbVar7 + 1;
          } while (pbVar10 != pbVar8);
        }
        bVar11 = (int)lVar6 == 0;
      }
      goto joined_r0x82e52d0c;
    }
LAB_82e52cb8:
    uVar9 = 1;
  }
  *param_4 = uVar9;
  fn_82E51028(param_1 + 4,1);
  return 0;
}

