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
extern int fn_822315A0();
extern int fn_8266C540();
extern int fn_8266C630();
extern int fn_8266D9F0();
extern int fn_8266EC00();
extern int fn_8266F580();
extern int fn_8266F680();
extern int fn_8266F688();
extern int fn_8266F6A0();
extern int fn_8266F6B0();
extern int fn_82670438();
extern unsigned int iStack_4c;
extern unsigned int iStack_50;


void fn_8266EFC0(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iStack_50;
  int iStack_4c;
  
  (**(code **)(**(int **)(param_1 + 0x24) + 0x10))();
  if (*(int *)(param_1 + 0xec) != 0) {
    if (*(int *)(param_1 + 0xd8) != *(int *)(param_1 + 0xdc)) {
      fn_8266EC00(*(int *)(param_1 + 0xd8),*(int *)(param_1 + 0xdc),0,0);
    }
    *(undefined4 *)(param_1 + 0xec) = 0;
  }
  fn_8266C540(param_1);
  for (iVar5 = *(int *)(param_1 + 0xd8); iVar5 != *(int *)(param_1 + 0xdc); iVar5 = iVar5 + 0xc) {
    fn_8266D9F0(&iStack_50,iVar5);
    iVar1 = iStack_50;
    if (((((iStack_50 != 0) && (iVar2 = fn_8266F580(iStack_50), iVar2 == 0)) &&
         (-((*(uint *)(iVar5 + 8) < 2) - 1) == param_2)) &&
        ((iVar2 = fn_8266F688(iVar1), param_3 == 0 ||
         (iVar3 = fn_8266F680(iVar1), iVar3 != 0)))) &&
       ((iVar2 == 0 || ((iVar2 == param_4 || (param_4 == 0)))))) {
      iVar2 = fn_8266F6A0(iVar1);
      if ((iVar2 == 0) &&
         (uVar4 = fn_8266F6B0(iVar1), (uVar4 & *(uint *)(param_1 + 0x1d8)) == 0)) {
        fn_82670438(iVar1,*(undefined4 *)(param_1 + 0xcc));
      }
    }
    if (iStack_4c != 0) {
      fn_822315A0();
    }
  }
  fn_8266C630(param_1);
  (**(code **)(**(int **)(param_1 + 0x24) + 0x14))();
  return;
}

