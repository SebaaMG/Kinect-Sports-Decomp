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
extern unsigned int *auStack_230;
extern unsigned int *auStack_460;
extern unsigned int *auStack_478;
extern unsigned int *auStack_4a4;
extern unsigned int *auStack_4bc;
extern int fn_82CE09B8();
extern int fn_82CE09D0();
extern int fn_82CE0BE8();
extern int fn_82CE5410();
extern int fn_82CE6310();
extern int fn_82CED958();
extern int fn_82CEE238();
extern int fn_82CEE578();
extern int fn_82D04B90();
extern unsigned int *lbl_8323B464;
extern unsigned int uStack_33c;
extern unsigned int uStack_340;
extern unsigned int uStack_44c;
extern unsigned int uStack_450;
extern unsigned int uStack_45c;
extern unsigned int uStack_45e;
extern unsigned int uStack_47c;
extern unsigned int uStack_480;
extern unsigned int uStack_4a8;
extern unsigned int uStack_4ac;


undefined8 fn_82D05F78(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 auStack_4bc [3];
  undefined1 *puStack_4b0;
  undefined4 uStack_4ac;
  uint uStack_4a8;
  undefined1 auStack_4a4 [36];
  undefined4 uStack_480;
  undefined4 uStack_47c;
  undefined1 auStack_478 [24];
  undefined1 auStack_460 [2];
  undefined2 uStack_45e;
  undefined4 uStack_45c;
  undefined4 uStack_450;
  uint uStack_44c;
  undefined4 uStack_340;
  uint uStack_33c;
  undefined1 auStack_230 [560];
  
  uStack_44c = *(uint *)(param_1 + 0x20);
  if (uStack_44c != 0xffffffff) {
    uStack_450 = 1;
    uStack_340 = 1;
    uStack_480 = 0;
    uStack_47c = 0;
    uStack_33c = uStack_44c;
    iVar1 = fn_82CE09D0((ulonglong)uStack_44c + 1,&uStack_450,0,&uStack_340,&uStack_480);
    if ((0 < iVar1) &&
       (iVar1 = fn_82CE0BE8(*(undefined4 *)(param_1 + 0x20),&uStack_450), iVar1 != 0)) {
      auStack_4bc[0] = 0x10;
      fn_82CE09B8(*(undefined4 *)(param_1 + 0x20),auStack_460,auStack_4bc);
      puStack_4b0 = auStack_4a4;
      uStack_4ac = 0;
      uStack_4a8 = 0x80000020;
      iVar1 = fn_82CE5410();
      if ((uStack_4a8 & 0x3fffffff) == 0) {
        uVar2 = (uStack_4a8 & 0x3fffffff) << 1;
        if (uVar2 < 2) {
          uVar2 = 1;
        }
        fn_82CE6310(*(undefined4 *)(iVar1 + 0xc),&puStack_4b0,uVar2,1);
      }
      uStack_4ac = 1;
      *puStack_4b0 = 0;
      *puStack_4b0 = 0;
      fn_82D04B90(&puStack_4b0,0xffffffff82134080,uStack_45c,uStack_45e);
      fn_82CEE578(auStack_478,auStack_230,0x200);
      fn_82CEE238(auStack_478,&puStack_4b0);
      (**(code **)(*lbl_8323B464 + 0xc))
                (lbl_8323B464,0,0xffffffffffffffff,auStack_230,0xffffffff82133fbc,0x193);
                    /* WARNING: Subroutine does not return */
      fn_82CED958(auStack_478);
    }
  }
  return 0;
}

