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
extern unsigned int *auStack_50;
extern int fn_825E8220();
extern int fn_825EA0B8();
extern int fn_82A1F198();
extern int fn_82BFE128();
extern U64 storeWordConditionalIndexed();


ulonglong fn_825E9F70(longlong param_1,undefined8 param_2,int *param_3)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint *puVar7;
  int iVar8;
  int iVar9;
  char in_RESERVE;
  byte bVar10;
  undefined1 auStack_50 [8];
  code *pcStack_48;
  
  uVar5 = fn_825EA0B8();
  if ((uVar5 & 0xffffffff) != 0) {
    return uVar5;
  }
  fn_825E8220(auStack_50,param_1 + 0x10);
  uVar5 = fn_825EA0B8(param_1,param_2,param_3);
  bVar1 = (uVar5 & 0xffffffff) == 0;
  bVar10 = bVar1 << 1;
  if (bVar1) {
    iVar8 = 0;
    lVar6 = param_1;
    do {
      if ((*param_3 <= ((int *)*(int *)lVar6)[1]) && (*(int *)*(int *)lVar6 == (int)param_2)) {
        iVar3 = *(int *)(iVar8 * 4 + (int)param_1);
        lVar6 = fn_82A1F198(*(undefined4 *)(iVar3 + 0xc),0xffffffffffffffff,0x80,0x404);
        fn_82BFE128(*(undefined4 *)(iVar3 + 0x14),lVar6);
        iVar9 = 0;
        if (0 < *(int *)(iVar3 + 8)) {
          do {
            fn_82BFE128(*(undefined4 *)(iVar3 + 0x10),lVar6);
            iVar9 = iVar9 + 1;
            lVar6 = (ulonglong)*(uint *)(iVar3 + 4) + lVar6;
          } while (iVar9 < *(int *)(iVar3 + 8));
        }
        uVar2 = *(uint *)(*(int *)(iVar8 * 4 + (int)param_1) + 0xc);
        do {
          puVar7 = (uint *)(param_1 + 0x24);
          if (in_RESERVE != '\0') {
            uVar4 = storeWordConditionalIndexed
                              ((ulonglong)uVar2 + (ulonglong)*puVar7,0,param_1 + 0x24);
            *puVar7 = uVar4;
            bVar10 = 2;
          }
        } while (!(bool)(bVar10 >> 1 & 1));
        uVar5 = fn_825EA0B8(param_1,param_2,param_3);
        goto LAB_825e9fbc;
      }
      iVar8 = iVar8 + 1;
      lVar6 = lVar6 + 4;
    } while (iVar8 < 4);
    uVar5 = 0;
  }
LAB_825e9fbc:
  (*pcStack_48)(auStack_50);
  return uVar5;
}

