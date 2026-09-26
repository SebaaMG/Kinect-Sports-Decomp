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
extern unsigned int *auStack_28;
extern unsigned int *auStack_30;
extern int fn_8288C978();
extern int fn_8289EE00();
extern int fn_828B5580();
extern int fn_828B55B0();
extern int fn_828B55F8();


void fn_82890F00(longlong param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [40];
  
  iVar1 = (**(code **)(*param_2 + 8))(param_2);
  if (*(char *)(*(int *)(iVar1 + 0x10) + 0x14) != '\0') {
    fn_828B5580(auStack_30,param_2 + 5);
    uVar2 = fn_828B55F8(auStack_30);
    iVar1 = fn_8289EE00(param_1 + 0x6c);
    if ((undefined4 *)(iVar1 + 0xc) != (undefined4 *)0x0) {
      *(undefined4 *)(iVar1 + 0xc) = uVar2;
      *(int **)(iVar1 + 0x10) = param_2;
    }
    fn_8288C978(auStack_28,param_1 + 0x6c,iVar1,0);
    fn_828B55B0(auStack_30);
  }
  return;
}

