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
#define _uStack00000020 ((*(U64*)&uStack00000020))
#define _uStack00000028 ((*(U64*)&uStack00000028))
extern unsigned int *auStack_68;
extern int fn_82AA66A8();
extern int fn_82ABDD90();
extern int fn_82AC6560();
extern int fn_82AD1270();
extern int fn_82AD17B0();
extern int fn_82B106A0();
extern int fn_82B4BAA8();
extern int fn_82B80B40();
extern int fn_82B83B68();
extern int fn_82B85948();
extern int fn_82B85D40();
extern int fn_82B85E18();
extern int fn_82B85EE0();
extern int fn_82B866A0();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82005344;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack00000020;
extern unsigned int uStack00000024;
extern unsigned int uStack00000028;
extern unsigned int uStack_70;


int fn_82B89838(int param_1,ulonglong param_2,undefined8 param_3,ulonglong param_4,int param_5,
                 char param_6,char param_7)

{
  uint uVar1;
  ulonglong uVar2;
  char cVar8;
  undefined8 uVar3;
  uint uVar5;
  uint *puVar6;
  undefined8 uVar4;
  int iVar7;
  uint uVar9;
  ushort uVar10;
  ulonglong uVar11;
  double dVar12;
  undefined4 uStack00000020;
  uint uStack00000024;
  uint uStack00000028;
  undefined8 uStack_70;
  undefined8 auStack_68 [13];
  
  uStack00000024 = (uint)param_2;
  uVar1 = uStack00000024;
  uVar5 = 0;
  if (((param_2 & 0x1f) == 0x11) && (uVar9 = 0, *(int *)(param_1 + 0x218) != 0)) {
    puVar6 = (uint *)(param_1 + 0x15c);
    do {
      if ((*puVar6 & 0x1f) == 0x11) {
        iVar7 = (uVar9 + 0x1d) * 0xc;
        uVar5 = *(uint *)(uVar9 * 0xc + param_1 + 0x160);
        *(uint *)(iVar7 + param_1) = uStack00000024 & 0x10000 | *(uint *)(iVar7 + param_1);
        break;
      }
      uVar9 = uVar9 + 1;
      puVar6 = puVar6 + 3;
    } while (uVar9 < *(uint *)(param_1 + 0x218));
  }
  uVar11 = param_4;
  if (param_5 != 0) {
    uVar11 = 4;
  }
  _uStack00000020 = param_2;
  _uStack00000028 = param_3;
  if (uVar5 == 0) {
    if (*(int *)(param_1 + 0x218) == 0x10) {
                    /* WARNING: Subroutine does not return */
      fn_82AA66A8(param_1,0xdca);
    }
    uStack00000028 = (uint)((ulonglong)param_3 >> 0x20);
    uVar5 = uStack00000028;
    uVar2 = (ulonglong)uStack00000028;
    cVar8 = fn_82B80B40(param_1,param_2,uVar2 << 0x20,0,0,0);
    if (cVar8 != '\0') {
      return 0;
    }
    iVar7 = *(int *)(param_1 + 0x218) * 0xc + param_1;
    *(int *)(param_1 + 0x218) = *(int *)(param_1 + 0x218) + 1;
    *(undefined4 *)(iVar7 + 0x158) = uStack00000020;
    *(uint *)(iVar7 + 0x15c) = uVar1;
    *(uint *)(iVar7 + 0x160) = uVar5;
    uVar3 = fn_82ABDD90(param_1,0x71,0,1);
    uVar5 = fn_82AC6560(param_1,uVar3,0x23);
    fn_82B83B68(uVar5,param_1,-(uint)((*(uint *)(param_1 + 4) & 1) == 0) & *(uint *)(param_1 + 4),
                  0x71,0,uVar11);
    uVar1 = uVar5 & 0xfffffffe;
    *(uint *)(uVar5 + 8) = *(uint *)(uVar5 + 8) | 0x800000;
    uVar9 = -(uint)((*(uint *)(param_1 + 4) & 1) == 0) & *(uint *)(param_1 + 4);
    *(undefined4 *)(uVar1 + 0x24) = *(undefined4 *)(uVar9 + 0x10);
    *(uint *)(*(uint *)(uVar9 + 0x10) & 0xfffffffe) = uVar1;
    *(uint *)(uVar1 + 0x28) = uVar9 - 0x14 | 1;
    *(uint *)(uVar9 + 0x10) = uVar1 + 0x28;
    *(uint *)(iVar7 + 0x160) = uVar5;
    *(uint *)(uVar5 + 8) = *(uint *)(uVar5 + 8) | 0x8000000;
    if ((param_6 != '\0') && (param_5 == 0)) {
      uVar1 = *(uint *)(uVar5 + 0xc);
      if (param_7 == '\0') {
        if ((uVar1 & 0x6666) != 0x6666) {
          uVar10 = (ushort)uVar1 | 0x6666;
          goto LAB_82b89a4c;
        }
      }
      else if ((uVar1 & 0x4444) != 0x4444) {
        uVar10 = (ushort)uVar1 | 0x4444;
LAB_82b89a4c:
        *(ushort *)(uVar5 + 0xe) = uVar10;
      }
    }
  }
  uVar3 = fn_82AD17B0(param_1,uVar5);
  if (param_5 == 1) {
    puVar6 = (uint *)fn_82AD17B0(param_1,uVar5,uVar3);
  }
  else {
    if (param_5 != 2) {
      if (param_5 == 3) {
        uVar3 = fn_82B85948(param_1,-(uint)((*(uint *)(param_1 + 4) & 1) == 0) &
                                      *(uint *)(param_1 + 4));
        dVar12 = (double)lbl_821AAD20;
        fn_82B866A0(dVar12,dVar12,dVar12,dVar12,&uStack_70,param_1,1);
        uVar3 = fn_82B85EE0(param_1,-(uint)((*(uint *)(param_1 + 4) & 1) == 0) &
                                      *(uint *)(param_1 + 4),uVar3,uStack_70);
        fn_82B866A0((double)lbl_82005344,dVar12,dVar12,dVar12,&uStack_70,param_1,1);
        uVar3 = fn_82B85E18(param_1,-(uint)((*(uint *)(param_1 + 4) & 1) == 0) &
                                      *(uint *)(param_1 + 4),uVar3,uStack_70);
        fn_82B866A0((double)lbl_82002AE0,dVar12,dVar12,dVar12,&uStack_70,param_1,1);
        auStack_68[0] = uStack_70;
        uVar4 = fn_82B4BAA8(param_1,auStack_68);
        fn_82AD1270(uVar4,4);
        iVar7 = fn_82B85D40(param_1,-(uint)((*(uint *)(param_1 + 4) & 1) == 0) &
                                      *(uint *)(param_1 + 4),uVar3,uVar4);
        return iVar7;
      }
      if (param_5 == 4) {
        uVar3 = fn_82AD17B0(param_1,uVar5,uVar3);
        iVar7 = fn_82B106A0(param_1,-(uint)((*(uint *)(param_1 + 4) & 1) == 0) &
                                          *(uint *)(param_1 + 4),uVar3,uVar3);
        if ((*(uint *)(iVar7 + 0xc) & 0xeeee) == 0xeeee) {
          return iVar7;
        }
        *(ushort *)(iVar7 + 0xe) = (ushort)*(uint *)(iVar7 + 0xc) | 0xeeee;
        return iVar7;
      }
      puVar6 = (uint *)fn_82AD17B0(param_1,uVar5,uVar3);
      goto LAB_82b89c74;
    }
    if (2 < (param_4 & 0xffffffff)) {
                    /* WARNING: Subroutine does not return */
      fn_82AA66A8(param_1,0xe32,0xffffffff820dbd34,2);
    }
    puVar6 = (uint *)fn_82AD17B0(param_1,uVar5,uVar3);
    *puVar6 = *puVar6 & 0xf1ffffff | 0x4000000;
    fn_82AD1270(puVar6,0);
    *puVar6 = *puVar6 & 0xffffe01f | 0x1dc0;
  }
  fn_82AD1270(puVar6,2);
LAB_82b89c74:
  iVar7 = fn_82B106A0(param_1,-(uint)((*(uint *)(param_1 + 4) & 1) == 0) &
                                    *(uint *)(param_1 + 4),puVar6,puVar6);
  return iVar7;
}

