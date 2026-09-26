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
extern unsigned int *auStack_40;
extern int fn_82880A10();
extern int fn_8289EE00();


void fn_8289F710(longlong param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_40 [64];
  
  iVar1 = param_2[3];
  if (*(char *)((int)param_2 + 0x26) == '\0') {
    uVar3 = (**(code **)(*param_2 + 0xc))(param_2);
    iVar2 = fn_8289EE00(param_1 + 0x1fc);
    if ((int *)(iVar2 + 0xc) != (int *)0x0) {
      *(int *)(iVar2 + 0xc) = iVar1;
      *(int **)(iVar2 + 0x10) = param_2;
    }
    fn_82880A10(auStack_40,param_1 + 0x1fc,iVar2,0);
    iVar2 = fn_8289EE00(param_1 + 0x20c);
    if ((int *)(iVar2 + 0xc) != (int *)0x0) {
      *(int *)(iVar2 + 0xc) = iVar1;
      *(undefined4 *)(iVar2 + 0x10) = uVar3;
    }
    fn_82880A10(auStack_40,param_1 + 0x20c,iVar2,0);
  }
  else {
    iVar2 = fn_8289EE00(param_1 + 0x1fc);
    if ((int *)(iVar2 + 0xc) != (int *)0x0) {
      *(int *)(iVar2 + 0xc) = iVar1;
      *(int **)(iVar2 + 0x10) = param_2;
    }
    fn_82880A10(auStack_40,param_1 + 0x1fc,iVar2,0);
  }
  return;
}

