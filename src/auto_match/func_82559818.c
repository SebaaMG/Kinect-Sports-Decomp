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
extern int fn_822315A0();
extern int fn_827D5070();
extern int fn_827FA328();


void fn_82559818(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = fn_827D5070(*param_1);
  iVar3 = 0;
  if (*(char *)(iVar1 + 3) != '\0') {
    iVar2 = 0;
    do {
      fn_827FA328(0xffffffff821c51b0,*(undefined4 *)(*(int *)(iVar1 + 0x14) + iVar2 + 0x38));
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0x44;
    } while (iVar3 < (int)(uint)*(byte *)(iVar1 + 3));
  }
  if (param_1[1] != 0) {
    fn_822315A0();
  }
  return;
}

