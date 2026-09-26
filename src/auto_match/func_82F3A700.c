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
extern int fn_82EE3128();
extern int fn_82F39A58();
extern unsigned int lbl_82162C1C;
extern unsigned int lbl_82162C24;


void fn_82F3A700(undefined4 *param_1)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 *puVar3;
  
  *param_1 = &lbl_82162C24;
  if (param_1[1] == 0) {
    fn_82F39A58(param_1,0);
  }
  lVar2 = 0x13;
  puVar3 = param_1 + 0x48c;
  do {
    puVar1 = puVar3 + -0x37;
    *puVar1 = &lbl_82162C1C;
    if (puVar3[-0x36] == 0) {
      fn_82EE3128(puVar1,0);
    }
    lVar2 = lVar2 + -1;
    puVar3 = puVar1;
  } while (-1 < lVar2);
  param_1[8] = &lbl_82162C1C;
  if (param_1[9] == 0) {
    fn_82EE3128(param_1 + 8,0);
  }
  return;
}

