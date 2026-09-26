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


void fn_82D9AB30(ushort *param_1,int param_2,int *param_3)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  ushort *puVar4;
  int iVar5;
  
  param_3[4] = (int)param_1;
  param_3[5] = param_2;
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  if (*param_1 == 0x16) {
    uVar2 = param_1[2];
    iVar3 = ((int)(uint)uVar2 >> 1) * 0x70 + ((uVar2 & 1) + (uVar2 & 1) * 2) * 0x10;
    param_3[2] = uVar2 + 2;
    param_3[3] = uVar2 + 3;
    iVar5 = iVar3 + 0xa0;
    param_3[1] = iVar3 + 0x80;
    *param_3 = iVar5;
    if (uVar2 < 2) {
      return;
    }
    param_3[1] = iVar5;
    param_3[2] = uVar2 + 3;
    param_3[3] = uVar2 + 4;
    return;
  }
  puVar4 = (ushort *)((int)param_1 + param_2);
  param_3[1] = 0x10;
  if (puVar4 <= param_1) {
    return;
  }
  do {
    uVar2 = *param_1;
    while (uVar2 < 0x1c) {
      switch(*(undefined4 *)((uint)uVar2 * 4 + -0x7d26540c)) {
      case 0x82d9ac64:
        param_1 = (ushort *)((int)param_1 + 0xfU & 0xfffffff0);
        uVar2 = *param_1;
        break;
      case 0x82d9ac7c:
        param_1 = param_1 + 4;
        param_3[1] = param_3[1] + 0x90;
        param_3[2] = param_3[2] + 3;
        param_3[3] = param_3[3] + 3;
        goto switchD_82d9abf0_caseD_82d9af1c;
      case 0x82d9aca8:
        param_1 = param_1 + 4;
        param_3[1] = param_3[1] + 0x30;
        param_3[2] = param_3[2] + 1;
        param_3[3] = param_3[3] + 1;
        goto switchD_82d9abf0_caseD_82d9af1c;
      case 0x82d9acd4:
        param_1 = param_1 + 2;
        param_3[1] = param_3[1] + 0x30;
        param_3[2] = param_3[2] + 1;
        param_3[3] = param_3[3] + 1;
        goto switchD_82d9abf0_caseD_82d9af1c;
      case 0x82d9ad00:
        param_1 = param_1 + 6;
        param_3[1] = param_3[1] + 0x40;
        param_3[2] = param_3[2] + 1;
        param_3[3] = param_3[3] + 1;
        goto switchD_82d9abf0_caseD_82d9af1c;
      case 0x82d9ad2c:
        param_1 = param_1 + 4;
        param_3[1] = param_3[1] + 0x40;
        param_3[2] = param_3[2] + 1;
        param_3[3] = param_3[3] + 2;
        goto switchD_82d9abf0_caseD_82d9af1c;
      case 0x82d9ad58:
        param_1 = param_1 + 8;
        param_3[1] = param_3[1] + 0x50;
        param_3[2] = param_3[2] + 1;
        param_3[3] = param_3[3] + 3;
        goto switchD_82d9abf0_caseD_82d9af1c;
      case 0x82d9ad84:
        param_1 = param_1 + 2;
        param_3[1] = param_3[1] + 0x60;
        param_3[2] = param_3[2] + 2;
        param_3[3] = param_3[3] + 2;
        goto switchD_82d9abf0_caseD_82d9af1c;
      case 0x82d9adb0:
        bVar1 = *(byte *)((int)param_1 + 3);
        param_1 = param_1 + 2;
        param_3[2] = param_3[2] + (uint)bVar1;
        param_3[3] = param_3[3] + (uint)bVar1;
        param_3[1] = (uint)bVar1 * 0x30 + param_3[1];
        goto switchD_82d9abf0_caseD_82d9af1c;
      case 0x82d9adec:
        param_1 = param_1 + 8;
        param_3[1] = param_3[1] + 0x30;
        param_3[2] = param_3[2] + 1;
        param_3[3] = param_3[3] + 1;
        goto switchD_82d9abf0_caseD_82d9af1c;
      case 0x82d9ae18:
        param_1 = param_1 + 10;
        param_3[1] = param_3[1] + 0x30;
        param_3[2] = param_3[2] + 1;
        param_3[3] = param_3[3] + 1;
        goto switchD_82d9abf0_caseD_82d9af1c;
      case 0x82d9ae44:
        bVar1 = *(byte *)(param_1 + 2);
        param_1 = param_1 + 6;
        param_3[2] = param_3[2] + (uint)bVar1;
        param_3[3] = param_3[3] + (uint)bVar1 * 2;
        param_3[1] = (uint)bVar1 * 0x30 + param_3[1];
        goto switchD_82d9abf0_caseD_82d9af1c;
      case 0x82d9ae84:
        param_1 = param_1 + 10;
        param_3[1] = param_3[1] + 0x40;
        param_3[2] = param_3[2] + 1;
        param_3[3] = param_3[3] + 3;
        goto switchD_82d9abf0_caseD_82d9af1c;
      case 0x82d9aeb0:
        param_1 = param_1 + 0x28;
        param_3[1] = param_3[1] + 0xc0;
        param_3[2] = param_3[2] + 3;
        param_3[3] = param_3[3] + 9;
        goto switchD_82d9abf0_caseD_82d9af1c;
      case 0x82d9aedc:
        param_1 = param_1 + 0x20;
        param_3[1] = param_3[1] + 0x40;
        param_3[2] = param_3[2] + 1;
        param_3[3] = param_3[3] + 1;
        goto switchD_82d9abf0_caseD_82d9af1c;
      case 0x82d9af08:
        param_1 = param_1 + 0x48;
        goto switchD_82d9abf0_caseD_82d9af1c;
      case 0x82d9af10:
        param_1 = param_1 + 0x38;
        goto switchD_82d9abf0_caseD_82d9af1c;
      case 0x82d9af18:
        param_1 = param_1 + 0x18;
      case 0x82d9af1c:
        goto switchD_82d9abf0_caseD_82d9af1c;
      case 0x82d9af24:
        goto switchD_82d9abf0_caseD_82d9af24;
      }
    }
switchD_82d9abf0_caseD_82d9af1c:
    if (puVar4 <= param_1) {
switchD_82d9abf0_caseD_82d9af24:
      return;
    }
  } while( true );
}

