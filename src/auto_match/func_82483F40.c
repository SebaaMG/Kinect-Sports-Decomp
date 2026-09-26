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
extern unsigned int *auStack_80;
extern int fn_8225F160();
extern int fn_82270B70();
extern int fn_822A1CA8();
extern int fn_82484618();
extern int fn_824867B8();
extern int fn_8251CF80();
extern int fn_82536590();
extern int fn_828647D8();
extern int fn_82864898();
extern int fn_82864988();
extern unsigned int iStack_4c;
extern unsigned int lbl_821BC758;
extern unsigned int lbl_821BDAAC;
extern unsigned int lbl_82460270;
extern unsigned int lbl_831D1318;
extern unsigned int lbl_831D131C;
extern unsigned int lbl_831D1324;
extern unsigned int uStack_68;


/* WARNING: Removing unreachable block (ram,0x82483fd4) */

void fn_82483F40(int param_1)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  char cVar6;
  char cVar8;
  undefined4 *puVar7;
  char *pcVar9;
  undefined4 auStack_80 [4];
  undefined **ppuStack_70;
  undefined *puStack_6c;
  undefined4 uStack_68;
  undefined ***pppuStack_60;
  undefined **ppuStack_50;
  int iStack_4c;
  undefined ***pppuStack_40;
  
  uVar2 = fn_82484618(*(undefined4 *)(param_1 + 0x10));
  iVar5 = *(int *)(param_1 + 0x10);
  cVar6 = 'p';
  pcVar9 = (char *)(iVar5 + 0x34);
  cVar8 = *(char *)(iVar5 + 0x34);
  if (cVar8 == 'p') {
    iVar3 = (int)"partymode" - (int)pcVar9;
    cVar8 = 'p';
    do {
      pcVar9 = pcVar9 + 1;
      if (cVar8 == '\0') goto LAB_82483fb0;
      cVar6 = pcVar9[iVar3];
      cVar8 = *pcVar9;
    } while (cVar8 == cVar6);
  }
  if (cVar8 == cVar6) {
LAB_82483fb0:
    iVar5 = *(int *)(iVar5 + 0x18ec);
    lbl_831D1318 = 2;
    puStack_6c = &lbl_82460270;
    pppuStack_60 = &ppuStack_70;
    ppuStack_70 = &lbl_821BC758;
    pppuStack_40 = &ppuStack_50;
    ppuStack_50 = &lbl_821BDAAC;
    iStack_4c = param_1;
    fn_822A1CA8(&ppuStack_50,&ppuStack_70);
    iVar3 = fn_8225F160();
    *(undefined4 *)(iVar3 + 4) = 5;
    if (iVar5 != 0) {
      iVar3 = fn_82270B70();
      puVar7 = *(undefined4 **)(iVar3 + 0xa8);
      for (puVar1 = (undefined4 *)*puVar7; puVar1 != puVar7; puVar1 = (undefined4 *)*puVar1) {
        if ((puVar1[2] == iVar5) && (puVar1[0x42d] == 0)) {
          puVar1[8] = 0;
        }
        puVar7 = *(undefined4 **)(iVar3 + 0xa8);
      }
    }
  }
  else {
    fn_82864988(&ppuStack_50,0xffffffff821bda5c);
    auStack_80[0] = fn_828647D8();
    fn_82864898(&ppuStack_50);
    fn_82536590(auStack_80,0);
    uVar4 = fn_824867B8(*(undefined4 *)(param_1 + 0x10));
    iVar5 = fn_8225F160();
    *(undefined4 *)(iVar5 + 0x34) = uVar4;
    iVar5 = fn_8225F160();
    lbl_831D131C = *(undefined4 *)(iVar5 + 0x34);
    iVar5 = fn_8225F160();
    lbl_831D1324 = *(undefined4 *)(iVar5 + 0xc);
  }
  ppuStack_70 = (undefined **)0x0;
  puStack_6c = (undefined *)0x0;
  uStack_68 = 0;
  fn_8251CF80(uVar2,0,&ppuStack_70);
  return;
}

