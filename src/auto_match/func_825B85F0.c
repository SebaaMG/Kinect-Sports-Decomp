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
extern int fn_822733C8();
extern int fn_8265CA20();
extern unsigned int lbl_83297038;
extern unsigned int uRam8329703c;


/* WARNING: Removing unreachable block (ram,0x825b8674) */
/* WARNING: Removing unreachable block (ram,0x825b867c) */

void fn_825B85F0(void)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  
  cVar1 = *(char *)((int)*(int **)(lbl_83297038 + 4) + 0x11);
  piVar3 = *(int **)(lbl_83297038 + 4);
  while (cVar1 == '\0') {
    fn_822733C8(0xffffffff83297034,piVar3[2]);
    piVar2 = (int *)*piVar3;
    fn_8265CA20(piVar3);
    piVar3 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x11);
  }
  *(int *)(lbl_83297038 + 4) = lbl_83297038;
  *(int *)lbl_83297038 = lbl_83297038;
  *(int *)(lbl_83297038 + 8) = lbl_83297038;
  uRam8329703c = 0;
  fn_8265CA20(lbl_83297038);
  return;
}

