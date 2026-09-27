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
extern int fn_8223AAC0();
extern unsigned int iStack_2c;
extern unsigned int uStack_30;


void fn_82359620(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  char cVar5;
  struct { undefined4 first; int second; } stack_pair_30;

  
  iVar1 = param_2[1];
  uVar2 = *param_2;
  stack_pair_30.first = 0;
  stack_pair_30.second = 0;
  uVar3 = stack_pair_30.first;
  iVar4 = stack_pair_30.second;
  if (((iVar1 != 0) &&
      (cVar5 = fn_8223AAC0(iVar1), uVar3 = stack_pair_30.first, iVar4 = stack_pair_30.second, cVar5 != '\0')) &&
     (uVar3 = uVar2, iVar4 = iVar1, stack_pair_30.second != 0)) {
    fn_822315A0();
  }
  stack_pair_30.second = iVar4;
  stack_pair_30.first = uVar3;
  (**(code **)(*(int *)(param_1 + 0x40) + 4))(param_1 + 0x40,&stack_pair_30.first);
  return;
}

