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
extern int fn_82F59160();
extern int fn_82F59198();
extern unsigned int lbl_8326183C;


void fn_82F4E148(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  piVar2 = (int *)(lbl_8326183C + 0xb20);
  iVar1 = lbl_8326183C;
  do {
    if (*(int *)(iVar1 + 0x2db0) != 1) break;
    if (*piVar2 == 2) {
      *(undefined4 *)(iVar1 + 0x2db0) = 0;
      fn_82F59198(*(undefined4 *)(iVar1 + 0x2db4));
      iVar1 = lbl_8326183C;
    }
    iVar3 = iVar3 + 1;
    piVar2 = piVar2 + 0x70;
  } while (iVar3 < 6);
  fn_82F59160(*(undefined4 *)(iVar1 + 0x2db4));
  return;
}

