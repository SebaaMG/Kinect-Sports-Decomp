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
extern unsigned int *auStack_30;
extern int fn_82526A20();
extern int fn_82559EF0();
extern int fn_82561880();
extern int fn_825619C0();
extern unsigned int lbl_821CC160;
extern unsigned int lbl_83280B8C;
extern unsigned int lbl_83280B98;


undefined8 fn_825605B0(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 auStack_30 [48];
  
  iVar2 = (&lbl_83280B8C)[param_1 * 2];
  while( true ) {
    if (iVar2 == 0) {
      return 0;
    }
    iVar5 = fn_82526A20(iVar2 + 0x84);
    if (iVar5 == 0) break;
    iVar2 = *(int *)(iVar2 + 4);
  }
  uVar1 = *(uint *)(iVar2 + 0xa8);
  if ((uVar1 & 2) != 0) {
    iVar5 = (&lbl_83280B98)[param_1];
    if ((iVar5 != 0) && ((*(uint *)(iVar5 + 0xa8) & 4) == 0)) {
      puVar3 = (undefined4 *)(iVar5 + 0x10U & 0xfffffff0);
      uVar6 = puVar3[1];
      uVar7 = puVar3[2];
      uVar8 = puVar3[3];
      puVar4 = (undefined4 *)(iVar2 + 0x10U & 0xfffffff0);
      *puVar4 = *puVar3;
      puVar4[1] = uVar6;
      puVar4[2] = uVar7;
      puVar4[3] = uVar8;
      if ((uVar1 & 1) == 0) {
        fn_825619C0((&lbl_83280B98)[param_1],iVar2 + 0x40);
      }
      else {
        fn_82561880((&lbl_83280B98)[param_1],auStack_30);
        fn_82559EF0(iVar2 + 0x50,iVar2 + 0x54);
        *(undefined4 *)(iVar2 + 0x58) = lbl_821CC160;
      }
    }
  }
  (&lbl_83280B98)[param_1] = iVar2;
  return 1;
}

