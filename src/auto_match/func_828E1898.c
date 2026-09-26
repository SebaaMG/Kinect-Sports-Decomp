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
extern int fn_825089A0();
extern int fn_828865A0();
extern int fn_828A1C28();
extern int fn_828A1C30();
extern int fn_828ACC40();
extern int fn_828ACCE8();
extern int fn_828AE818();
extern int fn_828D45F8();
extern int fn_828E0DE0();
extern int fn_828E1760();
extern int fn_828ECF30();


void fn_828E1898(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  char cVar8;
  int *piVar7;
  undefined8 uVar5;
  undefined8 uVar6;
  double dVar9;
  
  cVar8 = fn_828ACC40(*(undefined4 *)(param_1 + 0x18));
  if (cVar8 == '\0') {
    cVar8 = fn_828ACCE8(*(undefined4 *)(param_1 + 0x18));
    if (cVar8 != '\0') {
      cVar8 = fn_828865A0(param_1);
      iVar1 = *(int *)(param_1 + 0x18);
      if (cVar8 == '\0') {
        fn_828AE818(iVar1,6);
        fn_828E0DE0(param_1,0);
      }
      else {
        iVar2 = *(int *)(iVar1 + 0x8c);
        uVar3 = *(undefined4 *)(iVar1 + 0x84);
        iVar1 = *(int *)(iVar2 + 0x10);
        fn_828A1C30();
        fn_828A1C28(*(undefined4 *)(param_1 + 0x18));
        uVar5 = fn_828ECF30(iVar2);
        uVar4 = *(uint *)(param_1 + 0x18);
        uVar6 = fn_828D45F8(param_1);
        fn_828E1760(uVar6,iVar2 + 0x1c,iVar2 + 0x14,iVar2 + 0x40,uVar3,iVar1 == 1,
                      (ulonglong)uVar4 + 0x60,uVar5);
        fn_828E0DE0(param_1,2);
      }
    }
  }
  else if (*(int *)(param_1 + 0xc) != 0) {
    piVar7 = (int *)fn_825089A0();
    dVar9 = (double)(**(code **)(*piVar7 + 8))();
    *(float *)(param_1 + 0x10) = (float)dVar9;
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return;
}

