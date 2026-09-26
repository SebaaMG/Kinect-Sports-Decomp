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
extern unsigned int *auStack_210;
extern unsigned int *auStack_220;
extern int fn_82CED958();
extern int fn_82CEDB38();
extern int fn_82CEDC88();
extern int fn_82CEE578();
extern int fn_82D2B1E8();
extern unsigned int *lbl_8323B464;


bool fn_82D20378(undefined8 param_1,char param_2)

{
  undefined8 in_r0;
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined1 auStack_220 [16];
  undefined1 auStack_210 [512];
  
  uVar1 = fn_82D2B1E8(param_1,1);
  if ((param_2 != '\0') && ((int)uVar1 != 0)) {
    fn_82CEE578(auStack_220,auStack_210,0x200);
    uVar2 = fn_82CEDB38(auStack_220,0xffffffff82134954);
    uVar1 = fn_82CEDC88(uVar2,uVar1);
    fn_82CEDB38(uVar1,0xffffffff821c24f0);
    iVar3 = (**(code **)(*lbl_8323B464 + 0xc))
                      (lbl_8323B464,3,0x4c5c2afa,auStack_210,0xffffffff8213492c,0x98d);
    if (iVar3 != 0) {
      trapWord(0x1f,in_r0,0x16);
    }
                    /* WARNING: Subroutine does not return */
    fn_82CED958(auStack_220);
  }
  return (int)uVar1 == 0;
}

