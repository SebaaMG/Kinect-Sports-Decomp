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
extern int fn_8287D6D8();
extern int fn_828821A0();
extern int fn_82882218();
extern unsigned int iStack_1c;
extern unsigned int lbl_83211898;
extern unsigned int uStack_20;


void fn_8287DAF8(int param_1,int param_2)

{
  undefined4 uVar1;
  char cVar2;
  undefined4 uStack_20;
  int iStack_1c;
  
  uVar1 = *(undefined4 *)(param_2 + 0x18);
  cVar2 = fn_828821A0(uVar1);
  if ((cVar2 == '\0') && (cVar2 = fn_82882218(uVar1), cVar2 == '\0')) {
    uStack_20 = uVar1;
    fn_8287D6D8(&iStack_1c,param_1 + 0xf0,&uStack_20);
    lbl_83211898 = lbl_83211898 + 1;
    *(int *)(iStack_1c + 0x40) = *(int *)(iStack_1c + 0x40) + 1;
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
  }
  return;
}

