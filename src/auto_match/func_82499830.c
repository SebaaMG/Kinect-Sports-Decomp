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
extern unsigned int *auStack_50;
extern int fn_82491E88();
extern int fn_82492818();
extern int fn_82499730();
extern int fn_82499E30();
extern unsigned int lbl_821BEBB8;
extern unsigned int stack0x00000024;
extern unsigned int uStack00000024;


void fn_82499830(int param_1,undefined8 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uStack00000024;
  undefined **appuStack_a0 [20];
  undefined1 auStack_50 [56];
  
  if (param_4 != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0xc0) + 0x118);
    uStack00000024 = param_3;
    uVar2 = fn_82492818(appuStack_a0,iVar1 + 0x36c,param_3,iVar1 + 0x160,iVar1 + 0x1e0,
                              *(undefined4 *)(iVar1 + 0xb4),*(undefined4 *)(iVar1 + 0x2ec));
    uVar3 = fn_82499E30(param_1 + 0x90,&stack0x00000024);
    fn_82499730(uVar3,uVar2);
    appuStack_a0[0] = &lbl_821BEBB8;
    fn_82491E88(auStack_50);
  }
  return;
}

