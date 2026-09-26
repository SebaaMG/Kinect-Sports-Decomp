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
extern int fn_82239010();
extern int fn_825178E0();
extern int fn_828A1C38();
extern int fn_828ACC40();
extern int fn_828AD0F8();
extern int fn_828AD488();
extern int fn_828C3E70();
extern int fn_828C4240();
extern unsigned int uStack_50;


longlong fn_828C1DE0(int param_1)

{
  int iVar1;
  bool bVar2;
  char cVar4;
  undefined8 uVar3;
  longlong lVar5;
  longlong lVar6;
  int *piVar7;
  undefined1 uStack_50;
  
  cVar4 = fn_828AD0F8();
  if ((cVar4 == '\0') && (cVar4 = fn_828AD488(param_1), cVar4 == '\0')) {
    cVar4 = fn_828C4240(param_1);
    bVar2 = false;
    if (cVar4 != '\0') goto LAB_828c1e30;
  }
  else {
LAB_828c1e30:
    bVar2 = true;
  }
  if (bVar2) {
    cVar4 = fn_828ACC40(param_1);
    bVar2 = true;
    if (cVar4 != '\0') goto LAB_828c1e5c;
  }
  bVar2 = false;
LAB_828c1e5c:
  if ((!bVar2) || (bVar2 = true, *(int *)(param_1 + 0x8c) == 0)) {
    bVar2 = false;
  }
  if ((!bVar2) || (lVar5 = 1, *(int *)(*(int *)(param_1 + 0x8c) + 8) != 0)) {
    lVar5 = 0;
  }
  if (lVar5 != 0) {
    fn_828C3E70(param_1);
    if (*(int *)(param_1 + 0x8c) != 0) {
      fn_828A1C38((undefined4 *)(param_1 + 0x8c));
      *(undefined4 *)(param_1 + 0x8c) = 0;
    }
    *(undefined4 *)(param_1 + 0xa0) = 0;
    piVar7 = (int *)(param_1 + 0x10c);
    lVar6 = 4;
    do {
      iVar1 = *piVar7;
      if (piVar7[-1] != iVar1) {
        uVar3 = fn_825178E0(iVar1,iVar1,piVar7[-1],uStack_50);
        fn_82239010(uVar3,*piVar7,piVar7 + 2,uStack_50);
        *piVar7 = (int)uVar3;
      }
      iVar1 = piVar7[0x10];
      if (piVar7[0xf] != iVar1) {
        uVar3 = fn_825178E0(iVar1,iVar1,piVar7[0xf],uStack_50);
        fn_82239010(uVar3,piVar7[0x10],piVar7 + 0x12,uStack_50);
        piVar7[0x10] = (int)uVar3;
      }
      lVar6 = lVar6 + -1;
      piVar7 = piVar7 + 4;
    } while (lVar6 != 0);
  }
  return lVar5;
}

