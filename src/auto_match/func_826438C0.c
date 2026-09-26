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
extern int fn_82642048();
extern int fn_826427F8();
extern int fn_82642938();
extern int fn_82642A60();
extern int fn_82F68CC0();
extern unsigned int lbl_832978A4;
extern U64 storeWordConditionalIndexed();


void fn_826438C0(int param_1,undefined8 param_2,int param_3,int param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  uint uVar7;
  int iVar8;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  int *piVar9;
  int iVar11;
  ulonglong uVar10;
  undefined4 *puVar12;
  char in_RESERVE;
  byte bVar13;
  undefined1 auStack_50 [80];
  
  uVar1 = *(uint *)(param_3 + 0x1c);
  uVar7 = 0;
  puVar3 = (uint *)(param_4 + -4);
  do {
    puVar3 = puVar3 + 1;
    auStack_50[uVar7] = (char)(*puVar3 >> 2);
    uVar7 = uVar7 + 1;
  } while (uVar7 <= uVar1);
  if (param_5 != 0) {
    iVar8 = *(int *)(param_1 + 0x380) + param_1;
    iVar11 = *(int *)(param_5 + 0x40) + param_5 + 0x28;
    puVar3 = (uint *)(iVar8 + 0x368);
    iVar2 = fn_82642938(puVar3,iVar11);
    if ((iVar2 != 0) && (iVar2 == 1)) {
      if ((*(byte *)(iVar8 + 0x370) & 7) != 7) {
        fn_826427F8(puVar3,(ulonglong)*(uint *)(param_1 + 0x20) + (ulonglong)*puVar3,iVar8 + 0x370
                      ,iVar11);
      }
      fn_82642A60(puVar3,iVar11);
    }
  }
  uVar10 = 0;
  uVar4 = (ulonglong)((*(uint *)(param_1 + 0x368) & 0x20) == 0) ^ 1;
  bVar13 = (uVar4 == 0xffffffffffffffff) << 1;
  if (uVar4 != 0xffffffffffffffff) {
    puVar12 = (undefined4 *)(param_1 + 0x28);
    piVar9 = (int *)(param_1 + 0x380);
    do {
      fn_82642048(param_1,(ulonglong)*(uint *)(*piVar9 + param_1 + 0x368) +
                            (ulonglong)*(uint *)(param_1 + 0x20),param_3,auStack_50,uVar10);
      fn_82F68CC0(puVar12 + 2,auStack_50,0x10);
      if (*(int *)(param_3 + 0x30) == 0) {
        do {
          uVar5 = (ulonglong)lbl_832978A4;
          lVar6 = uVar5 + 1;
          if (in_RESERVE != '\0') {
            lbl_832978A4 = storeWordConditionalIndexed(lVar6,0,0xffffffff832978a4);
            bVar13 = 2;
          }
        } while ((!(bool)(bVar13 >> 1 & 1)) || ((uVar5 + 2 & 0xffffffff) < 2));
        *(int *)(param_3 + 0x30) = (int)lVar6;
      }
      uVar10 = uVar10 + 1;
      piVar9 = piVar9 + 2;
      *puVar12 = *(undefined4 *)(param_3 + 0x30);
      puVar12 = puVar12 + 0x68;
    } while ((uVar10 & 0xffffffff) < uVar4 + 1);
  }
  *(uint *)(param_1 + 0x368) = *(uint *)(param_1 + 0x368) | 0x40;
  return;
}

