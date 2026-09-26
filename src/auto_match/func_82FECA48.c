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
extern unsigned int lbl_831BC774;


undefined4 fn_82FECA48(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = lbl_831BC774;
  while( true ) {
    if (puVar1 == (undefined4 *)0x0) {
      return 0;
    }
    if (puVar1[1] == param_1) break;
    puVar1 = (undefined4 *)*puVar1;
  }
  if (puVar1 + 2 == (int *)0x0) {
    return 0;
  }
  iVar2 = puVar1[2];
  if (*(int *)(iVar2 + 0x74) == 2) {
    return 0;
  }
  if ((param_1 != *(int *)(iVar2 + 0x1c)) && (param_1 != *(int *)(iVar2 + 0x16c))) {
    return 0;
  }
  return *(undefined4 *)(iVar2 + 0x20);
}

