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
extern unsigned int *auStack_40;
extern unsigned int *auStack_5d;
extern int fn_826BC900();
extern unsigned int uStack_5e;
extern unsigned int uStack_5f;
extern unsigned int uStack_60;


void fn_826EF5E8(int param_1)

{
  byte bVar1;
  uint uVar2;
  char *pcVar3;
  uint uVar4;
  undefined4 uVar5;
  char cVar6;
  undefined1 *puVar7;
  int iVar8;
  undefined1 uStack_60;
  undefined1 uStack_5f;
  undefined1 uStack_5e;
  undefined1 auStack_5d [29];
  undefined1 auStack_40 [64];
  
  if (*(char *)(param_1 + 8) == '\0') {
    uVar2 = *(uint *)(param_1 + 0x1c);
    cVar6 = ' ';
    if (uVar2 == 0) {
      cVar6 = 'f';
    }
    else if (uVar2 == 1) {
      cVar6 = (-((*(byte *)(param_1 + 0x16) & 0x80) != 0) & 0xe0U) + 0x65;
    }
    else if (uVar2 < 3) {
      cVar6 = (-((*(byte *)(param_1 + 0x16) & 0x80) != 0) & 0xe0U) + 0x67;
    }
    puVar7 = &uStack_5e;
    uStack_60 = 0x25;
    uStack_5f = 0x25;
    if ((*(byte *)(param_1 + 0x15) & 1) != 0) {
      puVar7 = auStack_5d;
      uStack_5e = 0x2b;
    }
    bVar1 = *(byte *)(param_1 + 0x16);
    if ((bVar1 & 0x10) != 0) {
      *puVar7 = 0x23;
      puVar7 = puVar7 + 1;
    }
    if ((bVar1 & 0x40) != 0) {
      *puVar7 = 0x20;
      puVar7 = puVar7 + 1;
    }
    if ((bVar1 & 0x20) != 0) {
      *puVar7 = 0x2d;
      puVar7 = puVar7 + 1;
    }
    if ((*(byte *)(param_1 + 0x14) & 0xfe) == 0x60) {
      *puVar7 = 0x30;
      puVar7 = puVar7 + 1;
    }
    uVar2 = *(uint *)(param_1 + 0x10);
    uVar4 = uVar2 >> 0x16 & 0x1f;
    if (uVar4 == 1) {
      *puVar7 = 0x2e;
      puVar7[1] = 0x25;
      puVar7[2] = 100;
      puVar7[3] = cVar6;
      puVar7[4] = 0;
      fn_826BC900(auStack_40,0x20,&uStack_60,uVar2 >> 0x1b);
    }
    else {
      *puVar7 = 0x25;
      puVar7[1] = 100;
      puVar7[2] = 0x2e;
      puVar7[3] = 0x25;
      puVar7[4] = 100;
      puVar7[5] = cVar6;
      puVar7[6] = 0;
      fn_826BC900(auStack_40,0x20,&uStack_60,uVar4,uVar2 >> 0x1b);
    }
    iVar8 = param_1 + 0x2c;
    uVar5 = fn_826BC900(iVar8,0x15c,auStack_40,*(undefined8 *)(param_1 + 0x20));
    *(undefined4 *)(param_1 + 0x28) = uVar5;
    *(int *)(param_1 + 0x18) = iVar8;
    cVar6 = *(char *)(param_1 + 0x2c);
    while (cVar6 != '\0') {
      pcVar3 = *(char **)(param_1 + 0x18);
      if (*pcVar3 == ',') {
        *pcVar3 = '.';
        break;
      }
      *(char **)(param_1 + 0x18) = pcVar3 + 1;
      cVar6 = pcVar3[1];
    }
    *(int *)(param_1 + 0x18) = iVar8;
    *(undefined1 *)(param_1 + 8) = 1;
  }
  return;
}

