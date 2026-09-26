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
extern unsigned int *auStack_30;
extern unsigned int *auStack_40;
extern int fn_82F64538();
extern unsigned int lbl_821B5EBC;
extern unsigned int uStack_4c;


void fn_823BCFC0(int *param_1,undefined8 param_2,int *param_3)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int in_r0;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined **ppuStack_50;
  undefined4 uStack_4c;
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [48];
  
  if (param_3 != (int *)0x0) {
    if ((int *)*param_3 == (int *)0x0) {
      uVar4 = 0xffffffff831d7088;
    }
    else {
      uVar4 = (**(code **)(*(int *)*param_3 + 4))();
    }
    cVar5 = fn_82F64538(uVar4,0xffffffff831dea2c);
    if (cVar5 != '\0') {
      iVar6 = *param_3 + 0x10;
      goto LAB_823bd02c;
    }
  }
  iVar6 = 0;
LAB_823bd02c:
  uStack_4c = *(undefined4 *)(iVar6 + 4);
  ppuStack_50 = &lbl_821B5EBC;
  puVar2 = (undefined4 *)(iVar6 + 0x10U & 0xfffffff0);
  uVar7 = puVar2[1];
  uVar8 = puVar2[2];
  uVar9 = puVar2[3];
  pcVar1 = *(code **)(*param_1 + 0x10);
  puVar3 = (undefined4 *)((uint)(auStack_40 + in_r0) & 0xfffffff0);
  *puVar3 = *puVar2;
  puVar3[1] = uVar7;
  puVar3[2] = uVar8;
  puVar3[3] = uVar9;
  puVar2 = (undefined4 *)(iVar6 + 0x20U & 0xfffffff0);
  uVar7 = puVar2[1];
  uVar8 = puVar2[2];
  uVar9 = puVar2[3];
  puVar3 = (undefined4 *)((uint)(auStack_30 + in_r0) & 0xfffffff0);
  *puVar3 = *puVar2;
  puVar3[1] = uVar7;
  puVar3[2] = uVar8;
  puVar3[3] = uVar9;
  (*pcVar1)(param_1,param_2,&ppuStack_50);
  return;
}

