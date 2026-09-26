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
extern unsigned int *auStack_64;
extern unsigned int *auStack_80;
extern unsigned int *auStack_8f;
extern unsigned int uStack_84;
extern unsigned int uStack_90;


void fn_82DA7740(int param_1,int param_2,int param_3,code *param_4)

{
  char cVar1;
  char *pcVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  undefined1 uStack_90;
  undefined1 auStack_8f [11];
  undefined4 uStack_84;
  undefined1 auStack_80 [28];
  undefined4 auStack_64 [25];
  
  do {
    lVar9 = 5;
    puVar3 = &uStack_84;
    puVar5 = (undefined4 *)((param_2 + param_3 >> 1) * 0x14 + param_1 + -4);
    do {
      puVar5 = puVar5 + 1;
      puVar3 = puVar3 + 1;
      *puVar3 = *puVar5;
      lVar9 = lVar9 + -1;
      iVar7 = param_2;
      iVar8 = param_3;
    } while (lVar9 != 0);
    do {
      iVar6 = iVar7 * 0x14 + param_1;
      pcVar2 = (char *)(*param_4)(&uStack_90,iVar6,auStack_80);
      cVar1 = *pcVar2;
      while (cVar1 != '\0') {
        iVar6 = iVar6 + 0x14;
        iVar7 = iVar7 + 1;
        pcVar2 = (char *)(*param_4)(&uStack_90,iVar6,auStack_80);
        cVar1 = *pcVar2;
      }
      iVar6 = iVar8 * 0x14 + param_1;
      pcVar2 = (char *)(*param_4)(auStack_8f,auStack_80,iVar6);
      cVar1 = *pcVar2;
      while (cVar1 != '\0') {
        iVar6 = iVar6 + -0x14;
        iVar8 = iVar8 + -1;
        pcVar2 = (char *)(*param_4)(auStack_8f,auStack_80,iVar6);
        cVar1 = *pcVar2;
      }
      if (iVar8 < iVar7) break;
      if (iVar8 != iVar7) {
        iVar4 = iVar8 * 0x14 + param_1;
        puVar3 = auStack_64;
        lVar9 = 5;
        iVar6 = iVar7 * 0x14 + param_1;
        puVar5 = (undefined4 *)(iVar4 + -4);
        do {
          puVar5 = puVar5 + 1;
          puVar3 = puVar3 + 1;
          *puVar3 = *puVar5;
          lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
        puVar5 = (undefined4 *)(iVar6 + -4);
        puVar3 = (undefined4 *)(iVar4 + -4);
        lVar9 = 5;
        do {
          puVar5 = puVar5 + 1;
          puVar3 = puVar3 + 1;
          *puVar3 = *puVar5;
          lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
        puVar5 = auStack_64;
        puVar3 = (undefined4 *)(iVar6 + -4);
        lVar9 = 5;
        do {
          puVar5 = puVar5 + 1;
          puVar3 = puVar3 + 1;
          *puVar3 = *puVar5;
          lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
      }
      iVar8 = iVar8 + -1;
      iVar7 = iVar7 + 1;
    } while (iVar7 <= iVar8);
    if (param_2 < iVar8) {
      fn_82DA7740(param_1,param_2,iVar8,param_4);
    }
    param_2 = iVar7;
    if (param_3 <= iVar7) {
      return;
    }
  } while( true );
}

