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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
#define ZEXT48(x) ((U64)((U32)(x)))
extern unsigned int *auStack_54;
extern int fn_82A20370();
extern int fn_82F6DF30();


uint fn_82A21DC0(int param_1,uint param_2,byte *param_3,ulonglong param_4,int param_5)

{
  byte bVar1;
  ulonglong uVar2;
  int iVar3;
  byte *pbVar6;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar7;
  uint *puVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbStack_60;
  byte *pbStack_5c;
  byte *pbStack_58;
  uint auStack_54 [21];
  
  pbVar6 = (byte *)param_4;
  pbStack_60 = param_3;
  pbStack_5c = pbVar6;
  fn_82A20370(&pbStack_60,&pbStack_5c,0x3a);
  pbVar10 = pbStack_5c;
  pbVar9 = pbStack_60;
  if ((pbStack_5c != (byte *)0x0) && (*pbStack_60 == 0x5c)) {
    pbVar10 = pbStack_5c + -1;
    pbVar9 = pbStack_60 + 1;
  }
  uVar2 = CONCAT44(pbVar10,pbVar10);
  for (; pbVar10 != (byte *)0x0; pbVar10 = pbVar10 + -1) {
    bVar1 = *pbVar9;
    pbVar9 = pbVar9 + 1;
    uVar4 = fn_82F6DF30(bVar1);
    uVar2 = (uVar4 ^ (uVar2 & 0xff) * 0x11) & 0xffffffff;
  }
  if (param_2 < *(ushort *)(param_1 + 8)) {
    do {
      puVar8 = (uint *)((param_2 - *(ushort *)(param_1 + 0xc)) * 4 + (uint)*(ushort *)(param_1 + 4)
                       + param_1);
      pbStack_5c = (byte *)((*puVar8 & 0xffff) + param_1);
      if ((ulonglong)*pbStack_5c == (uVar2 & 0xff)) {
        pbStack_5c = pbStack_5c + 1;
        uVar4 = (ulonglong)*(byte *)((int)puVar8 + 1) - 1;
        auStack_54[0] = (uint)uVar4;
        if (param_5 == 0) {
          if ((param_4 & 0xffffffff) == (uVar4 & 0xffffffff)) {
            lVar7 = 0;
            if ((param_4 & 0xffffffff) != 0) {
              pbVar10 = param_3;
              do {
                lVar7 = (ulonglong)*pbVar10 - (ulonglong)*pbStack_5c;
                if (lVar7 != 0) break;
                pbVar10 = pbVar10 + 1;
                pbStack_5c = pbStack_5c + 1;
              } while (pbVar10 != param_3 + (int)pbVar6);
            }
            iVar3 = (int)lVar7;
            goto LAB_82a21f94;
          }
        }
        else {
          pbStack_60 = param_3;
          pbStack_58 = pbVar6;
          if (((param_4 & 0xffffffff) == (uVar4 & 0xffffffff)) &&
             (iVar3 = RtlCompareStringN(param_3,param_4,pbStack_5c,uVar4,1), iVar3 == 0)) {
            return param_2;
          }
          fn_82A20370(&pbStack_60,&pbStack_58,0x3a);
          fn_82A20370(&pbStack_5c,auStack_54);
          uVar4 = ZEXT48(pbStack_58);
          pbVar10 = pbStack_60;
          if ((uVar4 != 0) && (*pbStack_60 == 0x5c)) {
            uVar4 = uVar4 - 1;
            pbVar10 = pbStack_60 + 1;
          }
          uVar5 = (ulonglong)auStack_54[0];
          pbVar9 = pbStack_5c;
          if ((uVar5 != 0) && (*pbStack_5c == 0x5c)) {
            uVar5 = uVar5 - 1;
            pbVar9 = pbStack_5c + 1;
          }
          if ((uVar4 & 0xffffffff) == (uVar5 & 0xffffffff)) {
            iVar3 = RtlCompareStringN(pbVar10,uVar4,pbVar9,uVar5,1);
LAB_82a21f94:
            if (iVar3 == 0) {
              return param_2;
            }
          }
        }
      }
      param_2 = param_2 + 1;
    } while (param_2 < *(ushort *)(param_1 + 8));
  }
  return 0xffffffff;
}

