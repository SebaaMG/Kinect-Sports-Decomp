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
extern unsigned int fStack_70;
extern int fn_822315A0();
extern int fn_82359C18();
extern int fn_82365B38();
extern int fn_82365BD8();
extern int fn_824C5748();
extern int fn_824C5930();
extern int fn_82566018();
extern int fn_8265C9E0();
extern unsigned int iStack_4c;
extern unsigned int iStack_5c;
extern unsigned int iStack_64;
extern unsigned int lbl_821A8D8C;
extern unsigned int lbl_821B51BC;
extern unsigned int uStack_60;


/* WARNING: Type propagation algorithm not settling */

void fn_8239DA58(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  double dVar3;
  double dVar4;
  float fStack_70;
  float afStack_6c [2];
  int iStack_64;
  undefined4 uStack_60;
  int iStack_5c;
  undefined **ppuStack_50;
  int iStack_4c;
  undefined ***pppuStack_40;
  
  afStack_6c[0] = *(float *)(param_1 + 0x8cc);
  dVar4 = (double)afStack_6c[0];
  fStack_70 = *(float *)(param_1 + 0x8d0);
  dVar3 = (double)fStack_70;
  afStack_6c[1] = 1.4013e-45;
  uStack_60 = 0;
  fn_82365B38(&uStack_60,afStack_6c + 1,afStack_6c,&fStack_70);
  fn_82365BD8(afStack_6c + 1,&uStack_60);
  fn_82566018(param_1 + 0x8a8,afStack_6c + 1);
  if (iStack_64 != 0) {
    fn_822315A0();
  }
  fn_82365BD8(afStack_6c + 1,&uStack_60);
  fn_824C5748(param_1 + 0x880,afStack_6c + 1);
  if (iStack_64 != 0) {
    fn_822315A0();
  }
  puVar2 = (undefined4 *)fn_8265C9E0(0x40);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2[1] = 1;
    puVar2[2] = 1;
    *puVar2 = &lbl_821A8D8C;
    if (puVar2 + 4 != (undefined4 *)0x0) {
      pppuStack_40 = &ppuStack_50;
      ppuStack_50 = &lbl_821B51BC;
      iStack_4c = param_1;
      fn_824C5930(dVar4,dVar3,puVar2 + 4,2,&ppuStack_50);
      fn_82359C18(&ppuStack_50);
    }
  }
  iVar1 = *(int *)(param_1 + 0x8c4);
  *(undefined4 **)(param_1 + 0x8c4) = puVar2;
  *(undefined4 **)(param_1 + 0x8c0) = puVar2 + 4;
  if (iVar1 != 0) {
    fn_822315A0();
  }
  if (iStack_5c != 0) {
    fn_822315A0();
  }
  return;
}

