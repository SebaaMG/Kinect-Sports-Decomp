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
extern unsigned int *auStack_20;
extern int fn_82230040();
extern int fn_822300A0();
extern int fn_8265C9E0();
extern unsigned int iStack_18;
extern unsigned int uStack00000014;
extern unsigned int uStack0000001c;


int fn_82661B50(uint param_1,undefined4 param_2)

{
  uint uStack00000014;
  undefined4 uStack0000001c;
  undefined1 auStack_20 [8];
  int iStack_18;
  
  iStack_18 = 0;
  if ((param_1 != 0) &&
     ((uStack00000014 = param_1, uStack0000001c = param_2, 0xaaaaaaa < param_1 ||
      (iStack_18 = fn_8265C9E0((ulonglong)param_1 * 0x18), iStack_18 == 0)))) {
    fn_822300A0(auStack_20,0);
                    /* WARNING: Subroutine does not return */
    fn_82230040();
  }
  return iStack_18;
}

