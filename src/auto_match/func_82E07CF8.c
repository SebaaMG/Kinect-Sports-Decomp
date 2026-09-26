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
extern unsigned int *auStack_240;
extern int fn_82CED958();
extern int fn_82CEDB38();
extern int fn_82CEE128();
extern int fn_82CEE578();
extern int fn_82E07840();
extern unsigned int *lbl_8323B464;


undefined8 fn_82E07CF8(undefined8 param_1,undefined8 param_2,char param_3,undefined4 *param_4)

{
  int iVar2;
  undefined8 uVar1;
  undefined1 auStack_240 [16];
  undefined1 auStack_230 [560];
  
  iVar2 = fn_82E07840(param_1,param_2,0xffffffff8323f2bc);
  if (iVar2 == 0) {
    if (param_3 != '\0') {
      fn_82CEE578(auStack_240,auStack_230,0x200);
      uVar1 = fn_82CEDB38(auStack_240,0xffffffff82149f10);
      uVar1 = fn_82CEDB38(uVar1,param_2);
      uVar1 = fn_82CEDB38(uVar1,0xffffffff82149ec8);
      uVar1 = fn_82CEE128(uVar1,param_1);
      fn_82CEDB38(uVar1,0xffffffff82149eb4);
      (**(code **)(*lbl_8323B464 + 0xc))
                (lbl_8323B464,1,0xffffffffabbaab81,auStack_230,0xffffffff82149e90,0x91);
                    /* WARNING: Subroutine does not return */
      fn_82CED958(auStack_240);
    }
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
    *param_4 = **(undefined4 **)(iVar2 + 8);
  }
  return uVar1;
}

