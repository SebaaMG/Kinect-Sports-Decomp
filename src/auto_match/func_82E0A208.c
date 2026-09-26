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
extern unsigned int *auStack_250;
extern unsigned int *auStack_260;
extern int fn_82CEA280();
extern int fn_82CED958();
extern int fn_82CED9E8();
extern int fn_82CEDB38();
extern int fn_82CEE578();
extern unsigned int *lbl_8323B464;


void fn_82E0A208(int *param_1,longlong param_2,undefined8 param_3)

{
  int iVar2;
  undefined8 uVar1;
  undefined1 auStack_260 [16];
  undefined1 auStack_250 [592];
  
  if (0 < (int)param_2) {
    do {
      if ((*param_1 != 0) && (param_1[1] == 0)) {
        iVar2 = fn_82CEA280(param_3,*param_1,0);
        param_1[1] = iVar2;
        if (iVar2 == 0) {
          fn_82CEE578(auStack_260,auStack_250,0x200);
          iVar2 = *param_1;
          uVar1 = fn_82CEDB38(auStack_260,0xffffffff8214a6fc);
          uVar1 = fn_82CED9E8(uVar1,iVar2);
          uVar1 = fn_82CEDB38(uVar1,0xffffffff82132f70);
          fn_82CEDB38(uVar1,0xffffffff8214a730);
          (**(code **)(*lbl_8323B464 + 0xc))
                    (lbl_8323B464,1,0x67fde46,auStack_250,0xffffffff8214a7b0,0x5d);
                    /* WARNING: Subroutine does not return */
          fn_82CED958(auStack_260);
        }
      }
      param_2 = param_2 + -1;
      param_1 = param_1 + 2;
    } while (param_2 != 0);
  }
  return;
}

