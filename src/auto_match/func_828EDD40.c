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
extern int fn_828ED1A0();
extern int fn_82F691F0();


undefined8 fn_828EDD40(int param_1)

{
  char cVar1;
  undefined4 *puVar2;
  longlong lVar3;
  
  cVar1 = fn_828ED1A0();
  if ((cVar1 == '\0') && (*(int *)(param_1 + 0x10) != 0)) {
    puVar2 = (undefined4 *)(param_1 + 0x108);
    lVar3 = 7;
    do {
      puVar2 = puVar2 + 1;
      *puVar2 = 0;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
                    /* WARNING: Subroutine does not return */
    fn_82F691F0(param_1 + 0x94,0,0x3c);
  }
  return 0;
}

