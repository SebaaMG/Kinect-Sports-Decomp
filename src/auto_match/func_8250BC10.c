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
extern int fn_8250A688();
extern unsigned int uStack_54;


void fn_8250BC10(int param_1,int param_2)

{
  int iVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  undefined4 uStack_54;
  undefined1 auStack_50 [80];
  
  iVar5 = param_1;
  iVar7 = param_1;
  while (iVar1 = iVar7 + 0x14, iVar1 != param_2) {
    puVar4 = &uStack_54;
    puVar3 = (undefined4 *)(iVar7 + 0x10);
    lVar8 = 5;
    do {
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
      *puVar4 = *puVar3;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
    cVar2 = fn_8250A688(auStack_50,param_1);
    iVar7 = iVar1;
    iVar6 = iVar5;
    if (cVar2 == '\0') {
      while( true ) {
        cVar2 = fn_8250A688(auStack_50,iVar6);
        lVar8 = 5;
        puVar3 = (undefined4 *)(iVar7 + -4);
        lVar9 = 5;
        if (cVar2 == '\0') break;
        puVar4 = (undefined4 *)(iVar6 + -4);
        do {
          puVar4 = puVar4 + 1;
          puVar3 = puVar3 + 1;
          *puVar3 = *puVar4;
          lVar8 = lVar8 + -1;
        } while (lVar8 != 0);
        iVar7 = iVar6;
        iVar6 = iVar6 + -0x14;
      }
      puVar4 = &uStack_54;
      do {
        puVar4 = puVar4 + 1;
        puVar3 = puVar3 + 1;
        *puVar3 = *puVar4;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
    }
    else {
      while (param_1 != iVar7) {
        iVar6 = iVar7 + -0x14;
        puVar4 = (undefined4 *)(iVar7 + -4);
        puVar3 = (undefined4 *)(iVar7 + -0x18);
        lVar8 = 5;
        do {
          puVar3 = puVar3 + 1;
          puVar4 = puVar4 + 1;
          *puVar4 = *puVar3;
          lVar8 = lVar8 + -1;
          iVar7 = iVar6;
        } while (lVar8 != 0);
      }
      puVar3 = &uStack_54;
      puVar4 = (undefined4 *)(param_1 + -4);
      lVar8 = 5;
      do {
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
        *puVar4 = *puVar3;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
    iVar5 = iVar5 + 0x14;
    iVar7 = iVar1;
  }
  return;
}

