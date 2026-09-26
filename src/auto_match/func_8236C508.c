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
extern unsigned int *auStack_78;
extern unsigned int fStack_90;
extern int fn_822315A0();
extern int fn_8223AAC0();
extern int fn_82359C18();
extern int fn_82365B38();
extern int fn_82365BD8();
extern int fn_824C5748();
extern int fn_824C5930();
extern int fn_82566018();
extern int fn_8265C9E0();
extern unsigned int iStack_6c;
extern unsigned int iStack_74;
extern unsigned int lbl_821A8D8C;
extern unsigned int lbl_821B3038;


/* WARNING: Type propagation algorithm not settling */

void fn_8236C508(int param_1)

{
  undefined4 *puVar1;
  char cVar2;
  double dVar3;
  double dVar4;
  float fStack_90;
  float afStack_8c [3];
  undefined4 *puStack_80;
  undefined4 *puStack_7c;
  undefined1 auStack_78 [4];
  int iStack_74;
  undefined **ppuStack_70;
  int iStack_6c;
  undefined ***pppuStack_60;
  
  afStack_8c[0] = *(float *)(param_1 + 0x1508);
  dVar4 = (double)afStack_8c[0];
  fStack_90 = *(float *)(param_1 + 0x150c);
  dVar3 = (double)fStack_90;
  afStack_8c[1] = 1.4013e-45;
  puStack_80 = (undefined4 *)0x0;
  fn_82365B38(auStack_78,afStack_8c + 1,afStack_8c,&fStack_90);
  fn_82365BD8(&puStack_80,auStack_78);
  fn_82566018(param_1 + 0x14f0,&puStack_80);
  if (puStack_7c != (undefined4 *)0x0) {
    fn_822315A0();
  }
  puVar1 = (undefined4 *)fn_8265C9E0(0x40);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1[1] = 1;
    puVar1[2] = 1;
    *puVar1 = &lbl_821A8D8C;
    if (puVar1 + 4 != (undefined4 *)0x0) {
      pppuStack_60 = &ppuStack_70;
      ppuStack_70 = &lbl_821B3038;
      iStack_6c = param_1;
      fn_824C5930(dVar4,dVar3,puVar1 + 4,2,&ppuStack_70);
      fn_82359C18(&ppuStack_70);
    }
  }
  puStack_80 = (undefined4 *)0x0;
  puStack_7c = (undefined4 *)0x0;
  if ((puVar1 != (undefined4 *)0x0) && (cVar2 = fn_8223AAC0(puVar1), cVar2 != '\0')) {
    puStack_80 = puVar1 + 4;
    puStack_7c = puVar1;
  }
  fn_82566018(param_1 + 0x14f0,&puStack_80);
  if (puStack_7c != (undefined4 *)0x0) {
    fn_822315A0();
  }
  fn_82365BD8(&puStack_80,auStack_78);
  fn_824C5748(param_1 + 0x14c8,&puStack_80);
  if (puStack_7c != (undefined4 *)0x0) {
    fn_822315A0();
  }
  if (puVar1 != (undefined4 *)0x0) {
    fn_822315A0(puVar1);
  }
  if (iStack_74 != 0) {
    fn_822315A0();
  }
  return;
}

