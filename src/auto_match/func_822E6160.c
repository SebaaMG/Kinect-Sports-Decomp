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
#define CONCAT22(h,l) ((U32)((((U16)(h)) << 16) | ((U16)(l))))
extern unsigned int *auStack_40;
extern unsigned int *auStack_48;
extern unsigned int *auStack_50;
extern unsigned int *auStack_58;
extern unsigned int *auStack_60;
extern unsigned int *auStack_68;
extern unsigned int *auStack_70;
extern unsigned int *auStack_78;
extern int fn_822315A0();
extern int fn_822E7DC8();
extern int fn_822E8BC8();
extern int fn_8265C9E0();
extern unsigned int iStack_3c;
extern unsigned int iStack_44;
extern unsigned int iStack_4c;
extern unsigned int iStack_54;
extern unsigned int iStack_5c;
extern unsigned int iStack_64;
extern unsigned int iStack_6c;
extern unsigned int lbl_821AD588;
extern unsigned int lbl_831D154C;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;


void fn_822E6160(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 auStack_78 [2];
  undefined1 auStack_70 [4];
  int iStack_6c;
  undefined1 auStack_68 [4];
  int iStack_64;
  undefined1 auStack_60 [4];
  int iStack_5c;
  undefined1 auStack_58 [4];
  int iStack_54;
  undefined1 auStack_50 [4];
  int iStack_4c;
  undefined1 auStack_48 [4];
  int iStack_44;
  undefined1 auStack_40 [4];
  int iStack_3c;
  
  if (*(int *)(param_1 + 0x24) == 0) {
    uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x1bc) + 0x174);
    uStack_7c = uVar1;
    puVar4 = (undefined4 *)fn_8265C9E0(0x24);
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      puVar4[1] = 1;
      puVar4[2] = 1;
      *puVar4 = &lbl_821AD588;
      if (puVar4 + 3 != (undefined4 *)0x0) {
        uStack_80 = CONCAT22(4,(((U64)(uStack_80) >> 16) & 0xFFFF));
        fn_822E8BC8((double)lbl_831D154C,puVar4 + 3,uVar1,param_1,&uStack_80);
      }
    }
    iVar2 = *(int *)(param_1 + 0x1d0);
    *(undefined4 **)(param_1 + 0x1d0) = puVar4;
    *(undefined4 **)(param_1 + 0x1cc) = puVar4 + 3;
    if (iVar2 != 0) {
      fn_822315A0();
    }
    auStack_78[0] = 1;
    uStack_80 = 3;
    puVar4 = (undefined4 *)
             fn_822E7DC8(auStack_70,&uStack_7c,param_1,auStack_78,&uStack_80,
                               0xffffffff831d1554);
    uVar1 = puVar4[1];
    uVar3 = *puVar4;
    *puVar4 = 0;
    puVar4[1] = 0;
    iVar2 = *(int *)(param_1 + 0x1d8);
    *(undefined4 *)(param_1 + 0x1d8) = uVar1;
    *(undefined4 *)(param_1 + 0x1d4) = uVar3;
    if (iVar2 != 0) {
      fn_822315A0();
    }
    if (iStack_6c != 0) {
      fn_822315A0();
    }
    auStack_78[0] = 0xb;
    uStack_80 = 9;
    puVar4 = (undefined4 *)
             fn_822E7DC8(auStack_68,&uStack_7c,param_1,&uStack_80,auStack_78,
                               0xffffffff831d1558);
    uVar1 = *puVar4;
    *puVar4 = 0;
    uVar3 = puVar4[1];
    puVar4[1] = 0;
    iVar2 = *(int *)(param_1 + 0x1e0);
    *(undefined4 *)(param_1 + 0x1e0) = uVar3;
    *(undefined4 *)(param_1 + 0x1dc) = uVar1;
    if (iVar2 != 0) {
      fn_822315A0();
    }
    if (iStack_64 != 0) {
      fn_822315A0();
    }
    auStack_78[0] = 10;
    uStack_80 = 8;
    puVar4 = (undefined4 *)
             fn_822E7DC8(auStack_60,&uStack_7c,param_1,&uStack_80,auStack_78,
                               0xffffffff831d1558);
    uVar1 = puVar4[1];
    uVar3 = *puVar4;
    *puVar4 = 0;
    puVar4[1] = 0;
    iVar2 = *(int *)(param_1 + 0x1e8);
    *(undefined4 *)(param_1 + 0x1e8) = uVar1;
    *(undefined4 *)(param_1 + 0x1e4) = uVar3;
    if (iVar2 != 0) {
      fn_822315A0();
    }
    if (iStack_5c != 0) {
      fn_822315A0();
    }
    uStack_80 = 0xf;
    auStack_78[0] = 0x11;
    puVar4 = (undefined4 *)
             fn_822E7DC8(auStack_58,&uStack_7c,param_1,&uStack_80,auStack_78,
                               0xffffffff831d1560);
    uVar1 = *puVar4;
    *puVar4 = 0;
    uVar3 = puVar4[1];
    puVar4[1] = 0;
    iVar2 = *(int *)(param_1 + 0x1f0);
    *(undefined4 *)(param_1 + 0x1f0) = uVar3;
    *(undefined4 *)(param_1 + 0x1ec) = uVar1;
    if (iVar2 != 0) {
      fn_822315A0();
    }
    if (iStack_54 != 0) {
      fn_822315A0();
    }
    uStack_80 = 0xe;
    auStack_78[0] = 0x10;
    puVar4 = (undefined4 *)
             fn_822E7DC8(auStack_50,&uStack_7c,param_1,&uStack_80,auStack_78,
                               0xffffffff831d1560);
    uVar1 = *puVar4;
    uVar3 = puVar4[1];
    *puVar4 = 0;
    puVar4[1] = 0;
    iVar2 = *(int *)(param_1 + 0x1f8);
    *(undefined4 *)(param_1 + 0x1f8) = uVar3;
    *(undefined4 *)(param_1 + 500) = uVar1;
    if (iVar2 != 0) {
      fn_822315A0();
    }
    if (iStack_4c != 0) {
      fn_822315A0();
    }
    uStack_80 = 0x11;
    auStack_78[0] = 0x13;
    puVar4 = (undefined4 *)
             fn_822E7DC8(auStack_48,&uStack_7c,param_1,&uStack_80,auStack_78,
                               0xffffffff831d1564);
    uVar1 = *puVar4;
    *puVar4 = 0;
    uVar3 = puVar4[1];
    puVar4[1] = 0;
    iVar2 = *(int *)(param_1 + 0x200);
    *(undefined4 *)(param_1 + 0x200) = uVar3;
    *(undefined4 *)(param_1 + 0x1fc) = uVar1;
    if (iVar2 != 0) {
      fn_822315A0();
    }
    if (iStack_44 != 0) {
      fn_822315A0();
    }
    uStack_80 = 0x10;
    auStack_78[0] = 0x12;
    puVar4 = (undefined4 *)
             fn_822E7DC8(auStack_40,&uStack_7c,param_1,&uStack_80,auStack_78,
                               0xffffffff831d1564);
    uVar1 = puVar4[1];
    uVar3 = *puVar4;
    *puVar4 = 0;
    puVar4[1] = 0;
    iVar2 = *(int *)(param_1 + 0x208);
    *(undefined4 *)(param_1 + 0x208) = uVar1;
    *(undefined4 *)(param_1 + 0x204) = uVar3;
    if (iVar2 != 0) {
      fn_822315A0();
    }
    if (iStack_3c != 0) {
      fn_822315A0();
    }
  }
  return;
}

