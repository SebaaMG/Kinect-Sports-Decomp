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
extern unsigned int *auStack_170;
extern unsigned int *auStack_190;
extern unsigned int *auStack_1b0;
extern unsigned int *auStack_1c0;
extern unsigned int *auStack_1f8;
extern int fn_822315A0();
extern int fn_823F2E20();
extern int fn_82517978();
extern int fn_8259A3A8();
extern int fn_8259B778();
extern int fn_8259BC00();
extern int fn_8265C9E0();
extern int fn_827D5158();
extern int fn_827D9670();
extern int fn_827DE858();
extern int fn_82811400();
extern int fn_82A1EFC0();
extern int fn_82F67FE8();
extern unsigned int iStack_1bc;
extern unsigned int iStack_1d8;
extern unsigned int iStack_1fc;
extern unsigned int lbl_821CA75C;
extern unsigned int lbl_83156AA0;
extern unsigned int uStack_1d4;
extern unsigned int uStack_1dc;
extern unsigned int uStack_1e8;
extern unsigned int uStack_1ec;
extern unsigned int uStack_1f0;
extern unsigned int uStack_200;


undefined8 fn_8259A958(int param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uStack_200;
  int iStack_1fc;
  undefined4 auStack_1f8 [2];
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined8 uStack_1e8;
  int *piStack_1e0;
  undefined4 uStack_1dc;
  int iStack_1d8;
  undefined4 uStack_1d4;
  code *pcStack_1d0;
  undefined1 auStack_1c0 [4];
  int iStack_1bc;
  undefined1 auStack_1b0 [32];
  undefined1 auStack_190 [32];
  undefined1 auStack_170 [368];
  
  if (*(int *)(param_1 + 0x94) == 2) {
    uStack_1dc = 0;
    iStack_1d8 = 0;
    iVar1 = *(int *)lbl_83156AA0;
    uVar2 = fn_82811400(auStack_190,4);
    lVar3 = (**(code **)(iVar1 + 0xc))(lbl_83156AA0,0x1b8,uVar2);
    if (lVar3 == 0) {
      uVar2 = 0;
    }
    else {
      auStack_1f8[0] = 0;
      uStack_1e8 = 0;
      uStack_1f0 = 0;
      uStack_200 = 0;
      uVar2 = fn_827D9670(auStack_1b0,&uStack_1f0,&uStack_1e8,auStack_1f8);
      uVar2 = fn_8259A3A8(lVar3,param_2,*(undefined4 *)(param_1 + 0x70),&uStack_200,uVar2,1);
    }
    uStack_1d4 = (undefined4)uVar2;
    piStack_1e0 = (int *)fn_8265C9E0(0x44);
    if (piStack_1e0 == (int *)0x0) {
      piStack_1e0 = (int *)0x0;
    }
    else {
      uStack_200 = 0;
      iStack_1fc = 0;
      fn_82517978(&uStack_200,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),1);
      iVar1 = iStack_1fc;
      uStack_1f0 = 0;
      uStack_1ec = 0;
      fn_82517978(&uStack_1f0,uStack_200,iStack_1fc,0);
      fn_827DE858(piStack_1e0,&uStack_1f0,uVar2);
      piStack_1e0[5] = 0;
      piStack_1e0[9] = 0;
      piStack_1e0[0xd] = 0;
      *piStack_1e0 = (int)&lbl_821CA75C;
      piStack_1e0[0xf] = 1;
      piStack_1e0[0x10] = 0;
      if (iVar1 != 0) {
        fn_822315A0(iVar1);
      }
    }
    (**(code **)(*piStack_1e0 + 4))(piStack_1e0,2,0);
    uVar2 = fn_827D5158(auStack_1c0);
    fn_823F2E20(&uStack_1dc,uVar2);
    if (iStack_1bc != 0) {
      fn_822315A0();
    }
    pcStack_1d0 = fn_8259B778;
    fn_8259BC00(param_1 + 0x78,&piStack_1e0);
    if (iStack_1d8 != 0) {
      fn_822315A0();
    }
    uVar2 = 1;
  }
  else {
    if (*(int *)(param_1 + 0x94) == 1) {
      auStack_1f8[0] = 0;
      fn_82F67FE8(param_2 + 0x108,0xffffffff821c557c,auStack_1f8);
      uStack_200 = auStack_1f8[0];
                    /* WARNING: Subroutine does not return */
      fn_82A1EFC0(auStack_170,0,0x134);
    }
    uVar2 = 0;
  }
  return uVar2;
}

