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
extern int fn_82284A40();
extern int fn_82536590();


void fn_8249CE00(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  bool bVar5;
  
  iVar1 = *(int *)(param_1 + 4);
  iVar2 = *(int *)(iVar1 + 0x70);
  if (iVar2 != 0) {
    iVar2 = *(int *)(iVar2 + 0x844);
    iVar3 = *(int *)(iVar2 + 0x358);
    if (iVar3 != 0) {
      if ((*(uint *)(iVar3 + 0x118) & 0x40) != 0) {
        if ((*(uint *)(iVar3 + 0x118) & 0x40) != 0) {
          if (iVar2 != -0x30) {
            *(uint *)(iVar2 + 0xd8) = *(uint *)(iVar2 + 0xd8) & 0xffffff7f;
          }
          piVar4 = (int *)(iVar3 + 0x80);
          if (piVar4 == (int *)0x0) {
            bVar5 = false;
          }
          else {
            bVar5 = *piVar4 != 0;
          }
          if (bVar5) {
            fn_82536590(piVar4,0);
          }
          *(undefined4 *)(iVar3 + 0x88) = *(undefined4 *)(iVar3 + 0x94);
        }
        fn_82284A40(*(undefined4 *)(iVar1 + 0x9c),0,0);
      }
    }
  }
  return;
}

