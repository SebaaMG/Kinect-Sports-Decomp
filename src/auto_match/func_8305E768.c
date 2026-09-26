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
extern unsigned int *auStack_60;
extern int fn_8305E188();
extern int fn_8305F7A0();
extern int fn_83060570();
extern int fn_83066788();
extern int fn_83066E20();
extern int fn_83066F18();


void fn_8305E768(undefined8 param_1,int param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [80];
  
  fn_8305E188(param_2,param_2 + 0x34);
  uVar1 = fn_8305F7A0(*(undefined4 *)(param_2 + 0x28),**(undefined4 **)(param_2 + 0x2c));
  fn_83066F18(auStack_50,param_2 + 0x34,uVar1);
  iVar4 = 1;
  if (1 < *(int *)(param_2 + 0x30)) {
    iVar5 = 4;
    do {
      uVar1 = fn_8305F7A0(*(undefined4 *)(param_2 + 0x28),
                           *(undefined4 *)(*(int *)(param_2 + 0x2c) + iVar5));
      iVar2 = fn_83066788(param_1,auStack_50,uVar1);
      if (iVar2 != 2) {
        uVar1 = fn_8305F7A0(*(undefined4 *)(param_2 + 0x28),
                             *(undefined4 *)(*(int *)(param_2 + 0x2c) + iVar5));
        fn_83066E20(auStack_50,uVar1,auStack_60);
        uVar3 = fn_83060570(*(undefined4 *)(param_2 + 0x28),auStack_60);
        *(undefined4 *)(*(int *)(param_2 + 0x2c) + iVar5) = uVar3;
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 4;
    } while (iVar4 < *(int *)(param_2 + 0x30));
  }
  return;
}

