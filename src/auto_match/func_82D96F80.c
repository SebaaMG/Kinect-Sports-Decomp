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
extern unsigned char switchdataD_82d9abf4[];


void fn_82D96F80(int param_1,int *param_2)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  ushort *puVar5;
  
  puVar5 = (ushort *)(param_1 + 0x10);
  param_2[4] = (int)puVar5;
  param_2[5] = 0xc0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  if (*puVar5 == 0x16) {
    uVar2 = *(ushort *)(param_1 + 0x14);
    iVar3 = ((int)(uint)uVar2 >> 1) * 0x70 + ((uVar2 & 1) + (uVar2 & 1) * 2) * 0x10;
    param_2[2] = uVar2 + 2;
    param_2[3] = uVar2 + 3;
    iVar4 = iVar3 + 0xa0;
    param_2[1] = iVar3 + 0x80;
    *param_2 = iVar4;
    if (uVar2 < 2) {
      return;
    }
    param_2[1] = iVar4;
    param_2[2] = uVar2 + 3;
    param_2[3] = uVar2 + 4;
    return;
  }
  param_2[1] = 0x10;
  if ((ushort *)(param_1 + 0xd0) <= puVar5) {
    return;
  }
  do {
    uVar2 = *puVar5;
    while (uVar2 < 0x1c) {
      switch((switchdataD_82d9abf4)[uVar2]) {
      case (undefined *)0x82d9ac64:
        puVar5 = (ushort *)((int)puVar5 + 0xfU & 0xfffffff0);
        uVar2 = *puVar5;
        break;
      case (undefined *)0x82d9ac7c:
        puVar5 = puVar5 + 4;
        param_2[1] = param_2[1] + 0x90;
        param_2[2] = param_2[2] + 3;
        param_2[3] = param_2[3] + 3;
        goto switchD_82d9abf0_caseD_82d9af1c;
      case (undefined *)0x82d9aca8:
        puVar5 = puVar5 + 4;
        param_2[1] = param_2[1] + 0x30;
        param_2[2] = param_2[2] + 1;
        param_2[3] = param_2[3] + 1;
        goto switchD_82d9abf0_caseD_82d9af1c;
      case (undefined *)0x82d9acd4:
        puVar5 = puVar5 + 2;
        param_2[1] = param_2[1] + 0x30;
        param_2[2] = param_2[2] + 1;
        param_2[3] = param_2[3] + 1;
        goto switchD_82d9abf0_caseD_82d9af1c;
      case (undefined *)0x82d9ad00:
        puVar5 = puVar5 + 6;
        param_2[1] = param_2[1] + 0x40;
        param_2[2] = param_2[2] + 1;
        param_2[3] = param_2[3] + 1;
        goto switchD_82d9abf0_caseD_82d9af1c;
      case (undefined *)0x82d9ad2c:
        puVar5 = puVar5 + 4;
        param_2[1] = param_2[1] + 0x40;
        param_2[2] = param_2[2] + 1;
        param_2[3] = param_2[3] + 2;
        goto switchD_82d9abf0_caseD_82d9af1c;
      case (undefined *)0x82d9ad58:
        puVar5 = puVar5 + 8;
        param_2[1] = param_2[1] + 0x50;
        param_2[2] = param_2[2] + 1;
        param_2[3] = param_2[3] + 3;
        goto switchD_82d9abf0_caseD_82d9af1c;
      case (undefined *)0x82d9ad84:
        puVar5 = puVar5 + 2;
        param_2[1] = param_2[1] + 0x60;
        param_2[2] = param_2[2] + 2;
        param_2[3] = param_2[3] + 2;
        goto switchD_82d9abf0_caseD_82d9af1c;
      case (undefined *)0x82d9adb0:
        bVar1 = *(byte *)((int)puVar5 + 3);
        puVar5 = puVar5 + 2;
        param_2[2] = param_2[2] + (uint)bVar1;
        param_2[3] = param_2[3] + (uint)bVar1;
        param_2[1] = (uint)bVar1 * 0x30 + param_2[1];
        goto switchD_82d9abf0_caseD_82d9af1c;
      case (undefined *)0x82d9adec:
        puVar5 = puVar5 + 8;
        param_2[1] = param_2[1] + 0x30;
        param_2[2] = param_2[2] + 1;
        param_2[3] = param_2[3] + 1;
        goto switchD_82d9abf0_caseD_82d9af1c;
      case (undefined *)0x82d9ae18:
        puVar5 = puVar5 + 10;
        param_2[1] = param_2[1] + 0x30;
        param_2[2] = param_2[2] + 1;
        param_2[3] = param_2[3] + 1;
        goto switchD_82d9abf0_caseD_82d9af1c;
      case (undefined *)0x82d9ae44:
        bVar1 = *(byte *)(puVar5 + 2);
        puVar5 = puVar5 + 6;
        param_2[2] = param_2[2] + (uint)bVar1;
        param_2[3] = param_2[3] + (uint)bVar1 * 2;
        param_2[1] = (uint)bVar1 * 0x30 + param_2[1];
        goto switchD_82d9abf0_caseD_82d9af1c;
      case (undefined *)0x82d9ae84:
        puVar5 = puVar5 + 10;
        param_2[1] = param_2[1] + 0x40;
        param_2[2] = param_2[2] + 1;
        param_2[3] = param_2[3] + 3;
        goto switchD_82d9abf0_caseD_82d9af1c;
      case (undefined *)0x82d9aeb0:
        puVar5 = puVar5 + 0x28;
        param_2[1] = param_2[1] + 0xc0;
        param_2[2] = param_2[2] + 3;
        param_2[3] = param_2[3] + 9;
        goto switchD_82d9abf0_caseD_82d9af1c;
      case (undefined *)0x82d9aedc:
        puVar5 = puVar5 + 0x20;
        param_2[1] = param_2[1] + 0x40;
        param_2[2] = param_2[2] + 1;
        param_2[3] = param_2[3] + 1;
        goto switchD_82d9abf0_caseD_82d9af1c;
      case (undefined *)0x82d9af08:
        puVar5 = puVar5 + 0x48;
        goto switchD_82d9abf0_caseD_82d9af1c;
      case (undefined *)0x82d9af10:
        puVar5 = puVar5 + 0x38;
        goto switchD_82d9abf0_caseD_82d9af1c;
      case (undefined *)0x82d9af18:
        puVar5 = puVar5 + 0x18;
      case (undefined *)0x82d9af1c:
        goto switchD_82d9abf0_caseD_82d9af1c;
      case (undefined *)0x82d9af24:
        goto switchD_82d9abf0_caseD_82d9af24;
      }
    }
switchD_82d9abf0_caseD_82d9af1c:
    if ((ushort *)(param_1 + 0xd0) <= puVar5) {
switchD_82d9abf0_caseD_82d9af24:
      return;
    }
  } while( true );
}

