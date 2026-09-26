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
extern unsigned int lbl_8200D6AC;


ulonglong fn_826E7468(int *param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  byte *pbVar8;
  ulonglong uVar9;
  int iVar10;
  uint uVar11;
  
  bVar4 = (&lbl_8200D6AC)[param_2];
  uVar11 = param_1[3] + param_2;
  uVar9 = (ulonglong)(uint)(1 << (8U - param_1[3] & 0x3f)) - 1;
  if (bVar4 == 0) {
    return 0;
  }
  if (bVar4 == 1) {
    if (8 < uVar11) {
      iVar10 = param_1[2];
      pbVar8 = (byte *)(iVar10 + *param_1);
LAB_826e75f4:
      iVar10 = iVar10 + 1;
      uVar6 = (ulonglong)pbVar8[1];
      uVar11 = 0x10 - uVar11;
      uVar7 = *pbVar8 & uVar9;
      goto LAB_826e7608;
    }
    uVar11 = 8 - uVar11;
    uVar6 = *(byte *)(param_1[2] + *param_1) & uVar9;
LAB_826e7614:
    if (uVar11 != 0) {
      iVar10 = 8 - uVar11;
      uVar6 = (ulonglong)((uint)uVar6 >> (uVar11 & 0x3f));
      goto LAB_826e74c8;
    }
  }
  else {
    if (bVar4 < 3) {
      iVar10 = param_1[2];
      pbVar8 = (byte *)(iVar10 + *param_1);
      if (uVar11 < 0x11) goto LAB_826e75f4;
      uVar7 = (ulonglong)pbVar8[1];
LAB_826e758c:
      iVar10 = iVar10 + 2;
      uVar6 = (ulonglong)pbVar8[2];
      uVar11 = 0x18 - uVar11;
      uVar7 = (*pbVar8 & uVar9) << 8 | uVar7;
LAB_826e7608:
      param_1[2] = iVar10;
      uVar6 = uVar7 << 8 | uVar6;
      goto LAB_826e7614;
    }
    if (bVar4 == 3) {
      iVar10 = param_1[2];
      pbVar8 = (byte *)(iVar10 + *param_1);
      uVar7 = (ulonglong)pbVar8[1];
      if (uVar11 < 0x19) goto LAB_826e758c;
LAB_826e74e8:
      iVar10 = iVar10 + 3;
      uVar11 = 0x20 - uVar11;
      uVar6 = (ulonglong)pbVar8[3];
      uVar7 = ((*pbVar8 & uVar9) << 8 | uVar7) << 8 | (ulonglong)pbVar8[2];
      goto LAB_826e7608;
    }
    if (bVar4 < 5) {
      iVar10 = param_1[2];
      if (0x20 < uVar11) {
        uVar11 = uVar11 - 0x20;
        pbVar8 = (byte *)(*param_1 + iVar10);
        bVar4 = pbVar8[1];
        bVar1 = *pbVar8;
        bVar2 = pbVar8[2];
        bVar3 = pbVar8[3];
        param_1[2] = iVar10 + 4;
        bVar5 = *(byte *)(iVar10 + 4 + *param_1);
        param_1[3] = uVar11;
        return (ulonglong)
               ((uint)(bVar5 >> (8 - uVar11 & 0x3f)) |
               ((uint)((((bVar1 & uVar9) << 8 | (ulonglong)bVar4) << 8 | (ulonglong)bVar2) << 8) |
               (uint)bVar3) << (uVar11 & 0x3f));
      }
      pbVar8 = (byte *)(iVar10 + *param_1);
      uVar7 = (ulonglong)pbVar8[1];
      goto LAB_826e74e8;
    }
    uVar6 = 0;
  }
  iVar10 = 0;
  param_1[2] = param_1[2] + 1;
LAB_826e74c8:
  param_1[3] = iVar10;
  return uVar6;
}

