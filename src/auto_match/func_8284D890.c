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
extern unsigned int *auStack_90;
extern int fn_82817C98();
extern int fn_828182C0();
extern int fn_82F6DCE0();
extern unsigned int uStack_2d;


undefined8 fn_8284D890(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int aiStack_a0 [4];
  undefined1 auStack_90 [99];
  undefined1 uStack_2d;
  
  aiStack_a0[0] = 0;
  fn_82F6DCE0(auStack_90,100,0xffffffff8201f554,param_2,param_3);
  uStack_2d = 0;
  if (((*(int *)(param_1 + 0x138) != 0) &&
      (iVar1 = *(int *)(*(int *)(param_1 + 0x138) + 0x28), iVar1 != 0)) &&
     (fn_828182C0(iVar1,auStack_90,0,aiStack_a0), aiStack_a0[0] != 0)) {
    fn_82817C98(aiStack_a0[0],param_4);
    return 1;
  }
  return 0;
}

