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
extern int fn_82468470();
extern int fn_82865170();
extern int fn_82866400();
extern int fn_82872B10();
extern unsigned int uStack_20;


undefined8 fn_82871C50(int param_1,undefined4 param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 uStack_20;
  int aiStack_1c [3];
  
  uStack_20 = param_2;
  fn_82872B10(aiStack_1c,**(undefined4 **)(param_1 + 8),*(undefined4 **)(param_1 + 8),
                    &uStack_20);
  if (aiStack_1c[0] == *(int *)(param_1 + 8)) {
    uVar1 = 0xffffffffa0110000;
  }
  else {
    fn_82468470(aiStack_1c,param_1 + 4);
    fn_82865170();
    iVar2 = fn_82866400();
    uVar1 = 0x20110000;
    *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + -1;
  }
  return uVar1;
}

