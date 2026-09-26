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
extern int fn_825BC908();
extern unsigned int lbl_821CAB38;
extern unsigned int lbl_831C03EC;


void fn_82568980(int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(*(int *)(param_1 + 0xd0) + 0x1c);
  *(undefined4 *)(param_1 + 0xf0) = 0;
  *(undefined4 *)(param_1 + 0xf4) = 0;
  iVar3 = 0;
  if (iVar2 != 0) {
    sVar1 = *(short *)(iVar2 + 0xc);
    iVar3 = iVar2;
    while (sVar1 != 0) {
      if (*(code **)(&lbl_831C03EC + (uint)*(ushort *)(iVar3 + 0xc) * 8) != (code *)0x0) {
        (**(code **)(&lbl_831C03EC + (uint)*(ushort *)(iVar3 + 0xc) * 8))(iVar3);
      }
      iVar3 = *(int *)(&lbl_821CAB38 + (uint)*(ushort *)(iVar3 + 0xc) * 4) + iVar3;
      sVar1 = *(short *)(iVar3 + 0xc);
    }
    fn_825BC908(iVar2);
    iVar3 = iVar2;
  }
  *(int *)(param_1 + 0x70) = iVar3;
  return;
}

