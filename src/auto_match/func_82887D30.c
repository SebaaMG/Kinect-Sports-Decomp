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
extern int fn_82887B28();
extern int fn_82887BE8();
extern unsigned int iStack0000001c;
extern unsigned int lbl_83212A1C;
extern unsigned int stack0x0000001c;


bool fn_82887D30(int param_1,int param_2,int param_3)

{
  uint uVar1;
  undefined8 uVar2;
  char *pcVar3;
  bool bVar4;
  uint uVar5;
  int iStack0000001c;
  
  iStack0000001c = param_2;
  uVar2 = fn_82887BE8();
  pcVar3 = (char *)fn_82887B28(uVar2,&stack0x0000001c);
  if (*pcVar3 == '\0') {
    bVar4 = true;
  }
  else {
    uVar5 = *(int *)(*(int *)(param_2 * 4 + param_1) + 0x10) + 1;
    uVar1 = 1 << (*(uint *)(param_2 * 4 + lbl_83212A1C) & 0x3f);
    bVar4 = uVar5 - (uVar5 / uVar1) * uVar1 == param_3;
  }
  return bVar4;
}

