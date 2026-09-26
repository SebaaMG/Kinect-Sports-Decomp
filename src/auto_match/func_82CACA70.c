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
extern int fn_82C4E3B0();
extern int fn_82C4E470();
extern int fn_82CAC2E0();


ulonglong fn_82CACA70(undefined8 param_1,int *param_2,ulonglong *param_3,int *param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  short sVar7;
  int *piVar8;
  byte *pbVar9;
  int iVar10;
  int iVar12;
  ulonglong uVar11;
  ulonglong uVar13;
  
  if ((*(uint *)(*param_2 + 4) & param_2[5]) == 0) {
    iVar12 = fn_82CAC2E0();
    *param_4 = iVar12;
    if (iVar12 != 0) {
      return 0;
    }
    *(uint *)(*param_2 + 4) = param_2[5] | *(uint *)(*param_2 + 4);
  }
  piVar8 = (int *)param_2[0xb];
  if (piVar8 == (int *)0x0) {
    uVar11 = 0;
    *(undefined4 *)((int)param_3 + 0x14) = 3;
  }
  else {
    iVar12 = *piVar8;
    sVar7 = *(short *)((int)((*param_3 >> (0x40 - (ulonglong)*(byte *)(piVar8 + 2) & 0x7f) &
                             0xffffffff) << 1) + iVar12);
    uVar11 = (ulonglong)sVar7;
    if (sVar7 < 0) {
      fn_82C4E470(param_3);
      do {
        uVar13 = *param_3;
        fn_82C4E470(param_3,1);
        sVar7 = *(short *)((int)(((uVar11 - ((longlong)uVar13 >> 0x3f)) + 0x8000 & 0xffffffff) << 1)
                          + iVar12);
        uVar11 = (ulonglong)sVar7;
      } while (sVar7 < 0);
    }
    else {
      iVar12 = *(int *)(param_3 + 1);
      iVar10 = (int)(uVar11 & 0xf);
      *param_3 = *param_3 << (uVar11 & 0xf);
      *(int *)(param_3 + 1) = iVar12 - iVar10;
      if (iVar12 < iVar10) {
        do {
          pbVar9 = *(byte **)((int)param_3 + 0xc);
          if (pbVar9 < (byte *)(*(int *)(param_3 + 2) - 4U)) {
            bVar1 = *pbVar9;
            bVar2 = pbVar9[1];
            bVar3 = pbVar9[2];
            bVar4 = pbVar9[3];
            bVar5 = pbVar9[4];
            bVar6 = pbVar9[5];
            iVar12 = *(int *)(param_3 + 1);
            *(byte **)((int)param_3 + 0xc) = pbVar9 + 6;
            *(int *)(param_3 + 1) = iVar12 + 0x30;
            *param_3 = ((((((ulonglong)bVar1 * 0x100 + (ulonglong)bVar2) * 0x100 + (ulonglong)bVar3)
                          * 0x100 + (ulonglong)bVar4) * 0x100 + (ulonglong)bVar5) * 0x100 +
                        (ulonglong)bVar6 << ((longlong)-iVar12 & 0x7fU)) + *param_3;
            goto LAB_82cacbdc;
          }
          iVar12 = fn_82C4E3B0(param_3);
        } while (iVar12 == 1);
        uVar11 = (ulonglong)((int)sVar7 >> 4);
      }
      else {
LAB_82cacbdc:
        uVar11 = (ulonglong)((int)sVar7 >> 4);
      }
    }
  }
  return uVar11;
}

