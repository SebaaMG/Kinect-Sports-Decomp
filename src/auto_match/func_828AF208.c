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
extern int fn_823AA970();
extern int fn_828AF180();


void fn_828AF208(int param_1,char param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar4;
  undefined8 uVar3;
  int *piVar5;
  
  if (param_2 == '\0') {
    iVar1 = *(int *)(param_1 + 0x50);
    iVar4 = fn_823AA970();
    for (piVar5 = *(int **)(iVar1 + 600); piVar5 != *(int **)(iVar1 + 0x25c); piVar5 = piVar5 + 1) {
      if (iVar4 == *piVar5) {
        param_2 = '\x01';
        goto LAB_828af25c;
      }
    }
    param_2 = '\0';
  }
LAB_828af25c:
  uVar2 = *(undefined4 *)(param_1 + 0x50);
  uVar3 = fn_823AA970(param_1);
  fn_828AF180(uVar2,uVar3);
  if (((param_2 != '\0') && (*(char *)(param_1 + 0xb1) == '\0')) && (*(int *)(param_1 + 0x88) == 0))
  {
    *(undefined1 *)(param_1 + 0xb1) = 1;
  }
  return;
}

