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
#define ZEXT48(x) ((U64)((U32)(x)))
extern unsigned int *auStack_58;
extern unsigned int *auStack_70;
extern int fn_822509A0();
extern int fn_8225E360();
extern int fn_822C5B18();
extern int fn_82359C18();
extern int fn_82521AB0();
extern int fn_82522ED8();
extern int fn_82526358();
extern int fn_82599418();
extern int fn_8265CA20();
extern int fn_827D81A8();
extern int fn_82825AD0();
extern int fn_82829120();
extern int fn_828EA610();
extern int fn_82A1C0F0();
extern int fn_82F63108();
extern unsigned int lbl_83265A24;
extern unsigned int stack0x0000001c;
extern unsigned int uStack0000001c;


void fn_8225CB20(int param_1,undefined8 param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  uint *puVar3;
  char cVar4;
  ulonglong uVar5;
  longlong lVar6;
  int *piVar7;
  undefined4 uStack0000001c;
  undefined4 *puStack_80;
  int aiStack_7c [3];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [16];
  int *piStack_48;
  
  uStack0000001c = (undefined4)param_2;
  fn_8225E360(&puStack_80,param_1,&stack0x0000001c);
  puVar1 = (undefined4 *)puStack_80[4];
  puStack_80 = puVar1;
  if (*(char *)(puVar1 + 0x36) == '\0') {
    fn_82526358(puVar1,0x8001,0);
  }
  cVar4 = fn_828EA610(puVar1);
  if (((cVar4 == '\0') && (*(char *)(puVar1 + 0x36) == '\0')) && (puVar1[0x49] != -1)) {
    puVar1[0x49] = 0xffffffff;
    fn_827D81A8(lbl_83265A24);
    fn_82599418();
  }
  fn_82521AB0(puVar1);
  piVar7 = puVar1 + 0x3c;
  lVar6 = 3;
  do {
    if (*piVar7 != 0) {
      fn_82522ED8();
      *piVar7 = 0;
    }
    lVar6 = lVar6 + -1;
    piVar7 = piVar7 + 1;
  } while (lVar6 != 0);
  if (puVar1[0x3f] != 0) {
    fn_82522ED8();
    puVar1[0x3f] = 0;
  }
  if (puVar1[0x40] != 0) {
    fn_82522ED8();
    puVar1[0x40] = 0;
  }
  fn_82829120(aiStack_7c,param_1 + 0x48,&puStack_80);
  iVar2 = *(int *)(aiStack_7c[0] + 0x10);
  if (iVar2 != 0) {
    if (((*(int *)(iVar2 + 0x404) == 0) && (*(uint *)(iVar2 + 0x40c) < 3)) &&
       (*(int *)(iVar2 + 1000) == 0x3e5)) {
      fn_82A1C0F0(iVar2 + 1000);
    }
    fn_8265CA20(iVar2);
  }
  fn_82825AD0(aiStack_7c,param_1 + 0x48,aiStack_7c[0]);
  if (param_3 == 0) {
    (**(code **)*puVar1)(puVar1);
  }
  puVar3 = *(uint **)(param_1 + 0x38);
  puStack_80 = (undefined4 *)*puVar3;
  while( true ) {
    uVar5 = ZEXT48(puStack_80);
    if (uVar5 == ZEXT48(puVar3)) {
      return;
    }
    fn_822C5B18(auStack_70,uVar5 + 0x18);
    fn_822C5B18(auStack_58,uVar5 + 0x30);
    if (piStack_48 == (int *)0x0) break;
    (**(code **)(*piStack_48 + 4))(piStack_48,param_2);
    fn_82359C18(auStack_58);
    fn_82359C18(auStack_70);
    fn_822509A0(&puStack_80);
    puVar3 = *(uint **)(param_1 + 0x38);
  }
                    /* WARNING: Subroutine does not return */
  fn_82F63108();
}

