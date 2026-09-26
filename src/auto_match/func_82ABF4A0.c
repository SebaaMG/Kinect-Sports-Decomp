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
extern unsigned int *auStack_50;
extern int fn_82635EE8();
extern int fn_82AA66A8();
extern int fn_82ABDD90();
extern int fn_82ABF3A0();
extern unsigned int uStack_48;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 fn_82ABF4A0(int param_1,undefined8 param_2,int param_3,undefined8 param_4,int *param_5)

{
  uint uVar1;
  int iVar2;
  undefined1 auStack_50 [8];
  undefined4 uStack_48;
  
  if (*param_5 < 0) {
    uVar1 = *(uint *)(param_3 + 8) >> 7 & 0x7f;
    if ((uVar1 != 0x7b) &&
       ((uVar1 != 0x75 ||
        (iVar2 = fn_82ABDD90(param_1,0x75,0,0), (*(uint *)(iVar2 + param_3 + -0x10) & 7) != 7))))
    {
                    /* WARNING: Subroutine does not return */
      fn_82AA66A8(param_1,0x12c0);
    }
    uStack_48 = 0x2000000;
    param_4 = fn_82635EE8(*(undefined4 *)(param_1 + 0x300),auStack_50);
    fn_82ABF3A0(param_1,1,param_4,param_2,param_3);
    *param_5 = 1;
  }
  return param_4;
}

