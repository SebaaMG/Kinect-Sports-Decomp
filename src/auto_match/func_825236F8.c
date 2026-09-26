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
extern int fn_82522ED8();
extern int fn_82526260();
extern int fn_8265C990();
extern int fn_82A1C0F0();
extern int fn_82A1F238();
extern int fn_82A82440();
extern int fn_82F691F0();
extern unsigned int lbl_821C2FA8;


void fn_825236F8(undefined4 *param_1)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong lVar3;
  int *piVar4;
  int *piVar5;
  
  *param_1 = &lbl_821C2FA8;
  if (param_1[0x71] == 0x3e5) {
    fn_82A1C0F0(param_1 + 0x71);
  }
  piVar5 = param_1 + 0x2db;
  lVar3 = 4;
  do {
    puVar1 = (undefined4 *)*piVar5;
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
      *piVar5 = 0;
    }
    lVar3 = lVar3 + -1;
    piVar5 = piVar5 + 1;
  } while (lVar3 != 0);
  if ((ulonglong)(uint)param_1[0x6b] != 0) {
    fn_82A82440((ulonglong)(uint)param_1[0x6b] + 0xc);
  }
  if (param_1[0x288] == 0) {
LAB_825237c4:
    if (param_1[0x286] != 0) {
      fn_8265C990(param_1[0x286],0x21006000);
      param_1[0x286] = 0;
    }
LAB_825237e0:
    if ((param_1[0x288] == 0) && (param_1[0x287] != 0)) {
      fn_82A1F238();
      goto LAB_825237fc;
    }
  }
  else {
    if ((param_1[0x286] == 0) || (param_1[0x287] == 0)) {
      if (param_1[0x288] == 0) goto LAB_825237c4;
      goto LAB_825237e0;
    }
    puVar1 = param_1 + 0x78;
    if (param_1[0x26d] != 1) {
      puVar1 = param_1 + 0x172;
    }
    fn_82526260(puVar1);
    param_1[0x286] = 0;
LAB_825237fc:
    param_1[0x287] = 0;
  }
  if (((param_1[0x2c4] == 0) || (param_1[0x2c1] == 0)) || (param_1[0x2c2] == 0)) {
    if (param_1[0x2c1] != 0) {
      fn_8265C990(param_1[0x2c1],0x21006000);
      param_1[0x2c1] = 0;
    }
    if (param_1[0x2c2] == 0) goto LAB_82523874;
    fn_82A1F238();
  }
  else {
    puVar1 = param_1 + 0x172;
    if (param_1[0x26d] != 1) {
      puVar1 = param_1 + 0x78;
    }
    fn_82526260(puVar1);
    param_1[0x2c1] = 0;
  }
  param_1[0x2c2] = 0;
LAB_82523874:
  piVar5 = param_1 + 0x289;
  lVar3 = 4;
  do {
    if (*piVar5 != 0) {
      fn_82522ED8();
      *piVar5 = 0;
    }
    piVar4 = piVar5 + 8;
    lVar2 = 4;
    do {
      if (*piVar4 != 0) {
        fn_82522ED8();
        *piVar4 = 0;
      }
      lVar2 = lVar2 + -1;
      piVar4 = piVar4 + 4;
    } while (lVar2 != 0);
    if (piVar5[4] != 0) {
      fn_82A1F238();
      piVar5[4] = 0;
    }
    piVar4 = piVar5 + 0x18;
    lVar2 = 4;
    do {
      if (*piVar4 != 0) {
        fn_82A1F238();
        *piVar4 = 0;
      }
      lVar2 = lVar2 + -1;
      piVar4 = piVar4 + 4;
    } while (lVar2 != 0);
    if (piVar5[0x3c] != 0) {
      fn_82A1F238();
      piVar5[0x3c] = 0;
    }
    piVar4 = piVar5 + 0x40;
    lVar2 = 4;
    do {
      if (*piVar4 != 0) {
        fn_82A1F238();
        *piVar4 = 0;
      }
      lVar2 = lVar2 + -1;
      piVar4 = piVar4 + 4;
    } while (lVar2 != 0);
    lVar3 = lVar3 + -1;
    piVar5 = piVar5 + 1;
  } while (lVar3 != 0);
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(param_1 + 0x2b1,0,0x40);
}

