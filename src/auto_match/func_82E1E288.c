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
extern unsigned int *auStack_125;
extern unsigned int *auStack_140;
extern unsigned int *auStack_150;
extern int fn_82F674A8();
extern int fn_82F68CC0();
extern int fn_82F691F0();


undefined8 fn_82E1E288(char *param_1,undefined8 param_2)

{
  longlong lVar1;
  uint auStack_150 [4];
  undefined1 auStack_140 [27];
  undefined1 auStack_125 [293];
  
  if (*param_1 != '\0') {
    return 1;
  }
  auStack_150[0] = 0;
  lVar1 = fn_82F674A8(auStack_150,param_2,0xffffffff821c550c);
  auStack_150[0] = -(uint)(lVar1 == 0) & auStack_150[0];
  fn_82F68CC0(auStack_140,0xffffffff8214b9e8,0x1b);
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(auStack_125,0,0xe5);
}

