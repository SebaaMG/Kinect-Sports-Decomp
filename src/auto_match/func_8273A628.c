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
extern int fn_82695468();
extern int fn_826954C0();
extern int fn_826957D0();
extern int fn_826972E0();
extern int fn_827397D8();


void fn_8273A628(int param_1)

{
  undefined4 uVar1;
  char cVar3;
  undefined8 uVar2;
  int iVar4;
  int iVar5;
  double dVar6;
  
  cVar3 = fn_82695468(param_1,0x23);
  if (cVar3 == '\0') {
    fn_826954C0(param_1,0xffffffff8200eeb4,0,0);
  }
  else {
    iVar5 = *(int *)(param_1 + 8) + -0x10;
    if (*(int *)(param_1 + 8) == 0) {
      iVar5 = 0;
    }
    if (0 < *(int *)(param_1 + 0x1c)) {
      uVar1 = *(undefined4 *)(param_1 + 0x18);
      uVar2 = fn_826957D0(param_1,0);
      dVar6 = (double)fn_826972E0(uVar2,uVar1);
      iVar4 = ((int)dVar6 - (*(int *)(iVar5 + 0x50) % 60000) / 1000) * 1000;
      *(int *)(iVar5 + 0x50) = *(int *)(iVar5 + 0x50) + iVar4;
      *(longlong *)(iVar5 + 0x48) = (longlong)iVar4 + *(longlong *)(iVar5 + 0x48);
      fn_827397D8(iVar5);
    }
  }
  return;
}

