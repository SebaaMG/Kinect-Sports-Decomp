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
extern unsigned int *auStack_40;
extern int fn_828E9D90();
extern int fn_828E9DA8();
extern int fn_828E9FF8();
extern unsigned int uStack_44;


void fn_828AC6A8(int param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  undefined4 *puVar6;
  longlong lVar7;
  undefined4 uStack_44;
  uint auStack_40 [16];
  
  lVar7 = 4;
  puVar6 = &uStack_44;
  do {
    iVar2 = fn_828E9DA8(param_2);
    iVar3 = fn_828E9D90(param_2);
    if (iVar2 - iVar3 < 6) {
      uVar4 = 0;
    }
    else {
      uVar4 = fn_828E9FF8(param_2,6);
    }
    lVar7 = lVar7 + -1;
    puVar6 = puVar6 + 1;
    *puVar6 = uVar4;
  } while (lVar7 != 0);
  *(uint *)(param_1 + 0x10) = auStack_40[2];
  *(uint *)(param_1 + 0x14) = auStack_40[3];
  *(uint *)(param_1 + 8) = auStack_40[0];
  *(uint *)(param_1 + 0xc) = auStack_40[1];
  if (((ulonglong)auStack_40[2] + (ulonglong)auStack_40[3] == 0) ||
     (bVar1 = true, auStack_40[2] < auStack_40[0])) {
    bVar1 = false;
  }
  if ((!bVar1) || (uVar5 = 1, auStack_40[3] < auStack_40[1])) {
    uVar5 = 0;
  }
  *(undefined1 *)(param_1 + 4) = uVar5;
  return;
}

