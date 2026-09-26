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
extern int fn_82522A48();
extern int fn_8259A230();
extern int fn_8259C458();
extern int fn_8259C4C0();
extern int fn_8259C5D8();
extern int fn_8259C738();
extern int fn_82A1BB18();
extern int fn_82A277E0();
extern int fn_82A29158();
extern unsigned int lbl_8326B7D0;


int fn_82522BC8(longlong param_1,ulonglong param_2,longlong param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar4;
  longlong lVar3;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined2 *puVar8;
  uint uVar9;
  uint uVar10;
  
  if ((param_2 & 0xffffffff) == 0) {
    iVar4 = fn_82522A48(param_1,param_3);
  }
  else {
    lVar3 = fn_82A1BB18();
    fn_8259C5D8(param_1 + 8,1,lVar3 + 1);
    uVar5 = fn_8259C4C0(param_2);
    iVar6 = fn_8259C458();
    fn_82A1BB18();
    iVar4 = fn_8259A230();
    uVar1 = *(undefined4 *)(iVar6 + 0x24);
    uVar2 = *(undefined4 *)(&lbl_8326B7D0 + iVar4 * 4);
    *(undefined4 *)(&lbl_8326B7D0 + iVar4 * 4) = uVar5;
    iVar4 = fn_82A277E0(uVar1,0,param_2);
    uVar10 = iVar4 - 4;
    iVar4 = fn_82A29158(*(undefined4 *)(iVar6 + 0x24),0,param_2,param_3 + 4);
    if (iVar4 != 0) {
      iVar7 = fn_82A277E0(*(undefined4 *)(iVar6 + 0x24),0,iVar4);
      puVar8 = (undefined2 *)(iVar7 + iVar4 + -4);
      *puVar8 = 0x9876;
      *(char *)(puVar8 + 1) = (char)*(undefined4 *)(iVar6 + 0x20);
      iVar7 = fn_82A277E0(*(undefined4 *)(iVar6 + 0x24),0,iVar4);
      uVar9 = iVar7 - 4;
      if (uVar10 < uVar9) {
        iVar7 = (uVar9 - uVar10) + *(int *)(iVar6 + 0x2c);
      }
      else {
        iVar7 = (uVar9 - uVar10) + *(int *)(iVar6 + 0x2c);
      }
      *(int *)(iVar6 + 0x2c) = iVar7;
    }
    fn_82A1BB18();
    iVar6 = fn_8259A230();
    *(undefined4 *)(&lbl_8326B7D0 + iVar6 * 4) = uVar2;
    fn_82A1BB18();
    fn_8259C738(param_1 + 8);
  }
  return iVar4;
}

