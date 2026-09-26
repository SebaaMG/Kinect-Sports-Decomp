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
extern int fn_8289F160();
extern unsigned int uStack_20;


undefined4 fn_828B0488(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uStack_20;
  int aiStack_1c [3];
  
  uStack_20 = *(undefined4 *)(param_1 + 0x10);
  iVar1 = *(int *)(param_1 + 0x14);
  fn_8289F160(aiStack_1c,iVar1 + 0x21c,&uStack_20);
  uVar2 = 0;
  if (aiStack_1c[0] != *(int *)(iVar1 + 0x220)) {
    uVar2 = *(undefined4 *)(aiStack_1c[0] + 0x10);
  }
  return uVar2;
}

