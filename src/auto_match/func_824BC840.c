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
extern unsigned int *auStack_a0;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_8223B688();
extern int fn_824896F0();
extern int fn_8248AFA8();
extern int fn_8248B928();
extern int fn_8248D3C0();
extern int fn_8265C9E0();
extern unsigned int lbl_821BE9E8;
extern unsigned int lbl_821BE9F4;
extern unsigned int lbl_821BEA0C;
extern unsigned int lbl_8328111C;


void fn_824BC840(undefined4 *param_1)

{
  int iVar4;
  undefined4 *puVar5;
  undefined8 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 auStack_a0 [32];
  undefined1 auStack_80 [128];
  
  iVar4 = fn_8265C9E0(0x5c);
  if (iVar4 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = fn_8248AFA8();
  }
  uVar8 = 1;
  if ((*(int *)(iVar4 + 0x18) == 0) || (*(int *)(iVar4 + 8) == 0)) {
    *(undefined4 *)(iVar4 + 0x58) = 0;
  }
  else {
    *(undefined4 *)(iVar4 + 0x58) = 1;
  }
  uVar6 = *(undefined4 *)(iVar4 + 0x3c);
  *(undefined4 *)(iVar4 + 0x58) = 0;
  if (lbl_8328111C == 0) {
    uVar9 = 1;
    uVar11 = 0;
    uVar10 = 5;
    puVar5 = (undefined4 *)fn_8265C9E0(0xc);
    if (puVar5 != (undefined4 *)0x0) {
      puVar5[2] = 0;
      *puVar5 = &lbl_821BEA0C;
      goto LAB_824bc980;
    }
  }
  else {
    uVar11 = 0x14;
    uVar10 = 0x1e;
    uVar9 = 0;
    uVar8 = 0;
    puVar5 = (undefined4 *)fn_8265C9E0(0x10);
    if (puVar5 != (undefined4 *)0x0) {
      uVar1 = fn_82230110(auStack_a0,0xffffffff821c05a0);
      puVar5[3] = uVar6;
      *puVar5 = &lbl_821BE9E8;
      lVar2 = fn_8265C9E0(0x6c);
      if (lVar2 == 0) {
        uVar6 = 0;
      }
      else {
        uVar3 = fn_8223B688(auStack_80,uVar1);
        uVar6 = fn_824896F0(lVar2,puVar5[3],uVar3);
      }
      puVar5[2] = uVar6;
      fn_82230300(uVar1,1,0);
      goto LAB_824bc980;
    }
  }
  puVar5 = (undefined4 *)0x0;
LAB_824bc980:
  puVar7 = (undefined4 *)fn_8265C9E0(0xa8);
  if (puVar7 == (undefined4 *)0x0) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    fn_8248B928(puVar7,iVar4,uVar11,puVar5,uVar9,uVar8,uVar10);
    puVar7[0x20] = iVar4;
    puVar7[0x21] = puVar5;
    puVar7[0x22] = 0;
    *puVar7 = &lbl_821BE9F4;
    puVar7[0x24] = 0;
    puVar7[0x25] = 0;
    puVar7[0x26] = 0;
    puVar7[0x29] = 0;
    iVar4 = fn_8265C9E0(0xb0);
    if (iVar4 == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = fn_8248D3C0();
    }
    puVar7[0x28] = uVar6;
    if (puVar7[0x22] != 0) {
      iVar4 = fn_8265C9E0(0xb0);
      if (iVar4 == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = fn_8248D3C0();
      }
      puVar7[0x29] = uVar6;
    }
  }
  *param_1 = puVar7;
  return;
}

