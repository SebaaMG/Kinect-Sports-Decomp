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
extern int fn_82230300();
extern int fn_822315A0();
extern int fn_822B1B28();
extern int fn_82359C18();
extern int fn_823B9360();
extern int fn_8265CA20();
extern unsigned int lbl_821BE8A4;


void fn_824872A8(undefined4 *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  ulonglong uVar5;
  
  puVar2 = (undefined4 *)param_1[0x10];
  *param_1 = &lbl_821BE8A4;
  if (puVar2 != (undefined4 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  uVar5 = (ulonglong)(uint)param_1[0xf];
  if (uVar5 != 0) {
    fn_82359C18(uVar5 + 0x10);
    fn_822B1B28(uVar5);
    fn_8265CA20(uVar5);
  }
  fn_82230300(param_1 + 7,1,0);
  cVar1 = *(char *)((int)*(int **)(param_1[2] + 4) + 0x19);
  piVar4 = *(int **)(param_1[2] + 4);
  while (cVar1 == '\0') {
    fn_823B9360(param_1 + 1,piVar4[2]);
    piVar3 = (int *)*piVar4;
    if (piVar4[5] != 0) {
      fn_822315A0();
    }
    fn_8265CA20(piVar4);
    piVar4 = piVar3;
    cVar1 = *(char *)((int)piVar3 + 0x19);
  }
  *(undefined4 *)(param_1[2] + 4) = param_1[2];
  *(undefined4 *)param_1[2] = param_1[2];
  *(undefined4 *)(param_1[2] + 8) = param_1[2];
  param_1[3] = 0;
  fn_8265CA20(param_1[2]);
  return;
}

