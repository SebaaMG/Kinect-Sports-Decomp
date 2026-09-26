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
extern int fn_829E82D0();
extern int fn_829E8378();
extern int fn_82A28568();
extern unsigned int lbl_832179FC;


ulonglong fn_829E65C0(int param_1)

{
  int iVar2;
  ulonglong uVar1;
  char cVar3;
  
  iVar2 = fn_82A28568(*(undefined4 *)(lbl_832179FC + 0x8f4cc),0,0x14);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = fn_829E8378();
  }
  *(int *)(param_1 + 0x18) = iVar2;
  if (iVar2 == 0) {
    uVar1 = 0xffffffff8007000e;
  }
  else {
    cVar3 = fn_829E82D0();
    uVar1 = -(ulonglong)(cVar3 == '\0') & 0xffffffff8007000e;
  }
  return uVar1;
}

