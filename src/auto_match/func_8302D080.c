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
extern int fn_82FFE000();
extern unsigned int iStack_44;
extern unsigned int iStack_50;
extern unsigned int uStack_4c;


void fn_8302D080(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iStack_50;
  uint uStack_4c;
  int *piStack_48;
  int iStack_44;
  undefined1 auStack_40 [64];
  
  piStack_48 = *(int **)(param_1 + 0x8c);
  iVar3 = param_1 + 0x8c;
  iStack_44 = 0;
  uStack_4c = 0;
  while (iStack_50 = iVar3, piStack_48 == (int *)0x0) {
    uStack_4c = uStack_4c + 1;
    if (0x1e < uStack_4c) goto joined_r0x8302d0ec;
    piStack_48 = *(int **)(uStack_4c * 4 + iVar3);
  }
  do {
    piVar1 = piStack_48;
    piVar2 = (int *)fn_82FFE000(auStack_40,iVar3,&iStack_50);
    iStack_50 = *piVar2;
    uStack_4c = piVar2[1];
    piStack_48 = (int *)piVar2[2];
    iStack_44 = piVar2[3];
    (**(code **)(*piVar1 + 4))(piVar1);
joined_r0x8302d0ec:;} while (piStack_48 != (int *)0x0);
  if (*(int **)(param_1 + 0x10c) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x10c) + 4))();
    *(undefined4 *)(param_1 + 0x10c) = 0;
  }
  return;
}

