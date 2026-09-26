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


undefined8 fn_82E07A88(undefined8 param_1,undefined8 param_2,char param_3,int *param_4)

{
  byte bVar1;
  int iVar3;
  undefined8 uVar2;
  undefined1 auStack_240 [16];
  undefined1 auStack_230 [560];
  
  iVar3 = fn_82E07840(param_1,param_2,0xffffffff8323f89c);
  if (iVar3 == 0) {
    iVar3 = fn_82E07840(param_1,param_2,0xffffffff8323f86c);
    if (iVar3 != 0) {
      bVar1 = **(byte **)(iVar3 + 8);
      *param_4 = (uint)bVar1 + (-(uint)(bVar1 == 0) - (bVar1 - 1));
      return 0;
    }
    iVar3 = fn_82E07840(param_1,param_2,0xffffffff8323f46c);
    if (iVar3 == 0) {
      if (param_3 == '\0') {
        return 1;
      }
      fn_82CEE578(auStack_240,auStack_230,0x200);
      uVar2 = fn_82CEDB38(auStack_240,0xffffffff82149ee8);
      uVar2 = fn_82CEDB38(uVar2,param_2);
      uVar2 = fn_82CEDB38(uVar2,0xffffffff82149ec8);
      uVar2 = fn_82CEE128(uVar2,param_1);
      fn_82CEDB38(uVar2,0xffffffff82149eb4);
      (**(code **)(*lbl_8323B464 + 0xc))
                (lbl_8323B464,1,0xffffffffabbaab81,auStack_230,0xffffffff82149e90,0x5a);
                    /* WARNING: Subroutine does not return */
      fn_82CED958(auStack_240);
    }
  }
  *param_4 = **(int **)(iVar3 + 8);
  return 0;
}

