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
extern int fn_82AD6090();
extern int fn_82B4B048();


void fn_82B50698(int param_1,undefined4 param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  fn_82B4B048(*(undefined4 *)(param_1 + 4));
  puVar1 = *(uint **)(param_1 + 4);
  if ((puVar1[1] & 1) == 0) {
    uVar3 = *puVar1 & 0xfffffffe;
    iVar4 = uVar3 - 4;
    if ((iVar4 != 0) && (*(int *)(uVar3 + 4) + 1U <= *(uint *)(uVar3 + 8))) goto code_r0x82b506fc;
  }
  iVar4 = fn_82AD6090(puVar1,1);
code_r0x82b506fc:
  iVar2 = *(int *)(iVar4 + 8);
  *(int *)(iVar4 + 8) = iVar2 + 1;
  *(undefined4 *)((iVar2 + 4) * 4 + iVar4) = param_2;
  return;
}

