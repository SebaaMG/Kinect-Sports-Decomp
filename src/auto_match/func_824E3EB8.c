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
extern unsigned int *auStack_10b8;
extern unsigned int *auStack_12de;
extern unsigned int *auStack_12f0;
extern unsigned int *auStack_8b8;
extern int fn_822315A0();
extern int fn_8223AAC0();
extern int fn_8226D2A8();
extern int fn_8226D388();
extern int fn_822831B8();
extern int fn_824E3740();
extern int fn_82520158();
extern int fn_82528BF8();
extern int fn_8265C9E0();
extern int fn_82F691F0();
extern unsigned int iStack_10dc;
extern unsigned int lbl_820E975C;
extern unsigned int lbl_821A8D8C;
extern unsigned int lbl_8327672C;
extern unsigned int uStack_10e0;
extern unsigned int uStack_12e0;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_824E3EB8(void)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  char cVar6;
  undefined4 uVar5;
  int iVar7;
  undefined1 auStack_12f0 [16];
  undefined2 uStack_12e0;
  undefined1 auStack_12de [510];
  undefined4 uStack_10e0;
  int iStack_10dc;
  undefined1 auStack_10b8 [2048];
  undefined1 auStack_8b8 [2232];
  
  fn_82520158(0xffffffff821c13b0,auStack_12f0,0);
  iVar3 = fn_824E3740();
  fn_8226D2A8(&uStack_10e0);
  puVar4 = (undefined4 *)fn_8265C9E0(0x178);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4[1] = 1;
    *puVar4 = &lbl_821A8D8C;
    puVar4[2] = 1;
    if (puVar4 + 4 != (undefined4 *)0x0) {
      fn_822831B8(puVar4 + 4,auStack_12f0);
    }
  }
  iVar2 = *(int *)(iVar3 + 0x1c);
  *(undefined4 **)(iVar3 + 0x1c) = puVar4;
  *(undefined4 **)(iVar3 + 0x18) = puVar4 + 4;
  if (iVar2 != 0) {
    fn_822315A0();
  }
  iVar2 = *(int *)(iVar3 + 0x1c);
  uVar5 = *(undefined4 *)(iVar3 + 0x18);
  uStack_10e0 = 0;
  iVar7 = 0;
  if ((iVar2 != 0) && (cVar6 = fn_8223AAC0(iVar2), cVar6 != '\0')) {
    uStack_10e0 = uVar5;
    iVar7 = iVar2;
  }
  bVar1 = iStack_10dc != 0;
  iStack_10dc = iVar7;
  if (bVar1) {
    fn_822315A0();
  }
  fn_82528BF8(lbl_8327672C,0xffffffff821c13bc,auStack_10b8,0x400,0,1);
  fn_82528BF8(lbl_8327672C,0xffffffff821c13c8,auStack_8b8,0x400,0,1);
  uVar5 = fn_8226D388(&uStack_10e0);
  *(undefined4 *)(iVar3 + 0x10) = uVar5;
  *(undefined4 *)(iVar3 + 0x14) = uVar5;
  if (iStack_10dc != 0) {
    fn_822315A0();
  }
  uStack_12e0 = lbl_820E975C;
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(auStack_12de,0,0x1fe);
}

