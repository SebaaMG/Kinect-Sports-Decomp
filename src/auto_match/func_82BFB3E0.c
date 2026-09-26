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
extern int fn_82BF3A88();
extern int fn_82BFA8D8();
extern int fn_82BFABC8();


void fn_82BFB3E0(int param_1)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_20 [16];
  
  fn_82BFA8D8(auStack_20);
  pcVar1 = *(char **)(param_1 + 0xc);
  if ((((pcVar1 != (char *)0x0) && (*pcVar1 != '\0')) &&
      (iVar2 = *(int *)(param_1 + 0x10), iVar2 != 0)) && (*(int *)(iVar2 + 0xc) != 0)) {
    iVar2 = fn_82BF3A88(pcVar1,*(undefined4 *)(iVar2 + 8));
    uVar3 = 1;
    if (iVar2 != 0) goto LAB_82bfb444;
  }
  uVar3 = 2;
LAB_82bfb444:
  *(undefined4 *)(param_1 + 8) = uVar3;
  fn_82BFABC8(auStack_20);
  return;
}

