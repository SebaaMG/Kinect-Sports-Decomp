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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern int fn_82E4FE40();
extern int fn_82E50BE8();
extern unsigned int lbl_8202E618;
extern unsigned int lbl_8202E61C;
extern unsigned int lbl_8202E620;
extern unsigned int lbl_8202E624;
extern unsigned int uStack_44;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;
extern unsigned int uStack_5e;
extern unsigned int uStack_60;


longlong fn_82E518B8(int *param_1,int *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  ushort uVar4;
  undefined2 uStack_60;
  ushort uStack_5e;
  int aiStack_5c [3];
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  if (param_2 == (int *)0x0) {
    lVar1 = -0x7fffbffd;
  }
  else {
    uStack_5e = 0;
    uStack_50 = lbl_8202E618;
    uStack_60 = 0xffff;
    uStack_4c = lbl_8202E61C;
    uStack_48 = lbl_8202E620;
    aiStack_5c[0] = 0;
    uStack_44 = lbl_8202E624;
    lVar1 = (**(code **)(*param_2 + 0xa4))(param_2);
    if (((-1 < lVar1) && (lVar1 = (**(code **)(*param_1 + 0x98))(param_1,&uStack_5e), -1 < lVar1))
       && (uVar4 = 0, uStack_5e != 0)) {
      while( true ) {
        lVar1 = (**(code **)(*param_1 + 0x9c))(param_1,uVar4,&uStack_50,&uStack_60,0,aiStack_5c);
        if ((lVar1 < 0) && ((int)lVar1 != -0x3ff2c94f)) {
          return lVar1;
        }
        if (aiStack_5c[0] != 0) break;
        uVar2 = 0;
        iVar3 = 0;
LAB_82e51a14:
        lVar1 = (**(code **)(*param_2 + 0xa0))
                          (param_2,CONCAT44(uStack_50,uStack_4c),CONCAT44(uStack_48,uStack_44),
                           uStack_60,uVar2,iVar3);
        if ((uVar2 & 0xffffffff) != 0) {
          fn_82E4FE40(uVar2);
        }
        if ((int)lVar1 < 0) {
          return lVar1;
        }
        uVar4 = uVar4 + 1;
        if (uStack_5e <= uVar4) {
          return lVar1;
        }
      }
      uVar2 = fn_82E50BE8(aiStack_5c[0],0,0,0,0);
      if (uVar2 == 0) {
        lVar1 = -0x7ff8fff2;
      }
      else {
        lVar1 = (**(code **)(*param_1 + 0x9c))(param_1,uVar4,&uStack_50,&uStack_60,uVar2,aiStack_5c)
        ;
        iVar3 = aiStack_5c[0];
        if (-1 < lVar1) goto LAB_82e51a14;
      }
      if ((uVar2 & 0xffffffff) != 0) {
        fn_82E4FE40(uVar2);
      }
    }
  }
  return lVar1;
}

