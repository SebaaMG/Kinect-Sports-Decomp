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
extern unsigned int *auStack_5c0;
extern int fn_82A1EFC0();
extern unsigned int uStack_48;


undefined8 fn_829DE440(int param_1,int param_2,int *param_3,int param_4)

{
  undefined1 auStack_5c0 [1400];
  undefined8 uStack_48;
  
  if ((((param_1 != 0) && (param_2 != 0)) && (param_3 != (int *)0x0)) &&
     (((param_4 != 0 && (*param_3 < param_3[2])) && (param_3[1] < param_3[3])))) {
    uStack_48 = 0;
                    /* WARNING: Subroutine does not return */
    fn_82A1EFC0(auStack_5c0,0,0x578);
  }
  return 0xffffffff80070057;
}

