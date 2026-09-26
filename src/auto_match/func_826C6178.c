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
extern int fn_826959C8();
extern int fn_82696BC8();


void fn_826C6178(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  longlong lVar3;
  
  if ((*(int **)(param_1 + 8) == (int *)0x0) ||
     (iVar2 = (**(code **)(**(int **)(param_1 + 8) + 8))(), iVar2 != 0xb)) {
    puVar1 = *(undefined1 **)(param_1 + 4);
    fn_826959C8(puVar1);
    *puVar1 = 0;
  }
  else {
    lVar3 = (ulonglong)*(uint *)(param_1 + 8) - 0x10;
    if ((ulonglong)*(uint *)(param_1 + 8) == 0) {
      lVar3 = 0;
    }
    fn_82696BC8(*(undefined4 *)(param_1 + 4),lVar3);
  }
  return;
}

