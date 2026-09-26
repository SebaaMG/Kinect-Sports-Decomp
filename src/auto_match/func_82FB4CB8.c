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
extern int fn_82FB48E8();


void fn_82FB4CB8(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  char cVar3;
  
  if (**(int **)(param_1 + 0x74) == 0) {
    if (*(int *)(param_1 + 0xc) == 0) {
      cVar3 = '\0';
    }
    else {
      cVar3 = fn_82FB48E8();
    }
  }
  else {
    cVar3 = '\x01';
  }
  if (cVar3 == '\0') {
    for (puVar1 = *(undefined4 **)(param_1 + 0x54); puVar1 != (undefined4 *)0x0;
        puVar1 = (undefined4 *)*puVar1) {
      piVar2 = *(int **)(puVar1[1] + 0x1c);
      if ((piVar2 != (int *)0x0) && ((*(byte *)(piVar2 + 0xd) & 0x80) != 0)) {
        (**(code **)(*piVar2 + 0x24))();
      }
    }
  }
  return;
}

