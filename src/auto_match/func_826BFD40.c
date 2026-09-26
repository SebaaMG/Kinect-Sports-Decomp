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
extern int fn_826824B0();
extern int fn_826944C8();
extern int fn_826957D0();
extern int fn_826959C8();
extern int fn_82696B20();
extern int fn_82696D38();
extern int fn_826ADE60();
extern int fn_826B3578();
extern int fn_826B5160();
extern unsigned int iStack_44;
extern unsigned int iStack_48;


void fn_826BFD40(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  bool bVar6;
  undefined8 uVar7;
  char *pcVar8;
  undefined1 uVar9;
  undefined4 *puStack_50;
  undefined4 *puStack_4c;
  int iStack_48;
  int iStack_44;
  byte bStack_40;
  
  puVar1 = *(undefined1 **)(param_1 + 4);
  fn_826959C8(puVar1);
  *puVar1 = 2;
  puVar1[4] = 0;
  if (*(int *)(param_1 + 0x1c) < 2) {
    fn_826ADE60(*(undefined4 *)(param_1 + 0x18),0xffffffff8200b654);
  }
  else {
    iVar2 = *(int *)(param_1 + 0x18);
    uVar3 = *(undefined4 *)(iVar2 + 0x78);
    uVar7 = fn_826957D0(param_1,0);
    fn_82696D38(&puStack_50,uVar7,iVar2,0xffffffffffffffff,0);
    pcVar8 = (char *)fn_826957D0(param_1,1);
    if ((*pcVar8 == '\b') || (bVar6 = false, *pcVar8 == '\v')) {
      bVar6 = true;
    }
    if (bVar6) {
      uVar4 = *(undefined4 *)(param_1 + 0x18);
      uVar7 = fn_826957D0(param_1,1);
      fn_82696B20(&iStack_48,uVar7,uVar4);
      uVar9 = fn_826B5160(uVar3,(ulonglong)*(uint *)(param_1 + 0x18) + 0x78,&puStack_50,&iStack_48
                           );
      puVar1 = *(undefined1 **)(param_1 + 4);
      fn_826959C8(puVar1);
      puVar1[4] = uVar9;
      *puVar1 = 2;
      if (((bStack_40 & 2) == 0) && (iStack_48 != 0)) {
        fn_826824B0();
      }
      iStack_48 = 0;
      if (((bStack_40 & 1) == 0) && (iStack_44 != 0)) {
        fn_826824B0();
      }
      iStack_44 = 0;
    }
    else {
      pcVar8 = (char *)fn_826957D0(param_1,1);
      if (*pcVar8 == '\x01') {
        uVar9 = fn_826B3578(uVar3,(ulonglong)*(uint *)(param_1 + 0x18) + 0x78,&puStack_50);
        puVar1 = *(undefined1 **)(param_1 + 4);
        fn_826959C8(puVar1);
        puVar1[4] = uVar9;
        *puVar1 = 2;
      }
      else {
        uVar3 = *(undefined4 *)(param_1 + 0x18);
        uVar7 = fn_826957D0(param_1,1);
        fn_82696D38(&puStack_4c,uVar7,uVar3,0xffffffffffffffff,0);
        fn_826ADE60(*(undefined4 *)(param_1 + 0x18),0xffffffff8200b600,*puStack_50,*puStack_4c
                         );
        uVar5 = puStack_4c[2];
        puStack_4c[2] = (int)((ulonglong)uVar5 - 1);
        if ((ulonglong)uVar5 - 1 == 0) {
          fn_826944C8(puStack_4c);
        }
      }
    }
    uVar5 = puStack_50[2];
    puStack_50[2] = (int)((ulonglong)uVar5 - 1);
    if ((ulonglong)uVar5 - 1 == 0) {
      fn_826944C8(puStack_50);
    }
  }
  return;
}

