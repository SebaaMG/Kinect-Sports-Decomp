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
extern int fn_82CE5410();
extern int fn_82CE6310();
extern int fn_82CE7E68();
extern int fn_82CFBE40();
extern int fn_82D04B20();
extern int fn_82D04F70();
extern int fn_82D05388();
extern unsigned int uStack_8c;
extern unsigned int uStack_90;


undefined8 fn_82D054C0(uint *param_1,undefined8 param_2,int param_3,int param_4)

{
  undefined1 *puVar1;
  longlong lVar2;
  longlong lVar3;
  char *pcVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  undefined8 uVar9;
  longlong lVar10;
  uint uVar11;
  longlong lVar12;
  int iVar13;
  uint uStack_90;
  uint uStack_8c;
  
  lVar2 = fn_82CFBE40(param_2);
  lVar3 = fn_82CFBE40(param_3);
  uVar9 = 0;
  if ((int)lVar2 < (int)lVar3) {
    fn_82D05388(&uStack_90,param_1);
    fn_82D04B20(param_1);
    lVar12 = 0;
    do {
      pcVar4 = strstr((char *)(uStack_90 + (int)lVar12),(char *)param_2);
      if (pcVar4 == (char *)0x0) break;
      uVar6 = (ulonglong)uStack_90;
      lVar10 = (longlong)(int)pcVar4 - uVar6;
      if (lVar10 < 0) goto LAB_82d05570;
      uVar9 = 1;
      fn_82D04F70(param_1,uVar6 + lVar12,lVar10 - lVar12);
      fn_82D04F70(param_1,param_3,lVar3);
      lVar12 = lVar10 + lVar2;
    } while (param_4 != 0);
    uVar6 = (ulonglong)uStack_90;
LAB_82d05570:
    fn_82D04F70(param_1,uVar6 + lVar12,((ulonglong)uStack_8c - lVar12) + -1);
    fn_82CE7E68(&uStack_90);
  }
  else {
    uVar11 = *param_1;
    lVar10 = 0;
    lVar12 = 0;
    iVar13 = 0;
    do {
      pcVar4 = strstr((char *)(*param_1 + (int)lVar12),(char *)param_2);
      if (pcVar4 == (char *)0x0) break;
      lVar12 = (longlong)(int)pcVar4 - (ulonglong)*param_1;
      if ((int)lVar12 == -1) break;
      if ((int)lVar10 < (int)lVar12) {
        lVar7 = lVar12 - lVar10;
        do {
          iVar5 = (int)lVar10;
          lVar10 = lVar10 + 1;
          *(undefined1 *)(iVar13 + uVar11) = *(undefined1 *)(iVar5 + uVar11);
          iVar13 = iVar13 + 1;
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
      }
      iVar5 = 0;
      lVar7 = lVar3;
      if (0 < (int)lVar3) {
        do {
          puVar1 = (undefined1 *)(iVar5 + param_3);
          iVar5 = iVar5 + 1;
          *(undefined1 *)(iVar13 + uVar11) = *puVar1;
          iVar13 = iVar13 + 1;
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
      }
      lVar10 = lVar10 + lVar2;
      lVar12 = lVar12 + lVar2;
    } while (param_4 != 0);
    if ((int)lVar10 < (int)(param_1[1] - 1)) {
      do {
        iVar5 = (int)lVar10;
        lVar10 = lVar10 + 1;
        *(undefined1 *)(iVar13 + uVar11) = *(undefined1 *)(iVar5 + uVar11);
        iVar13 = iVar13 + 1;
      } while ((int)lVar10 < (int)(param_1[1] - 1));
    }
    *(undefined1 *)(iVar13 + uVar11) = 0;
    uVar11 = iVar13 + 1;
    iVar5 = fn_82CE5410();
    if ((int)(param_1[2] & 0x3fffffff) < (int)uVar11) {
      uVar8 = (param_1[2] & 0x3fffffff) << 1;
      if ((int)uVar8 <= (int)uVar11) {
        uVar8 = uVar11;
      }
      fn_82CE6310(*(undefined4 *)(iVar5 + 0xc),param_1,uVar8,1);
    }
    uVar9 = 0;
    param_1[1] = uVar11;
    *(undefined1 *)(*param_1 + iVar13) = 0;
  }
  return uVar9;
}

