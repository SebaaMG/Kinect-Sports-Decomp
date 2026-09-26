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
extern unsigned int *auStack_1a0;
extern unsigned int *auStack_3a0;
extern unsigned int *auStack_3b0;
extern int fn_82CE0658();
extern int fn_82CE08A0();
extern int fn_82CED958();
extern int fn_82CEDB38();
extern int fn_82CEE578();
extern unsigned int *lbl_8323B464;
extern unsigned int lbl_8323B524;
extern unsigned int uStack_3b4;
extern unsigned int uStack_3b8;
extern unsigned int uStack_3bc;
extern unsigned int uStack_3c0;


void fn_82D05A88(void)

{
  undefined8 in_r0;
  int iVar1;
  undefined4 uStack_3c0;
  undefined4 uStack_3bc;
  undefined4 uStack_3b8;
  undefined1 uStack_3b4;
  undefined1 auStack_3b0 [16];
  undefined1 auStack_3a0 [512];
  undefined1 auStack_1a0 [400];
  
  if (lbl_8323B524 == '\0') {
    uStack_3bc = 0;
    uStack_3b8 = 0;
    uStack_3b4 = 0;
    uStack_3c0 = 0xd010000;
    fn_82CE0658(&uStack_3c0);
    iVar1 = fn_82CE08A0(0x202,auStack_1a0);
    if (iVar1 == -1) {
      fn_82CEE578(auStack_3b0,auStack_3a0,0x200);
      fn_82CEDB38(auStack_3b0,0xffffffff82133fe4);
      iVar1 = (**(code **)(*lbl_8323B464 + 0xc))
                        (lbl_8323B464,3,0x321825f8,auStack_3a0,0xffffffff82133fbc,0x48);
      if (iVar1 != 0) {
        trapWord(0x1f,in_r0,0x16);
      }
                    /* WARNING: Subroutine does not return */
      fn_82CED958(auStack_3b0);
    }
    lbl_8323B524 = '\x01';
  }
  return;
}

