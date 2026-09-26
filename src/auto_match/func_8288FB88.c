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
extern unsigned int *auStack_30;
extern int fn_8243CE60();
extern int fn_828C88C0();
extern int fn_83062700();


void fn_8288FB88(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_30 [48];
  
  uVar1 = fn_828C88C0(*(undefined4 *)(param_1 + 0xd4),0x8000);
  iVar2 = fn_83062700(param_1 + 0xc0);
  if ((undefined4 *)(iVar2 + 0xc) != (undefined4 *)0x0) {
    *(undefined4 *)(iVar2 + 0x10) = uVar1;
    *(undefined4 *)(iVar2 + 0xc) = 0x8000;
  }
  fn_8243CE60(auStack_30,param_1 + 0xc0,iVar2,0);
  *(undefined1 *)(param_1 + 0xd0) = 1;
  return;
}

