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
extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern int fn_828F0170();
extern int fn_82981598();
extern int fn_82984260();
extern int fn_829846B0();
extern unsigned int uStack_5c;
extern unsigned int uStack_6c;


longlong fn_82986948(undefined8 param_1,int param_2,int param_3,int param_4,ulonglong param_5)

{
  char cVar1;
  char cVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar6;
  int iVar7;
  longlong lVar5;
  int iVar8;
  char *pcVar9;
  bool bVar10;
  char *pcVar11;
  longlong lVar12;
  undefined4 uVar13;
  undefined1 auStack_70 [4];
  uint uStack_6c;
  undefined1 auStack_60 [4];
  uint uStack_5c;
  
  lVar12 = 0;
  if ((param_3 == 0) || (*(int *)(param_2 + 0x24) == 0)) {
    if ((uint)LZCOUNT(param_3) >> 5 != (uint)LZCOUNT(*(undefined4 *)(param_2 + 0x24)) >> 5) {
      lVar12 = 2;
    }
  }
  else {
    iVar6 = fn_828F0170(*(undefined4 *)(*(int *)(param_2 + 0x24) + 0x18),0,auStack_70);
    if ((iVar6 < 0) ||
       (iVar6 = fn_828F0170(*(undefined4 *)(param_3 + 0x18),0,auStack_60), iVar6 < 0)) {
      pcVar11 = *(char **)(param_3 + 0x18);
      pcVar9 = *(char **)(*(int *)(param_2 + 0x24) + 0x18);
      do {
        cVar1 = *pcVar11;
        cVar2 = *pcVar9;
        if (cVar1 == '\0') break;
        pcVar11 = pcVar11 + 1;
        pcVar9 = pcVar9 + 1;
      } while (cVar1 == cVar2);
      if (cVar1 != cVar2) {
        return -1;
      }
    }
    else if (uStack_6c != uStack_5c) {
      if (((uStack_5c ^ uStack_6c) & 0xffff0000) != 0) {
        return -1;
      }
      if (((uStack_6c & 0xffff) != 0) && ((uStack_5c & 0xffff) != 0)) {
        return -1;
      }
      lVar12 = (ulonglong)((uStack_5c & 0xffff) == 0) + 1;
    }
  }
  iVar6 = *(int *)(param_2 + 0x2c);
  if (iVar6 != 0) {
    do {
      piVar4 = (int *)(iVar6 + 8);
      bVar10 = false;
      iVar6 = *(int *)(iVar6 + 0xc);
      if ((iVar6 != 0) && (*(int *)(*(int *)(iVar6 + 8) + 4) == 0xc)) {
        iVar6 = *(int *)(iVar6 + 0xc);
        bVar10 = true;
      }
      if (((param_5 & 0x10) == 0) || ((*(uint *)(*(int *)(*piVar4 + 0x18) + 0x2c) & 0x40) != 0)) {
        if (param_4 == 0) {
          if (!bVar10) {
            return -1;
          }
        }
        else {
          iVar8 = *(int *)(*piVar4 + 0x18);
          uVar3 = *(undefined4 *)(iVar8 + 0x30);
          if (*(int *)(param_4 + 8) == 0) {
            uVar13 = 0;
          }
          else {
            uVar13 = *(undefined4 *)(*(int *)(param_4 + 8) + 0x10);
          }
          if ((*(uint *)(iVar8 + 0x2c) & 0x10) != 0) {
            iVar7 = fn_829846B0(param_1,uVar3,uVar13,0);
            if (iVar7 == 0) {
              return -1;
            }
            lVar5 = fn_82984260(param_1,uVar3,uVar13);
            lVar12 = lVar5 + lVar12;
          }
          if ((*(uint *)(iVar8 + 0x2c) & 0x20) != 0) {
            iVar8 = fn_82981598(param_1,uVar13);
            if (iVar8 != 0) {
              return -1;
            }
            iVar8 = fn_829846B0(param_1,uVar13,uVar3,0);
            if (iVar8 == 0) {
              return -1;
            }
            lVar5 = fn_82984260(param_1,uVar13,uVar3);
            lVar12 = lVar5 + lVar12;
          }
          param_4 = *(int *)(param_4 + 0xc);
        }
      }
    } while (iVar6 != 0);
  }
  if (param_4 == 0) {
    return lVar12;
  }
  return -1;
}

