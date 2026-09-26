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
extern int fn_828AC508();
extern int fn_82F68CC0();


void fn_828B8F98(int param_1,undefined8 param_2,int param_3,undefined8 param_4,undefined8 param_5,
                  undefined1 param_6,int param_7)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  longlong lVar3;
  
  lVar3 = 8;
  puVar1 = (undefined1 *)(param_3 + -1);
  puVar2 = (undefined1 *)(param_1 + 0x27);
  do {
    puVar1 = puVar1 + 1;
    puVar2 = puVar2 + 1;
    *puVar2 = *puVar1;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  fn_82F68CC0(param_1 + 0x30,param_4,0x10);
  fn_82F68CC0(param_1 + 0x40,param_5,0x24);
  *(undefined1 *)(param_1 + 100) = param_6;
  *(undefined8 *)(param_1 + 0x68) = param_2;
  if (*(char *)(param_7 + 4) != '\0') {
    fn_828AC508(param_1 + 0xb8,param_7);
  }
  return;
}

