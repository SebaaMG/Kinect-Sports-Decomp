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
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_821AAD20;


undefined8 fn_82C2CED0(int param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  short sVar2;
  uint uVar4;
  ulonglong uVar3;
  int iVar5;
  longlong lVar6;
  int iVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  lVar6 = 0;
  if ((param_3 & 0xffff) != 0) {
    uVar4 = (uint)*(ushort *)(param_1 + 0x22);
    iVar5 = 0;
    dVar10 = (double)lbl_82002C5C;
    dVar9 = (double)lbl_821AAD20;
    do {
      if (uVar4 != 0) {
        iVar7 = 0;
        do {
          dVar8 = (double)*(float *)(*(int *)(iVar7 * 0x6f0 + *(int *)(param_1 + 0x140) + 0x3c) +
                                    iVar5 * 4);
          uVar3 = (ulonglong)(uint)(1 << (*(ushort *)(param_1 + 0x6e) - 1 & 0x3f));
          if (dVar9 <= dVar8) {
            uVar3 = uVar3 - 1;
            uVar1 = (ulonglong)(uint)(int)(dVar8 + dVar10);
            if ((int)uVar3 < (int)(dVar8 + dVar10)) goto LAB_82c2cf90;
          }
          else {
            uVar3 = ~(uVar3 - 1);
            uVar1 = (ulonglong)(uint)(int)(dVar8 - dVar10);
            if ((int)(dVar8 - dVar10) < (int)uVar3) {
LAB_82c2cf90:
              uVar1 = uVar3;
            }
          }
          (**(code **)(param_1 + 0x208))(uVar1,param_2,param_1,lVar6);
          sVar2 = (short)iVar7 + 1;
          uVar4 = (uint)*(ushort *)(param_1 + 0x22);
          lVar6 = lVar6 + 1;
          iVar7 = (int)sVar2;
        } while ((int)sVar2 < (int)uVar4);
      }
      sVar2 = (short)iVar5 + 1;
      iVar5 = (int)sVar2;
    } while ((int)sVar2 < (int)(param_3 & 0xffff));
  }
  return 0;
}

