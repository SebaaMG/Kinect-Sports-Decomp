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
extern int fn_82C10AD0();
extern int fn_82C10B28();
extern int fn_82F691F0();


undefined8 fn_82C28E48(void)

{
  undefined8 uVar1;
  undefined8 in_r6;
  int aiStack_40 [16];
  
  aiStack_40[0] = 0;
  uVar1 = fn_82C10AD0(in_r6,0x1e,0x90,aiStack_40);
  if (-1 < (int)uVar1) {
                    /* WARNING: Subroutine does not return */
    fn_82F691F0(aiStack_40[0],0,0x90);
  }
  if (aiStack_40[0] != 0) {
    fn_82C10B28(in_r6,0x1e,aiStack_40);
  }
  return uVar1;
}

