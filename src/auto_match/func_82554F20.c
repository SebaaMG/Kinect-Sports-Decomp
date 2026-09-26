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
extern int fn_82555040();
extern int fn_82A427B0();
extern int fn_82BFF338();
extern unsigned int lbl_821CA460;
extern unsigned int lbl_8320A898;
extern unsigned int *lbl_8327FAFC;
extern unsigned int *lbl_8327FBB8;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;
extern unsigned int uStack_74;
extern unsigned int uStack_78;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;
extern unsigned int uStack_88;


undefined8 fn_82554F20(longlong param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  int iVar2;
  undefined8 uVar1;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  
  if ((lbl_8327FAFC != (int *)0x0) ||
     ((iVar2 = fn_82A427B0(0xffffffff8327fafc,0,4), -1 < iVar2 &&
      (iVar2 = (**(code **)(*lbl_8327FAFC + 0x28))(lbl_8327FAFC,0xffffffff8327fbb8,0,0,0,0,0),
      -1 < iVar2)))) {
    (**(code **)(*lbl_8327FBB8 + 0x30))((double)lbl_821CA460);
    puVar3 = &uStack_88;
    lVar4 = 9;
    do {
      puVar3 = puVar3 + 1;
      *puVar3 = 0;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    uStack_7c = 2;
    uStack_78 = 2;
    uStack_80 = 3;
    uStack_70 = 2;
    uStack_74 = 5;
    uStack_6c = 5;
    uStack_60 = param_2;
    uStack_5c = param_3;
    iVar2 = fn_82BFF338(lbl_8320A898,lbl_8327FAFC,&uStack_80,param_1 + 0x18);
    if (-1 < iVar2) {
      uVar1 = fn_82555040(param_1,param_4);
      return uVar1;
    }
  }
  return 0;
}

