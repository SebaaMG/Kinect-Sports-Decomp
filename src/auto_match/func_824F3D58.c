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
extern unsigned int *auStack_104;
extern unsigned int *auStack_108;
extern unsigned int *auStack_160;
extern int fn_8251F720();
extern int fn_8251FA58();
extern int fn_82520158();
extern int fn_8263BDD8();
extern int fn_82F691F0();
extern int fn_82F6A510();
extern int fn_82F6A55C();
extern unsigned int lbl_8218E8E8;
extern unsigned int uStack_158;
extern unsigned int uStack_15c;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_824F3D58(void)

{
  int iVar3;
  ulonglong uVar1;
  ulonglong uVar2;
  int *piVar4;
  undefined1 auStack_160 [4];
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined1 auStack_108 [4];
  undefined1 auStack_104 [260];
  
  iVar3 = fn_82F6A510();
  if (*(int *)(iVar3 + 0xc) != 0) {
    fn_82520158(0xffffffff821c1dcc,auStack_160,0);
    fn_82520158(0xffffffff821c1df4,&uStack_15c,0);
    uVar1 = fn_8251F720(auStack_160,0);
    uVar2 = fn_8251F720(&uStack_15c,0);
    piVar4 = *(int **)(iVar3 + 0xc);
    if (piVar4 != (int *)0x0) {
      uStack_158 = lbl_8218E8E8;
      do {
        if (*piVar4 != 0) {
          fn_8263BDD8(*(undefined4 *)(*piVar4 + 8),0,0,0,&uStack_15c,auStack_160,auStack_104,
                            auStack_108);
                    /* WARNING: Subroutine does not return */
          fn_82F691F0(uStack_15c,0x7f,0x300);
        }
        piVar4 = (int *)piVar4[1];
      } while (piVar4 != (int *)0x0);
    }
    if ((uVar1 & 0xffffffff) != 0) {
      fn_8251FA58(uVar1);
    }
    if ((uVar2 & 0xffffffff) != 0) {
      fn_8251FA58(uVar2);
    }
  }
  fn_82F6A55C();
  return;
}

