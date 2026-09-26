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
extern unsigned int *auStack_280;
extern unsigned int *auStack_3e0;
extern unsigned int *auStack_3f0;
extern int fn_82CED958();
extern int fn_82CEE238();
extern int fn_82CEE578();
extern int fn_82D05288();
extern int fn_82D6F1D8();
extern unsigned int *lbl_8323B464;


void fn_82D59888(int param_1)

{
  undefined8 uVar1;
  undefined1 auStack_3f0 [16];
  undefined1 auStack_3e0 [352];
  undefined1 auStack_280 [640];
  
  (**(code **)(*lbl_8323B464 + 0x1c))(lbl_8323B464,0x5e4345e4,0xffffffff82138df4);
  if ((*(int *)(param_1 + 0x1e30) != 0) && (*(int *)(param_1 + 0x1e34) != 0)) {
    uVar1 = fn_82D6F1D8(0);
    fn_82D05288(auStack_3e0,0xffffffff82138d9c,uVar1,0,0,0,0);
    fn_82CEE578(auStack_3f0,auStack_280,0x200);
    fn_82CEE238(auStack_3f0,auStack_3e0);
    (**(code **)(*lbl_8323B464 + 0xc))
              (lbl_8323B464,0,0xffffffffffffffff,auStack_280,0xffffffff82138db8,0x222);
                    /* WARNING: Subroutine does not return */
    fn_82CED958(auStack_3f0);
  }
  return;
}

