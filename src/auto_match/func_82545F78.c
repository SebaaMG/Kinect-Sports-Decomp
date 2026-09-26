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
extern int fn_825306A0();
extern int fn_82639EA8();
extern int fn_8263A1B8();
extern int fn_8263A508();
extern int fn_8263E9F0();
extern int fn_8263FB38();
extern int fn_82645110();
extern int fn_82646390();
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CE890;
extern unsigned int lbl_8320A898;
extern unsigned int lbl_8326AF54;
extern unsigned int lbl_8326B37C;
extern unsigned int lbl_8326B390;
extern unsigned int lbl_83296BB8;


void fn_82545F78(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int in_r0;
  ulonglong uVar4;
  double dVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 auStack_40 [64];
  
  puVar1 = (undefined4 *)((uint)(&lbl_821CE890 + in_r0) & 0xfffffff0);
  uVar6 = puVar1[1];
  uVar7 = puVar1[2];
  uVar8 = puVar1[3];
  puVar2 = (undefined4 *)((uint)(auStack_40 + in_r0) & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar6;
  puVar2[2] = uVar7;
  puVar2[3] = uVar8;
  fn_82639EA8(lbl_8320A898,0xffffffff83296a14);
  lbl_83296BB8 = 0;
  dVar5 = (double)lbl_821CA460;
  if (lbl_8326AF54 < 2) {
    fn_8263FB38(dVar5,lbl_8320A898,0x14,0,0xffffffff8326afc0,0,0,0,0);
    fn_8263FB38(dVar5,lbl_8320A898,0,0,0xffffffff8326af58,0,0,0,0);
  }
  else {
    fn_8263E9F0();
    fn_82646390(dVar5,lbl_8320A898,0x300,0,0xffffffff8326af58,auStack_40);
    iVar3 = lbl_8320A898;
    *(uint *)(lbl_8320A898 + 0x2934) = *(uint *)(lbl_8320A898 + 0x2934) & 0xffffff8f | 0x30;
    uVar4 = *(ulonglong *)(iVar3 + 0x10);
    *(ulonglong *)(iVar3 + 0x10) = uVar4 | 0x800;
    *(ulonglong *)(iVar3 + 0x10) = uVar4 | 0x20800;
    fn_8263A1B8(lbl_8320A898,0,lbl_8326B37C);
    fn_8263A508(lbl_8320A898,lbl_8326B390);
    *(undefined4 *)(lbl_8320A898 + 0x2ab0) = *(undefined4 *)(lbl_8320A898 + 0x2a9c);
    fn_82645110();
  }
  fn_825306A0(1);
  return;
}

