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
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern unsigned int *auStack_78;
extern unsigned int *auStack_80;
extern int fn_82230040();
extern int fn_8251C390();
extern int fn_8265C9E0();
extern int fn_828E2F58();
extern int fn_828E5F60();
extern int fn_828E8078();
extern int fn_828E9220();
extern int fn_829E53B0();
extern int fn_82F63EC8();
extern unsigned int lbl_82002B04;
extern unsigned int lbl_832144A0;
extern unsigned int lbl_832144AC;
extern unsigned int uRam832144a4;
extern unsigned int uStack_6c;
extern unsigned int uStack_7c;


void fn_828E92A8(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  undefined1 auStack_80 [4];
  uint uStack_7c;
  undefined1 auStack_78 [8];
  undefined **ppuStack_70;
  undefined4 uStack_6c;
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [80];
  
  iVar2 = fn_828E9220();
  uStack_7c = **(uint **)(iVar2 + 4);
  while( true ) {
    uVar1 = uStack_7c;
    fn_8251C390(auStack_60,0xffffffff820274a8,0x6e);
    uVar3 = lbl_832144AC & 1;
    if ((lbl_832144AC & 1) == 0) {
      lbl_832144AC = lbl_832144AC | 1;
      uRam832144a4 = uVar3;
      uVar3 = fn_8265C9E0(0x20);
      if (uVar3 == 0) {
        uStack_6c = 0;
        ppuStack_70 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
        fn_82230040(&ppuStack_70);
      }
      lbl_832144A0 = uVar3;
      *(uint *)uVar3 = uVar3;
      *(uint *)(lbl_832144A0 + 4) = lbl_832144A0;
      *(uint *)(lbl_832144A0 + 8) = lbl_832144A0;
      *(undefined1 *)(lbl_832144A0 + 0x1c) = 1;
      *(undefined1 *)(lbl_832144A0 + 0x1d) = 1;
      fn_82F63EC8(0xffffffff83141858);
    }
    fn_829E53B0(auStack_60);
    if (uVar1 == lbl_832144A0) break;
    if (*(int *)(uVar1 + 0xc) == *(int *)(param_1 + 0x28)) {
      fn_8251C390(auStack_50,0xffffffff820274a8,0x6e);
      if ((lbl_832144AC & 1) == 0) {
        lbl_832144AC = lbl_832144AC | 1;
        fn_828E2F58(0xffffffff8321449c,auStack_80,auStack_80);
        fn_82F63EC8(0xffffffff83141858);
      }
      fn_829E53B0(auStack_50);
      puVar4 = (uint *)fn_828E8078(auStack_78,0xffffffff8321449c,uVar1);
      uStack_7c = *puVar4;
    }
    else {
      fn_828E5F60(&uStack_7c);
    }
  }
  return;
}

