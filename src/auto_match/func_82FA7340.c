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
extern unsigned int *auStack_40;
extern int fn_82FA7F30();
extern int fn_82FAB260();
extern unsigned int lbl_83264234;


void fn_82FA7340(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined1 auStack_40 [64];
  
  piVar3 = lbl_83264234;
  while (piVar3 != (int *)0x0) {
    piVar1 = (int *)piVar3[0xf];
    iVar2 = piVar3[0xe];
    if (((piVar3[5] & 0x20000U) != 0) &&
       (iVar4 = (**(code **)(*piVar3 + 0xc))(piVar3,auStack_40), iVar4 == 1)) {
      fn_82FA7F30(0xffffffff83264240,*(undefined4 *)(iVar2 + 0x20),auStack_40);
    }
    fn_82FAB260(iVar2);
    piVar3 = piVar1;
  }
  return;
}

