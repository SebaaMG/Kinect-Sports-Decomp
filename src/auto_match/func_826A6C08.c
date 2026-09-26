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
extern int fn_82681898();
extern int fn_826944C8();
extern int fn_826957D0();
extern int fn_82696D38();
extern int fn_826BC950();
extern int fn_826BCE08();
extern unsigned int iStack_20;


void fn_826A6C08(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  int iStack_20;
  int *piStack_1c;
  
  if (0 < *(int *)(param_1 + 0x1c)) {
    uVar1 = *(undefined4 *)(param_1 + 0x18);
    uVar4 = fn_826957D0(param_1,0);
    fn_82696D38(&piStack_1c,uVar4,uVar1,0xffffffffffffffff,0);
    iVar2 = *piStack_1c;
    iStack_20 = 0;
    fn_826BCE08(*piStack_1c,&iStack_20);
    if (iVar2 == iStack_20) {
      fn_826BC950();
    }
    fn_82681898(*(undefined4 *)(param_1 + 4));
    uVar3 = piStack_1c[2];
    piStack_1c[2] = (int)((ulonglong)uVar3 - 1);
    if ((ulonglong)uVar3 - 1 == 0) {
      fn_826944C8(piStack_1c);
    }
  }
  return;
}

