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
extern int fn_8223C478();
extern int fn_828E9DB8();
extern unsigned int uStack_34;


void fn_828AC8F0(int param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uStack_34;
  undefined4 auStack_30 [12];
  
  auStack_30[0] = *(undefined4 *)(param_1 + 0x10);
  auStack_30[1] = *(undefined4 *)(param_1 + 0x14);
  lVar2 = 2;
  puVar1 = &uStack_34;
  do {
    fn_8223C478(param_2,6,0);
    puVar1 = puVar1 + 1;
    fn_828E9DB8(param_2,*puVar1,6);
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return;
}

