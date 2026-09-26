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
extern int fn_822315A0();
extern int fn_82250A18();
extern int fn_822EFBF0();
extern int fn_823831D8();
extern unsigned int iStack_1c;
extern unsigned int lbl_832975B0;


void fn_823DEE60(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined1 auStack_20 [4];
  int iStack_1c;
  
  iVar2 = lbl_832975B0;
  iVar1 = *(int *)(param_1 + 8);
  *(undefined4 *)(iVar1 + 0xe28) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (iVar2 == 0) {
    iVar2 = fn_82250A18();
  }
  if ((*(char *)(iVar2 + 4) != '\0') && (*(int *)(iVar1 + 0x84) != 0)) {
    puVar3 = (undefined4 *)fn_822EFBF0(auStack_20);
    fn_823831D8((ulonglong)*(uint *)*puVar3 + 0x710);
    if (iStack_1c != 0) {
      fn_822315A0();
    }
  }
  return;
}

