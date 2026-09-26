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
extern unsigned int *auStack_30;
extern int fn_822AF200();
extern int fn_82359928();
extern int fn_8249ABC0();
extern int fn_8249D980();


void fn_823A4E58(int param_1)

{
  int *piVar1;
  int iVar2;
  char cVar4;
  int iVar3;
  undefined4 auStack_30 [12];
  
  *(undefined4 *)(param_1 + 0x50) = 0;
  auStack_30[0] = 0;
  fn_822AF200(param_1 + 0x4c,auStack_30);
  piVar1 = *(int **)(*(int *)(param_1 + 0x48) + 8);
  if (piVar1 == (int *)0x0) {
    cVar4 = '\x01';
  }
  else {
    cVar4 = (**(code **)(*piVar1 + 8))(piVar1,1);
  }
  if (cVar4 != '\0') {
    *(undefined4 *)(param_1 + 0x24) = 1;
  }
  iVar2 = *(int *)(param_1 + 8);
  if (*(int *)(iVar2 + 0xac) != 1) {
    iVar3 = fn_8249ABC0();
    if (*(int *)(iVar2 + 0xb4) != -1) {
      fn_8249D980(*(undefined4 *)(iVar3 + 0x110));
      *(undefined4 *)(iVar2 + 0xb4) = 0xffffffff;
    }
    *(undefined4 *)(iVar2 + 0xac) = 1;
  }
  fn_82359928(*(undefined4 *)(param_1 + 8),1);
  *(undefined4 *)(param_1 + 0x60) = 0;
  return;
}

