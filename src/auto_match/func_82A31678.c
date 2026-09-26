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
extern int fn_82A2BBD8();
extern int fn_82A2E260();
extern int fn_82A31620();
extern int fn_82F68CC0();


ulonglong fn_82A31678(int param_1,ulonglong param_2,undefined4 *param_3)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  byte *pbVar5;
  ulonglong uVar6;
  byte *pbVar7;
  int iVar9;
  ulonglong uVar8;
  
  iVar2 = *(int *)(param_1 + 0x18);
  iVar9 = (int)param_2;
  if (((iVar9 == 0) || (iVar9 == 1)) ||
     (uVar6 = (ulonglong)*(uint *)(iVar2 + 0x88), *(uint *)(iVar2 + 0x88) == 0)) {
    uVar6 = 0;
    if ((param_2 & 0xffffffff) < 9) {
      bVar1 = iVar9 != 0;
      if (param_2 == 1 && bVar1) {
        RtlLeaveCriticalSection(iVar2);
      }
      else if (param_2 == 2 && bVar1) {
        uVar6 = (ulonglong)*(uint *)(iVar2 + 0x88);
        if ((*(uint *)(iVar2 + 0x88) == 0) && (uVar6 = fn_82A31620(iVar2), -1 < (longlong)uVar6))
        {
          uVar6 = fn_82A2E260(iVar2,0,0xffffffffffffffff);
        }
      }
      else if (param_2 == 3 && bVar1) {
        uVar6 = (ulonglong)*(uint *)(iVar2 + 0x88);
        fn_82A2BBD8(iVar2);
      }
      else if (param_2 == 4 && bVar1) {
        uVar6 = (ulonglong)*(uint *)(iVar2 + 0x88);
        if (*(uint *)(iVar2 + 0x88) == 0) {
          puVar3 = *(undefined4 **)(iVar2 + 0x80);
          *(int *)(iVar2 + 0xa0) = *(int *)(iVar2 + 0xa0) + *(int *)(iVar2 + 0xa4);
          *(uint *)(iVar2 + 0xc4) = *(uint *)(iVar2 + 0xc4) & 0x7fffffff;
          *(uint *)(iVar2 + 0xa8) = *(uint *)(iVar2 + 0x4c) >> 0xc;
          *(undefined4 *)(iVar2 + 0xa4) = 0;
          while (puVar3 != (undefined4 *)(iVar2 + 0x80)) {
            piVar4 = puVar3 + -0x12;
            puVar3 = (undefined4 *)*puVar3;
            *(byte *)(*piVar4 + 0x35) = *(byte *)(*piVar4 + 0x35) & 0xdf;
          }
          uVar8 = (ulonglong)*(byte *)(iVar2 + 200);
          if (uVar8 != 0) {
            pbVar7 = (byte *)(*(int *)(iVar2 + 0x30) + -1);
            do {
              pbVar5 = pbVar7 + 8;
              pbVar7 = pbVar7 + 8;
              *pbVar7 = *pbVar5 & 0xfb;
              uVar8 = uVar8 - 1;
            } while (uVar8 != 0);
          }
        }
      }
      else if (param_2 == 5 && bVar1) {
        *param_3 = *(undefined4 *)(iVar2 + 0x8c);
      }
      else if (param_2 == 6 && bVar1) {
        *(undefined4 *)(iVar2 + 0x8c) = *param_3;
      }
      else if (param_2 == 7 && bVar1) {
        fn_82F68CC0(param_3,0xffffffff83219d04,0x28);
      }
      else if (bVar1) {
        *(undefined4 *)(iVar2 + 0xd0) = *param_3;
        *(undefined4 *)(iVar2 + 0xd4) = param_3[1];
      }
      else {
        RtlEnterCriticalSection(iVar2);
      }
    }
    else {
      uVar6 = 0xffffffffc0000010;
    }
  }
  return uVar6;
}

