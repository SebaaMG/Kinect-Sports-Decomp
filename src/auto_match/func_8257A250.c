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
extern unsigned int *auStack_220;
extern int fn_82579C28();
extern int fn_8257A320();
extern int fn_8257A660();
extern int fn_82A1F308();
extern int fn_82A1F438();
extern unsigned int iStack_230;


ulonglong fn_8257A250(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  int iVar3;
  ulonglong uVar2;
  int iStack_230;
  int aiStack_22c [3];
  undefined1 auStack_220 [520];
  
  fn_82579C28();
  uVar1 = fn_82A1F308(0);
  iVar3 = fn_82A1F438(uVar1,param_2,aiStack_22c,&iStack_230);
  if (iVar3 == 0) {
    uVar2 = thunk_FUN_82a2b798();
    if (0 < (int)uVar2) {
      uVar2 = uVar2 & 0xffff | 0x80070000;
    }
  }
  else if ((aiStack_22c[0] == 0) || (iStack_230 == 0)) {
    uVar2 = 0xffffffff80070057;
  }
  else {
    do {
      uVar2 = fn_8257A320(aiStack_22c,&iStack_230,auStack_220);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      uVar2 = fn_8257A660(param_1,auStack_220);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
    } while (iStack_230 != 0);
  }
  return uVar2;
}

