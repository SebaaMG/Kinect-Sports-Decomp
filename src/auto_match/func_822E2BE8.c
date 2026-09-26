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
extern int fn_822315A0();
extern int fn_822E2E30();
extern int fn_82370F38();
extern int fn_824D2AE8();
extern int fn_825275B0();
extern unsigned int iStack_5c;
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_821925C0;
extern unsigned int lbl_821CC160;


void fn_822E2BE8(double param_1,undefined8 param_2,int param_3,int param_4,undefined8 param_5)

{
  float fVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  undefined4 *puStack_60;
  int iStack_5c;
  
  iVar3 = param_3 + 0x58;
  fn_824D2AE8(&puStack_60,iVar3);
  fn_825275B0(*puStack_60);
  puStack_60[0x27] = 0;
  if (iStack_5c != 0) {
    fn_822315A0();
  }
  iVar2 = *(int *)(param_3 + 0x14);
  if ((*(int *)(iVar2 + 0x2c) == *(int *)(param_4 + 0x2c)) || (*(int *)(iVar2 + 0x310) != 0)) {
    if (param_1 < (double)lbl_821CC160) {
LAB_822e2d10:
      bVar4 = false;
      goto LAB_822e2ca4;
    }
  }
  else {
    if (param_1 == (double)lbl_821CC160) {
      bVar4 = *(int *)(param_4 + 0x2a4) != 0;
      goto LAB_822e2ca4;
    }
    fVar1 = lbl_8218E8E8;
    if (param_1 < (double)lbl_821CC160) {
      fVar1 = lbl_821925C0;
    }
    if ((double)fVar1 < param_1) goto LAB_822e2d10;
  }
  bVar4 = true;
LAB_822e2ca4:
  fn_824D2AE8(&puStack_60,iVar3);
  fn_82370F38(param_2,param_1,*(undefined4 *)(param_3 + 0x10),&puStack_60,iVar2,param_4,
                    param_5,bVar4);
  fn_822E2E30(iVar3);
  return;
}

