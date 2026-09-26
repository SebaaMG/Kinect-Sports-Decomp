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
extern int fn_828B5580();
extern int fn_828B55B0();
extern int fn_828B5C88();
extern int fn_828BEFD0();


void fn_828BD5C8(int *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  char cVar3;
  undefined1 auStack_30 [48];
  
  uVar2 = (**(code **)(*param_1 + 4))();
  fn_828BEFD0(uVar2,param_2);
  cVar3 = (**(code **)(*param_1 + 0x70))(param_1);
  if (cVar3 != '\0') {
    iVar1 = param_1[0x1b];
    fn_828B5580(auStack_30,param_1 + 0x18);
    fn_828B5C88(auStack_30,iVar1,param_2);
    fn_828B55B0(auStack_30);
  }
  (**(code **)(*param_1 + 0x50))(param_1,param_2);
  return;
}

