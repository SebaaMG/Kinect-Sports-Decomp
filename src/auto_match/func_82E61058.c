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
extern unsigned int *auStack_48;
extern int fn_82A1E228();
extern int fn_82E5FA90();
extern int fn_82E60088();
extern int fn_82E62770();
extern int fn_82E627E0();
extern int fn_82E628C8();
extern int fn_82E628F0();
extern int fn_82E62918();
extern int fn_82E66648();
extern unsigned int lbl_8202E618;
extern unsigned int lbl_8202E61C;
extern unsigned int lbl_8202E620;
extern unsigned int lbl_8202E624;
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;
extern unsigned int uStack_4c;


longlong fn_82E61058(ulonglong param_1,int *param_2,int *param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar4;
  longlong lVar3;
  int *piStack_50;
  undefined4 uStack_4c;
  undefined1 auStack_48 [8];
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  if ((((param_1 & 0xffffffff) == 0) || (param_2 == (int *)0x0)) || (param_3 == (int *)0x0)) {
    lVar3 = -0x7ff8ffa9;
  }
  else {
    piStack_50 = (int *)0x0;
    iVar4 = (**(code **)(*param_3 + 0x10))(param_3,0xffffffff82154aa8,0,&piStack_50);
    if ((-1 < iVar4) ||
       ((lVar3 = (**(code **)(*param_2 + 0x1c))(param_2,0xffffffff82154aa8,&piStack_50), -1 < lVar3
        && (lVar3 = (**(code **)(*param_3 + 0x14))(param_3,piStack_50,0), -1 < lVar3)))) {
      piVar1 = piStack_50;
      uStack_40 = lbl_8202E618;
      uStack_3c = lbl_8202E61C;
      uStack_38 = lbl_8202E620;
      uStack_34 = lbl_8202E624;
      lVar3 = fn_82E66648(&uStack_40);
      if ((-1 < lVar3) && (lVar3 = fn_82E62770(piVar1,&uStack_40), -1 < lVar3)) {
        fn_82A1E228(auStack_48);
        lVar3 = fn_82E627E0(piVar1,auStack_48);
        if ((-1 < lVar3) && (lVar3 = fn_82E5FA90(param_1,piVar1), -1 < lVar3)) {
          uStack_4c = 0;
          lVar3 = fn_82E60088(param_1,&uStack_4c);
          uVar2 = uStack_4c;
          if ((-1 < lVar3) &&
             ((lVar3 = fn_82E628F0(piVar1,uStack_4c), -1 < lVar3 &&
              (lVar3 = fn_82E62918(piVar1,uVar2), -1 < lVar3)))) {
            lVar3 = fn_82E628C8(piVar1,9);
          }
        }
      }
    }
    if (piStack_50 != (int *)0x0) {
      (**(code **)(*piStack_50 + 8))();
    }
  }
  return lVar3;
}

