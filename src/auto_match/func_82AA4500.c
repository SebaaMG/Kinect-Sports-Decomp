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
extern int fn_82AA1C90();
extern int fn_82AA2720();
extern int fn_82AA4498();
extern unsigned int iStack0000001c;
extern unsigned int iStack00000024;
extern unsigned int iStack0000002c;
extern unsigned int lbl_8315FE48;
extern unsigned int lbl_8315FE68;
extern unsigned int lbl_8315FF88;
extern unsigned int uStack0000003c;
extern unsigned int uStack_ac;
extern unsigned int uStack_b0;


void fn_82AA4500(undefined8 param_1,int param_2,int param_3,int param_4,ulonglong param_5,
                  uint param_6,undefined1 *param_7)

{
  bool bVar1;
  int iVar2;
  undefined *puVar3;
  bool bVar4;
  bool bVar5;
  undefined8 uVar6;
  char *pcVar7;
  ulonglong uVar8;
  int iStack0000001c;
  int iStack00000024;
  int iStack0000002c;
  uint uStack0000003c;
  undefined1 *puStack00000044;
  undefined1 uStack_b0;
  uint uStack_ac;
  
  uStack_b0 = *param_7;
  uStack_ac = 0x12;
  puVar3 = (&lbl_8315FF88)[param_2];
  pcVar7 = (char *)0x8315fcac;
  iStack0000001c = param_2;
  iStack00000024 = param_3;
  iStack0000002c = param_4;
  uStack0000003c = param_6;
  puStack00000044 = param_7;
  do {
    if ((iStack0000001c != 0) && (*(int *)(pcVar7 + -4) == 0)) goto LAB_82aa4838;
    uVar8 = 0;
    bVar1 = false;
    switch(*pcVar7) {
    case '\0':
      uVar8 = param_5 & 0x3f;
      break;
    case '\x01':
      uVar8 = (param_5 & 0xffffffff) >> 8 & 0x3f;
      break;
    case '\x02':
      uVar8 = (param_5 & 0xffffffff) >> 0x10 & 1;
      break;
    case '\x03':
      uVar8 = (param_5 & 0xffffffff) >> 0x11 & 1;
      break;
    case '\x04':
      uVar8 = (param_5 & 0xffffffff) >> 0x12 & 1;
      break;
    case '\x05':
      uVar8 = (param_5 & 0xffffffff) >> 0x13 & 1;
      goto code_r0x82aa4638;
    case '\x06':
      uVar8 = (param_5 & 0xffffffff) >> 0x14 & 0xf;
      break;
    case '\a':
      uVar8 = (param_5 & 0xffffffff) >> 0x18 & 7;
      break;
    case '\b':
      uVar8 = (param_5 & 0xffffffff) >> 0x1b & 1;
      goto code_r0x82aa4638;
    case '\t':
      uVar8 = (param_5 & 0xffffffff) >> 0x1c & 7;
      break;
    case '\n':
      uVar8 = (param_5 & 0xffffffff) >> 0x1f;
code_r0x82aa4638:
      bVar1 = true;
      break;
    case '\v':
      uVar8 = (ulonglong)uStack0000003c & 1;
      break;
    case '\f':
      bVar1 = true;
      uVar8 = (ulonglong)(uStack0000003c >> 1) & 1;
      break;
    case '\r':
      uVar8 = (ulonglong)(uStack0000003c >> 2) & 3;
      break;
    case '\x0e':
      uVar8 = (ulonglong)(uStack0000003c >> 8) & 0xff;
      break;
    case '\x0f':
      uVar8 = (ulonglong)(uStack0000003c >> 0x10) & 1;
      break;
    case '\x10':
      uVar8 = (ulonglong)(uStack0000003c >> 0x11) & 1;
      break;
    case '\x11':
      uVar8 = (ulonglong)(uStack0000003c >> 0x12) & 1;
    }
    if ((iStack00000024 != 0) || (bVar5 = false, uVar8 != 0)) {
      bVar5 = true;
    }
    if (iStack0000002c == 0) {
      iVar2 = *(int *)(pcVar7 + -0x10);
    }
    else {
      iVar2 = *(int *)(pcVar7 + -0xc);
    }
    if ((*(int *)(pcVar7 + -8) == 0) || (bVar4 = true, iVar2 == 0)) {
      bVar4 = false;
    }
    if (iStack0000001c != 0) {
      bVar4 = true;
    }
    if ((iStack0000002c != 0) && (*pcVar7 == '\x0e')) {
      if ((param_5 & 0x40000) == 0) {
        bVar4 = false;
      }
      else {
        bVar5 = true;
        bVar4 = true;
      }
    }
    if (bVar5) {
      uStack_b0 = 1;
      if (bVar4) {
        fn_82AA4498(param_1,0xffffffff8202f634);
      }
      else {
        fn_82AA2720(param_1,0xffffffff821ce838);
        fn_82AA1C90(param_1,0xffffffff820d39a0);
      }
      fn_82AA1C90(param_1,0xffffffff820d3a70,puVar3,*(undefined4 *)(pcVar7 + -0x14));
      if (*pcVar7 == '\a') {
        uVar8 = (ulonglong)*(uint *)((int)&lbl_8315FE48 + (int)(uVar8 << 2));
        uVar6 = 0xffffffff821c4da8;
      }
      else if (*pcVar7 == '\r') {
        uVar6 = 0xffffffff821c4da8;
        uVar8 = (ulonglong)*(uint *)((int)&lbl_8315FE68 + (int)(uVar8 << 2));
      }
      else if (bVar1) {
        bVar1 = uVar8 == 0;
        uVar8 = 0xffffffff82196f18;
        if (bVar1) {
          uVar8 = 0xffffffff82196f10;
        }
        uVar6 = 0xffffffff821c4da8;
      }
      else {
        uVar6 = 0xffffffff821aa66c;
      }
      fn_82AA1C90(param_1,uVar6,uVar8);
      if (!bVar4) {
        fn_82AA2720(param_1,0xffffffff821ce828);
      }
      fn_82AA2720(param_1,0xffffffff821ce7a4);
      fn_82AA1C90(param_1,0xffffffff821cc86c);
    }
LAB_82aa4838:
    uVar8 = (ulonglong)uStack_ac;
    pcVar7 = pcVar7 + 0x18;
    uStack_ac = (uint)(uVar8 - 1);
    if (uVar8 - 1 == 0) {
      *puStack00000044 = uStack_b0;
      return;
    }
  } while( true );
}

