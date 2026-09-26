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
extern unsigned int *auStack_20;
extern int fn_82536E90();
extern int fn_8265CA20();
extern unsigned int lbl_821C3F68;


void fn_82534898(undefined4 *param_1)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined1 auStack_20 [8];
  
  lVar1 = 6;
  *param_1 = &lbl_821C3F68;
  puVar2 = param_1 + 0x1d;
  do {
    fn_82536E90(auStack_20,puVar2 + -4,*(undefined4 *)puVar2[-3]);
    fn_8265CA20(puVar2[-3]);
    lVar1 = lVar1 + -1;
    puVar2 = puVar2 + -4;
  } while (-1 < lVar1);
  return;
}

