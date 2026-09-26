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
extern int fn_825224E8();
extern int fn_82522D98();
extern unsigned int iStack00000024;
extern unsigned int lbl_832767C8;
extern unsigned int uStack0000001c;


void fn_82521DC8(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined4 uStack0000001c;
  int iStack00000024;
  
  uStack0000001c = (undefined4)param_2;
  iStack00000024 = param_3;
  if (param_3 != 0) {
                    /* WARNING: Subroutine does not return */
    fn_82522D98(0x14);
  }
  fn_825224E8(lbl_832767C8,param_2,2,0xffffffff82522050,0xffffffff825220c8,param_1);
  return;
}

