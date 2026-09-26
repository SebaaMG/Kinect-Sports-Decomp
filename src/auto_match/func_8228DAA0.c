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
extern unsigned int *auStack_142e;
extern int fn_8229E090();
extern int fn_82F691F0();
extern unsigned int lbl_832659CD;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_8228DAA0(int param_1,undefined8 param_2,int param_3)

{
  undefined1 auStack_142e [5166];
  
  if (*(int *)(param_1 + 0x178) != 0) {
    fn_8229E090(*(int *)(param_1 + 0x178),0,1);
    *(undefined4 *)(param_1 + 0x178) = 0;
  }
  *(undefined4 *)(param_1 + 0x188) = 0;
  if ((param_3 != 0) && (lbl_832659CD != '\0')) {
                    /* WARNING: Subroutine does not return */
    fn_82F691F0(auStack_142e,0,0x1fe);
  }
  return;
}

