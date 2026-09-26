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
extern unsigned int *auStack_40;
extern unsigned int *auStack_50;
extern unsigned int *auStack_5c;
extern int fn_82273C88();
extern int fn_82273CD8();
extern int fn_8266F628();
extern int fn_8266F640();
extern int fn_82672C20();
extern unsigned int iStack_38;
extern unsigned int iStack_48;


void fn_822A12F8(undefined4 *param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  longlong lVar3;
  undefined4 auStack_5c [3];
  undefined1 auStack_50 [8];
  int iStack_48;
  undefined1 auStack_40 [8];
  int iStack_38;
  undefined1 auStack_30 [48];
  
  if (((param_1[3] == 0) && (param_2 != 0)) && (param_3 != 0)) {
    puVar1 = auStack_5c;
    lVar3 = 2;
    do {
      puVar1[3] = 0;
      puVar1 = puVar1 + 4;
      *puVar1 = 0;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    fn_82273CD8(auStack_50,5);
    iStack_48 = param_2;
    fn_82273CD8(auStack_40,5);
    iStack_38 = param_3;
    fn_82672C20(*param_1,0xffffffff821aafdc,auStack_50,2);
    puVar2 = auStack_30;
    lVar3 = 1;
    do {
      puVar2 = puVar2 + -0x10;
      fn_82273C88(puVar2);
      lVar3 = lVar3 + -1;
    } while (-1 < lVar3);
    fn_8266F640(*param_1,0);
    fn_8266F628(*param_1,0);
    param_1[2] = 0;
    param_1[3] = 1;
  }
  return;
}

