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
extern unsigned int *auStack_220;
extern unsigned int *auStack_230;
extern int fn_82CED958();
extern int fn_82CEDB38();
extern int fn_82CEE578();
extern int fn_82CFBBF0();
extern int fn_82E0E658();
extern unsigned int *lbl_8323B464;


void fn_82E12D08(int param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  int iVar4;
  undefined8 uVar3;
  undefined1 auStack_230 [16];
  undefined1 auStack_220 [520];
  
  uVar2 = fn_82E0E658();
  iVar4 = fn_82CFBBF0(*(undefined4 *)(param_1 + 0x14),uVar2);
  if (iVar4 != 0) {
    fn_82CEE578(auStack_230,auStack_220,0x200);
    uVar2 = fn_82E0E658();
    uVar1 = *(undefined4 *)(param_1 + 0x14);
    uVar3 = fn_82CEDB38(auStack_230,0xffffffff8214b220);
    uVar3 = fn_82CEDB38(uVar3,uVar1);
    uVar3 = fn_82CEDB38(uVar3,0xffffffff8214b200);
    uVar2 = fn_82CEDB38(uVar3,uVar2);
    fn_82CEDB38(uVar2,0xffffffff8214b1b8);
    (**(code **)(*lbl_8323B464 + 0xc))
              (lbl_8323B464,1,0x7aef6c06,auStack_220,0xffffffff8214b194,0x76);
                    /* WARNING: Subroutine does not return */
    fn_82CED958(auStack_230);
  }
  return;
}

