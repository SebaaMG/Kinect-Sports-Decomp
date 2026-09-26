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
extern int fn_82E5A4E0();
extern int fn_82E5B290();
extern unsigned int lbl_8202E618;
extern unsigned int lbl_8202E61C;
extern unsigned int lbl_8202E620;
extern unsigned int lbl_8202E624;
extern unsigned int uStack_54;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;
extern unsigned int uStack_6e;
extern unsigned int uStack_70;


longlong fn_82E51BF8(int *param_1,ulonglong param_2)

{
  longlong lVar1;
  int iVar2;
  ushort uVar3;
  ulonglong uVar4;
  undefined2 uStack_70;
  ushort uStack_6e;
  int aiStack_6c [3];
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  
  if ((param_2 & 0xffffffff) == 0) {
    lVar1 = -0x7fffbffd;
  }
  else {
    uVar4 = 0;
    uStack_6e = 0;
    uStack_60 = lbl_8202E618;
    uStack_5c = lbl_8202E61C;
    aiStack_6c[0] = 0;
    uStack_58 = lbl_8202E620;
    uStack_70 = 0xffff;
    uStack_54 = lbl_8202E624;
    lVar1 = (**(code **)(*param_1 + 0xa4))(param_1);
    if (((-1 < lVar1) && (lVar1 = fn_82E5A4E0(param_2,&uStack_6e), -1 < lVar1)) &&
       (uVar3 = 0, uStack_6e != 0)) {
      do {
        uStack_70 = 0xffff;
        aiStack_6c[0] = 0;
        uStack_60 = lbl_8202E618;
        uStack_5c = lbl_8202E61C;
        uStack_58 = lbl_8202E620;
        uStack_54 = lbl_8202E624;
        if ((uVar4 & 0xffffffff) != 0) {
          fn_82E4FE40(uVar4);
        }
        lVar1 = fn_82E5B290(param_2,uVar3,&uStack_60,&uStack_70,aiStack_6c,0);
        if ((lVar1 < 0) && ((int)lVar1 != -0x3ff2c94f)) {
          return lVar1;
        }
        if (aiStack_6c[0] == 0) {
          uVar4 = 0;
          iVar2 = 0;
        }
        else {
          uVar4 = fn_82E50BE8(aiStack_6c[0],0,0,0,0);
          if (uVar4 == 0) {
            lVar1 = -0x7ff8fff2;
LAB_82e51dcc:
            if ((uVar4 & 0xffffffff) == 0) {
              return lVar1;
            }
            fn_82E4FE40(uVar4);
            return lVar1;
          }
          lVar1 = fn_82E5B290(param_2,uVar3,&uStack_60,&uStack_70,aiStack_6c,uVar4);
          iVar2 = aiStack_6c[0];
          if (lVar1 < 0) goto LAB_82e51dcc;
        }
        lVar1 = (**(code **)(*param_1 + 0xa0))
                          (param_1,CONCAT44(uStack_60,uStack_5c),CONCAT44(uStack_58,uStack_54),
                           uStack_70,uVar4,iVar2);
        if ((lVar1 < 0) || (uVar3 = uVar3 + 1, uStack_6e <= uVar3)) goto LAB_82e51dcc;
      } while( true );
    }
  }
  return lVar1;
}

