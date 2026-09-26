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
extern int fn_82359C18();
extern int fn_824E7698();
extern int fn_8265CA20();
extern unsigned int lbl_821C1424;
extern unsigned int lbl_821C16E0;


void fn_824E6AA8(undefined4 *param_1)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  longlong lVar4;
  undefined4 *puVar5;
  
  *param_1 = &lbl_821C16E0;
  cVar1 = *(char *)((int)*(int **)(param_1[0xbd] + 4) + 0x91);
  piVar3 = *(int **)(param_1[0xbd] + 4);
  while( true ) {
    if (cVar1 != '\0') break;
    fn_824E7698(param_1 + 0xbc,piVar3[2]);
    piVar2 = (int *)*piVar3;
    fn_82230300(piVar3 + 3,1,0);
    fn_8265CA20(piVar3);
    cVar1 = *(char *)((int)piVar2 + 0x91);
    piVar3 = piVar2;
  }
  *(undefined4 *)(param_1[0xbd] + 4) = param_1[0xbd];
  *(undefined4 *)param_1[0xbd] = param_1[0xbd];
  *(undefined4 *)(param_1[0xbd] + 8) = param_1[0xbd];
  param_1[0xbe] = 0;
  fn_8265CA20(param_1[0xbd]);
  lVar4 = 1;
  puVar5 = param_1 + 0x112;
  do {
    puVar5 = puVar5 + -0x5c;
    fn_82359C18(puVar5);
    lVar4 = lVar4 + -1;
  } while (-1 < lVar4);
  *param_1 = &lbl_821C1424;
  return;
}

