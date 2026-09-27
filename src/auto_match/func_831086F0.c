extern char *pcRam83282cd0;
extern char *pcRam83282cd4;
extern char *pcRam83282cd8;
extern char *pcRam83282cdc;
extern char *pcRam83282ce0;
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
extern int fn_82230110();
extern int fn_82230218();
extern int fn_82238E28();
extern int fn_82238E90();
extern int fn_82238EE8();
extern int fn_82246230();
extern int fn_825154B8();
extern int fn_82515570();
extern int fn_82516318();
extern int fn_8265CA20();
extern int atexit();
extern unsigned int lbl_83282CB0;
extern unsigned int lbl_83282CB4;
extern unsigned int uRam831d0e34;
extern unsigned int uRam83282cc4;
extern unsigned int uRam83282cc8;
extern unsigned int uRam83282ce4;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_831086F0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  uint auStack_40;
  undefined4 uStack_30;
  uint uStack_2c;

  fn_82230110(&auStack_40,0xffffffff8219768c);
  uVar1 = uRam831d0e34;
  lbl_83282CB0 = 1;
  uRam83282cc8 = 0xf;
  uRam83282cc4 = 0;
  lbl_83282CB4 = 0;
  fn_82230218(0xffffffff83282cb4,&auStack_40,0,0xffffffffffffffff,0xffffffff83280000,1,0,0);
  uRam83282ce4 = uVar1;
  pcRam83282cd0 = fn_82238E28;
  pcRam83282cd4 = fn_82238E90;
  pcRam83282cdc = fn_82238EE8;
  pcRam83282cd8 = fn_82516318;
  pcRam83282ce0 = fn_82246230;
  uVar2 = fn_825154B8();
  fn_82515570(uVar2,0xffffffff83282cb0);
  if (0xf < uStack_2c) {
    fn_8265CA20(auStack_40);
  }
  uStack_30 = 0;
  auStack_40 = auStack_40 & 0xffffff;
  uStack_2c = 0xf;
  atexit(0xffffffff8313a7f0);
  return;
}
