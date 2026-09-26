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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
#define _uStack_40 ((*(U64*)&uStack_40))
extern int fn_8287D518();
extern int fn_8287FD98();
extern int fn_828821A0();
extern int fn_82882218();
extern unsigned int lbl_82022F88;
extern unsigned int lbl_82022FD8;
extern unsigned int lbl_82022FDC;
extern unsigned int lbl_82022FE0;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


void fn_828871B0(int *param_1,longlong param_2)

{
  int iVar1;
  uint uVar3;
  char cVar4;
  char cVar5;
  undefined8 uVar2;
  uint *puVar6;
  double dVar7;
  uint uStack_40;
  uint uStack_3c;
  
  uVar3 = (**(code **)(*param_1 + 0x38))();
  iVar1 = param_1[6];
  cVar4 = fn_828821A0(iVar1);
  cVar5 = fn_82882218(iVar1);
  if ((cVar4 == '\0') && (cVar5 == '\0')) {
    uVar2 = fn_8287FD98();
    dVar7 = (double)fn_8287D518(uVar2,iVar1);
    uStack_3c = (uint)(longlong)(dVar7 * (double)lbl_82022FD8);
    _uStack_40 = CONCAT44(uStack_3c,uStack_3c);
    if (uStack_3c < 0xfa) {
      puVar6 = &lbl_82022FDC;
    }
    else {
      puVar6 = &uStack_40;
    }
    if (3000 < *puVar6) {
      puVar6 = &lbl_82022FE0;
    }
    if ((int)uVar3 < (int)*puVar6) {
      uVar3 = *puVar6;
    }
    if ((int)uVar3 < 0) {
      uVar3 = lbl_82022F88;
    }
  }
  *(longlong *)(param_1[0xe] + 8) = (int)uVar3 + param_2;
  iVar1 = param_1[0xe];
  if ((-1 < *(int *)(iVar1 + 0x10)) && (*(longlong *)(iVar1 + 0x18) < 0)) {
    *(longlong *)(iVar1 + 0x18) = *(int *)(iVar1 + 0x10) + param_2;
  }
  return;
}

