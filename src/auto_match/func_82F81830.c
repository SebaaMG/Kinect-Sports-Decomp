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
extern int fn_82F641F8();
extern int fn_82F67988();
extern int fn_82F71CD0();
extern int fn_82F818F0();
extern unsigned int lbl_8329F734;
extern unsigned int lbl_8329F738;
extern unsigned int uStack_40;


int fn_82F81830(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uStack_40;
  
  iVar3 = 0;
  uStack_40 = 0;
  fn_82F71CD0(1);
  for (iVar4 = 3; iVar4 < lbl_8329F738; iVar4 = iVar4 + 1) {
    iVar1 = iVar4 * 4;
    if (*(int *)(iVar1 + lbl_8329F734) != 0) {
      if (((*(uint *)(*(int *)(iVar1 + lbl_8329F734) + 0xc) & 0x83) != 0) &&
         (iVar2 = fn_82F67988(), iVar2 != -1)) {
        iVar3 = iVar3 + 1;
        uStack_40 = iVar3;
      }
      if (0x13 < iVar4) {
        fn_82F641F8(*(undefined4 *)(iVar1 + lbl_8329F734));
        *(undefined4 *)(iVar1 + lbl_8329F734) = 0;
      }
    }
  }
  fn_82F818F0();
  return uStack_40;
}

