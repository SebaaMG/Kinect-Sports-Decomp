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
extern unsigned int *auStack_38;
extern unsigned int *auStack_40;
extern int fn_822315A0();
extern int fn_8228E658();
extern int fn_82365BD8();
extern int fn_82522588();
extern unsigned int iStack_3c;


void fn_823748D0(int param_1,int param_2)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  ulonglong uVar4;
  undefined1 auStack_40 [4];
  int iStack_3c;
  undefined1 auStack_38 [56];
  
  for (uVar4 = (ulonglong)*(uint *)(param_1 + 0x30);
      (uVar4 & 0xffffffff) != (ulonglong)*(uint *)(param_1 + 0x34); uVar4 = uVar4 + 8) {
    puVar2 = (uint *)fn_82522588(auStack_40,uVar4);
    uVar1 = *puVar2;
    iVar3 = fn_82365BD8(auStack_38,param_2);
    fn_8228E658((ulonglong)uVar1 + 0x24c,iVar3);
    if (*(int *)(iVar3 + 4) != 0) {
      fn_822315A0();
    }
    if (iStack_3c != 0) {
      fn_822315A0();
    }
  }
  if (*(int *)(param_2 + 4) != 0) {
    fn_822315A0();
  }
  return;
}

