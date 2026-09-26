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
extern int fn_82CE4040();
extern int fn_82CE4118();


void fn_82D587C0(int param_1,undefined8 param_2,int param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 *puVar3;
  
  puVar1 = (undefined4 *)(param_3 * 0x20 + param_1 + 8);
  puVar3 = (undefined4 *)((param_3 + -5) * 4 + param_1);
  lVar2 = 8;
  do {
    fn_82CE4040(param_2);
    fn_82CE4118(puVar3[8]);
    puVar3 = puVar3 + 8;
    *puVar3 = (int)param_2;
    fn_82CE4040(param_2);
    fn_82CE4118(puVar1[1]);
    lVar2 = lVar2 + -1;
    puVar1 = puVar1 + 1;
    *puVar1 = (int)param_2;
  } while (lVar2 != 0);
  return;
}

