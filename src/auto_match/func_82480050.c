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
extern unsigned int *auStack_8b8;
extern int fn_822315A0();
extern int fn_8223AAC0();
extern int fn_8226D2A8();
extern int fn_8226D388();
extern int fn_82279CA0();
extern int fn_822817E0();
extern int fn_82285310();
extern int fn_82520158();
extern int fn_82528BF8();
extern int fn_8265C9E0();
extern unsigned int iStack_10dc;
extern unsigned int iStack_10fc;
extern unsigned int iStack_110c;
extern unsigned int iStack_1110;
extern unsigned int lbl_821A8D8C;
extern unsigned int lbl_821BDA44;
extern unsigned int lbl_8327672C;
extern unsigned int uStack_10e0;


void fn_82480050(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  char cVar5;
  undefined4 uVar4;
  int iVar6;
  int iStack_1110;
  int iStack_110c;
  undefined **ppuStack_1100;
  int iStack_10fc;
  undefined ***pppuStack_10f0;
  undefined4 uStack_10e0;
  int iStack_10dc;
  undefined1 auStack_10b8 [2048];
  undefined1 auStack_8b8 [2232];
  
  if (*(int *)(param_1 + 0x14) != 0) {
    fn_822817E0(&iStack_1110);
    if (iStack_1110 != 0) {
      fn_82279CA0(iStack_1110,1);
    }
    if (iStack_110c != 0) {
      fn_822315A0();
    }
  }
  fn_8226D2A8(&uStack_10e0);
  fn_82520158(0xffffffff821bd7c8,&iStack_1110,0);
  puVar3 = (undefined4 *)fn_8265C9E0(400);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3[1] = 1;
    *puVar3 = &lbl_821A8D8C;
    puVar3[2] = 1;
    if (puVar3 + 4 != (undefined4 *)0x0) {
      pppuStack_10f0 = &ppuStack_1100;
      ppuStack_1100 = &lbl_821BDA44;
      iStack_10fc = param_1;
      fn_82285310(puVar3 + 4,&iStack_1110,&ppuStack_1100);
    }
  }
  iVar2 = *(int *)(param_1 + 0x80);
  *(undefined4 **)(param_1 + 0x80) = puVar3;
  *(undefined4 **)(param_1 + 0x7c) = puVar3 + 4;
  if (iVar2 != 0) {
    fn_822315A0();
  }
  iVar2 = *(int *)(param_1 + 0x80);
  uVar4 = *(undefined4 *)(param_1 + 0x7c);
  uStack_10e0 = 0;
  iVar6 = 0;
  if ((iVar2 != 0) && (cVar5 = fn_8223AAC0(iVar2), cVar5 != '\0')) {
    uStack_10e0 = uVar4;
    iVar6 = iVar2;
  }
  bVar1 = iStack_10dc != 0;
  iStack_10dc = iVar6;
  if (bVar1) {
    fn_822315A0();
  }
  fn_82528BF8(lbl_8327672C,0xffffffff821bd7d8,auStack_10b8,0x400,0,1);
  fn_82528BF8(lbl_8327672C,0xffffffff821bd7e8,auStack_8b8,0x400,0,1);
  uVar4 = fn_8226D388(&uStack_10e0);
  *(undefined4 *)(param_1 + 0x84) = uVar4;
  if (iStack_10dc != 0) {
    fn_822315A0(iStack_10dc);
  }
  return;
}

