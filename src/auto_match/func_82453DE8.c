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
extern int fn_822315A0();
extern int fn_8223AAC0();
extern int fn_82250A18();
extern int fn_82365BD8();
extern int fn_823B7660();
extern int fn_823B77E8();
extern int fn_824543B0();
extern int fn_82454BE0();
extern int fn_8265C9E0();
extern unsigned int iStack_54;
extern unsigned int iStack_58;
extern unsigned int lbl_821A8D8C;
extern unsigned int lbl_821BA394;
extern unsigned int lbl_821BA420;
extern unsigned int lbl_821BA458;
extern unsigned int lbl_821BA470;
extern unsigned int lbl_824543A0;
extern unsigned int lbl_832975B0;


void fn_82453DE8(int param_1)

{
  undefined4 uVar1;
  int iVar3;
  undefined8 uVar2;
  undefined4 *puVar4;
  undefined4 *puVar5;
  char cVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined **ppuStack_60;
  code *pcStack_5c;
  int iStack_58;
  int iStack_54;
  undefined ***pppuStack_50;
  
  iVar3 = lbl_832975B0;
  if (lbl_832975B0 == 0) {
    iVar3 = fn_82250A18();
  }
  if (*(char *)(iVar3 + 4) != '\0') {
    uVar8 = 4;
    if (*(int *)(*(int *)(param_1 + 0x40) + 0x114) != 4) {
      uVar8 = 2;
    }
    uVar7 = 6;
    if (*(int *)(*(int *)(param_1 + 0x40) + 0x114) != 4) {
      uVar7 = 4;
    }
    if (uVar8 < uVar7) {
      lVar9 = (ulonglong)*(uint *)(param_1 + 0x44) + 8;
      if ((ulonglong)*(uint *)(param_1 + 0x44) == 0) {
        lVar9 = 0;
      }
      uVar1 = *(undefined4 *)(**(int **)(param_1 + 0x40) + 0x8c);
      uVar2 = fn_82365BD8(&ppuStack_60,
                                (ulonglong)
                                *(uint *)(*(int *)(**(int **)(param_1 + 0x40) + 4) + 0x308) + 0x30);
      fn_823B7660(uVar1,lVar9,uVar8,uVar2);
    }
    puVar4 = (undefined4 *)fn_8265C9E0(0x30);
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      puVar4[1] = 1;
      puVar4[2] = 1;
      *puVar4 = &lbl_821A8D8C;
      if (puVar4 + 4 != (undefined4 *)0x0) {
        puVar4[10] = 0;
        puVar4[4] = &lbl_821BA394;
      }
    }
    puVar5 = (undefined4 *)fn_8265C9E0(0x30);
    if (puVar5 == (undefined4 *)0x0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      puVar5[1] = 1;
      puVar5[2] = 1;
      *puVar5 = &lbl_821A8D8C;
      if (puVar5 + 4 != (undefined4 *)0x0) {
        puVar5[10] = 0;
        puVar5[4] = &lbl_821BA420;
      }
    }
    pppuStack_50 = &ppuStack_60;
    pcStack_5c = (code *)&lbl_824543A0;
    iStack_54 = iStack_58;
    ppuStack_60 = &lbl_821BA458;
    iStack_58 = param_1;
    fn_82454BE0(puVar4 + 4,&ppuStack_60);
    pppuStack_50 = &ppuStack_60;
    iStack_54 = iStack_58;
    ppuStack_60 = &lbl_821BA470;
    pcStack_5c = fn_824543B0;
    iStack_58 = param_1;
    fn_82454BE0(puVar5 + 4,&ppuStack_60);
    ppuStack_60 = (undefined **)0x0;
    pcStack_5c = (code *)0x0;
    uVar8 = (ulonglong)*(uint *)(*(int *)(param_1 + 0x40) + 0x114);
    if ((puVar4 != (undefined4 *)0x0) && (cVar6 = fn_8223AAC0(puVar4), cVar6 != '\0')) {
      ppuStack_60 = (undefined **)(puVar4 + 4);
      pcStack_5c = (code *)puVar4;
    }
    lVar9 = uVar8 - 4;
    fn_823B77E8(*(undefined4 *)(**(int **)(param_1 + 0x40) + 0x8c),&ppuStack_60,
                    lVar9 - ((uVar8 - 5) + (ulonglong)(lVar9 == 0)));
    ppuStack_60 = (undefined **)0x0;
    pcStack_5c = (code *)0x0;
    iVar3 = *(int *)(*(int *)(param_1 + 0x40) + 0x114);
    if ((puVar5 != (undefined4 *)0x0) && (cVar6 = fn_8223AAC0(puVar5), cVar6 != '\0')) {
      ppuStack_60 = (undefined **)(puVar5 + 4);
      pcStack_5c = (code *)puVar5;
    }
    fn_823B77E8(*(undefined4 *)(**(int **)(param_1 + 0x40) + 0x8c),&ppuStack_60,
                    (iVar3 != 4) + '\x02');
    if (puVar5 != (undefined4 *)0x0) {
      fn_822315A0(puVar5);
    }
    if (puVar4 != (undefined4 *)0x0) {
      fn_822315A0(puVar4);
    }
  }
  return;
}

