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
extern int fn_82FA5190();
extern int fn_82FA57F0();
extern int fn_82FF37F0();
extern int fn_82FF4810();
extern int fn_82FF5968();
extern int fn_82FF7CB8();
extern int fn_82FF9208();
extern int fn_82FFD4E8();
extern int fn_8300D9A8();
extern int fn_8300F4C0();
extern int fn_83010B70();
extern int fn_83013D98();
extern int fn_83015318();
extern int fn_83016290();
extern int fn_83016708();
extern int fn_83018AA8();
extern int fn_8301B188();
extern int fn_8301B638();
extern unsigned int lbl_831BC768;
extern unsigned int *lbl_832642E0;
extern unsigned int *lbl_832642E4;
extern unsigned int *lbl_832642E8;
extern unsigned int *lbl_832642EC;
extern unsigned int *lbl_832642F0;
extern unsigned int *lbl_832642F4;
extern unsigned int *lbl_832642F8;
extern unsigned int *lbl_832642FC;
extern unsigned int *lbl_83264300;
extern unsigned int *lbl_83264304;
extern unsigned int *lbl_83264308;
extern unsigned int lbl_832645D0;
extern unsigned int uRam83264344;


void fn_82FE8110(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (lbl_832645D0 != 0) {
    fn_8300D9A8();
  }
  if (lbl_832642E4 != (undefined4 *)0x0) {
    fn_8300F4C0();
  }
  if (lbl_832642F0 != (undefined4 *)0x0) {
    fn_82FF9208();
  }
  fn_82FF37F0();
  if (lbl_832642E4 != (undefined4 *)0x0) {
    fn_83010B70();
    puVar2 = lbl_832642E4;
    iVar1 = lbl_831BC768;
    if (lbl_832642E4 != (undefined4 *)0x0) {
      (**(code **)*lbl_832642E4)(lbl_832642E4,0);
      fn_82FA5190(iVar1,puVar2);
    }
    lbl_832642E4 = (undefined4 *)0x0;
  }
  if (lbl_832642F0 != (undefined4 *)0x0) {
    fn_82FFD4E8();
    puVar2 = lbl_832642F0;
    iVar1 = lbl_831BC768;
    if (lbl_832642F0 != (undefined4 *)0x0) {
      (**(code **)*lbl_832642F0)(lbl_832642F0,0);
      fn_82FA5190(iVar1,puVar2);
    }
    lbl_832642F0 = (undefined4 *)0x0;
  }
  if (lbl_832642E8 != (undefined4 *)0x0) {
    fn_82FF7CB8();
    puVar2 = lbl_832642E8;
    iVar1 = lbl_831BC768;
    if (lbl_832642E8 != (undefined4 *)0x0) {
      (**(code **)*lbl_832642E8)(lbl_832642E8,0);
      fn_82FA5190(iVar1,puVar2);
    }
    lbl_832642E8 = (undefined4 *)0x0;
  }
  if (lbl_832642F8 != (undefined4 *)0x0) {
    fn_8301B638();
    puVar2 = lbl_832642F8;
    iVar1 = lbl_831BC768;
    if (lbl_832642F8 != (undefined4 *)0x0) {
      (**(code **)*lbl_832642F8)(lbl_832642F8,0);
      fn_82FA5190(iVar1,puVar2);
    }
    lbl_832642F8 = (undefined4 *)0x0;
  }
  if (lbl_832642F4 != (undefined4 *)0x0) {
    fn_82FF5968();
    puVar2 = lbl_832642F4;
    iVar1 = lbl_831BC768;
    if (lbl_832642F4 != (undefined4 *)0x0) {
      (**(code **)*lbl_832642F4)(lbl_832642F4,0);
      fn_82FA5190(iVar1,puVar2);
    }
    lbl_832642F4 = (undefined4 *)0x0;
  }
  if (lbl_832642EC != (undefined4 *)0x0) {
    fn_8301B188();
    puVar2 = lbl_832642EC;
    iVar1 = lbl_831BC768;
    if (lbl_832642EC != (undefined4 *)0x0) {
      (**(code **)*lbl_832642EC)(lbl_832642EC,0);
      fn_82FA5190(iVar1,puVar2);
    }
    lbl_832642EC = (undefined4 *)0x0;
  }
  if (lbl_83264304 != (undefined4 *)0x0) {
    fn_82FF4810();
    puVar2 = lbl_83264304;
    iVar1 = lbl_831BC768;
    if (lbl_83264304 != (undefined4 *)0x0) {
      (**(code **)*lbl_83264304)(lbl_83264304,0);
      fn_82FA5190(iVar1,puVar2);
    }
    lbl_83264304 = (undefined4 *)0x0;
  }
  if (lbl_83264308 != (undefined4 *)0x0) {
    fn_83013D98();
    puVar2 = lbl_83264308;
    iVar1 = lbl_831BC768;
    if (lbl_83264308 != (undefined4 *)0x0) {
      (**(code **)*lbl_83264308)(lbl_83264308,0);
      fn_82FA5190(iVar1,puVar2);
    }
    lbl_83264308 = (undefined4 *)0x0;
  }
  if (lbl_83264300 != (undefined4 *)0x0) {
    fn_83015318();
    puVar2 = lbl_83264300;
    iVar1 = lbl_831BC768;
    if (lbl_83264300 != (undefined4 *)0x0) {
      (**(code **)*lbl_83264300)(lbl_83264300,0);
      fn_82FA5190(iVar1,puVar2);
    }
    lbl_83264300 = (undefined4 *)0x0;
  }
  if (lbl_832642FC != (undefined4 *)0x0) {
    fn_83018AA8();
    puVar2 = lbl_832642FC;
    iVar1 = lbl_831BC768;
    if (lbl_832642FC != (undefined4 *)0x0) {
      (**(code **)*lbl_832642FC)(lbl_832642FC,0);
      fn_82FA5190(iVar1,puVar2);
    }
    lbl_832642FC = (undefined4 *)0x0;
  }
  fn_83016708(0xffffffff83264368);
  if (lbl_832642E0 != (undefined4 *)0x0) {
    fn_83016290();
    puVar2 = lbl_832642E0;
    iVar1 = lbl_831BC768;
    if (lbl_832642E0 != (undefined4 *)0x0) {
      (**(code **)*lbl_832642E0)(lbl_832642E0,0);
      fn_82FA5190(iVar1,puVar2);
    }
    lbl_832642E0 = (undefined4 *)0x0;
  }
  if (lbl_831BC768 != -1) {
    fn_82FA57F0(lbl_831BC768);
    lbl_831BC768 = -1;
  }
  uRam83264344 = 0;
  return;
}

