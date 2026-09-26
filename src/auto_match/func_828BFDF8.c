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
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern int fn_82230040();
extern int fn_8243CE60();
extern int fn_82511350();
extern int fn_8251ED38();
extern int fn_8251F2B0();
extern int fn_825503E0();
extern int fn_8265C9E0();
extern int fn_8265CA20();
extern int fn_82825F40();
extern int fn_82886738();
extern int fn_82887C70();
extern int fn_82887FF8();
extern int fn_8288A398();
extern int fn_828BF798();
extern int fn_828C6480();
extern int fn_828C8898();
extern unsigned int lbl_82002B04;
extern unsigned int lbl_83214050;
extern unsigned int *lbl_8321436C;
extern unsigned int uRam83214054;
extern unsigned int uRam83214370;
extern unsigned int uRam83214378;
extern unsigned int uStack_54;


void fn_828BFDF8(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_60 [4];
  int *piStack_5c;
  undefined **ppuStack_58;
  undefined4 uStack_54;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [4];
  undefined4 *puStack_3c;
  
  uRam83214378 = 1;
  fn_82511350(auStack_40,auStack_60,auStack_60);
  lVar5 = -0x7cdebfa8;
  lVar6 = 0x1b;
  lbl_83214050 = 1;
  do {
    fn_828BF798(lVar5);
    lVar6 = lVar6 + -1;
    lVar5 = lVar5 + 0x1c;
  } while (lVar6 != 0);
  lbl_83214050 = 2;
  piVar2 = (int *)fn_8288A398();
  (**(code **)(*piVar2 + 0x14))();
  lbl_83214050 = 0;
  piStack_5c = lbl_8321436C;
  fn_8251F2B0(&piStack_5c);
  uRam83214054 = (undefined4)((ulonglong)(uint)piStack_5c[3] + 1);
  fn_82886738((ulonglong)(uint)piStack_5c[3] + 1,0xffffffff828be968,0xffffffff828befd0);
  piStack_5c = (int *)*lbl_8321436C;
  if (piStack_5c != lbl_8321436C) {
    do {
      piVar2 = piStack_5c;
      fn_82887C70(piStack_5c[4],piStack_5c[5],piStack_5c[6],*(undefined1 *)(piStack_5c + 7),
                      *(undefined1 *)((int)piStack_5c + 0x1d));
      fn_82887FF8(piVar2[4],piVar2[8]);
      uVar3 = fn_828C8898(param_1,piVar2[4]);
      iVar1 = piVar2[4];
      puVar4 = (undefined4 *)fn_8265C9E0(0x18);
      if (puVar4 == (undefined4 *)0x0) {
        uStack_54 = 0;
        ppuStack_58 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
        fn_82230040(&ppuStack_58);
      }
      *puVar4 = puStack_3c;
      puVar4[1] = puStack_3c;
      puVar4[2] = puStack_3c;
      *(undefined1 *)(puVar4 + 5) = 0;
      *(undefined1 *)((int)puVar4 + 0x15) = 0;
      if (puVar4 + 3 != (int *)0x0) {
        puVar4[3] = iVar1;
        puVar4[4] = uVar3;
      }
      fn_8243CE60(auStack_50,auStack_40,puVar4,0);
      fn_825503E0(&piStack_5c);
    } while (piStack_5c != lbl_8321436C);
  }
  fn_828C6480(0xffffffff8321434c,auStack_40,1);
  fn_8251ED38(0xffffffff83214368,lbl_8321436C[1]);
  lbl_8321436C[1] = (int)lbl_8321436C;
  *lbl_8321436C = (int)lbl_8321436C;
  lbl_8321436C[2] = (int)lbl_8321436C;
  uRam83214370 = 0;
  fn_82825F40(&piStack_5c,auStack_40,*puStack_3c);
  fn_8265CA20(puStack_3c);
  return;
}

