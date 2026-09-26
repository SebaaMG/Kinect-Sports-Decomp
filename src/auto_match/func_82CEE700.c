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
extern int fn_82CEE578();
extern unsigned int *lbl_8323B464;


void fn_82CEE700(undefined8 param_1)

{
  undefined8 in_r0;
  int iVar1;
  undefined1 auStack_220 [16];
  undefined1 auStack_210 [512];
  
  fn_82CEE578(auStack_220,auStack_210,0x200);
  fn_82CEDB38(auStack_220,param_1);
  iVar1 = (**(code **)(*lbl_8323B464 + 0xc))
                    (lbl_8323B464,3,0x2636fe25,auStack_210,0xffffffff82132e28,0x28);
  if (iVar1 != 0) {
    trapWord(0x1f,in_r0,0x16);
  }
  fn_82CED958(auStack_220);
  return;
}

