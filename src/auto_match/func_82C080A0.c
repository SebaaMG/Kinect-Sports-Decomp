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
extern unsigned int iStack_4c;
extern unsigned int iStack_50;


undefined8 fn_82C080A0(int *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  int iStack_50;
  int iStack_4c;
  int aiStack_48 [18];
  
  iStack_50 = 0;
  iStack_4c = 0;
  aiStack_48[0] = 0;
  uVar1 = fn_82C10AD0(param_3,8,0x290,param_1);
  if (-1 < (int)uVar1) {
                    /* WARNING: Subroutine does not return */
    fn_82F691F0(*param_1,0,0x290);
  }
  if (*param_1 != 0) {
    fn_82C10B28(param_3,8,param_1);
  }
  if (iStack_50 != 0) {
    fn_82C10B28(param_3,8,&iStack_50);
  }
  if (iStack_4c != 0) {
    fn_82C10B28(param_3,8,&iStack_4c);
  }
  if (aiStack_48[0] != 0) {
    fn_82C10B28(param_3,8,aiStack_48);
  }
  return uVar1;
}

