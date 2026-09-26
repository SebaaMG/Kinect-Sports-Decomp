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


int * fn_82BC5B70(int param_1)

{
  char cVar1;
  undefined4 *puVar2;
  int *piVar3;
  
  piVar3 = *(int **)(param_1 + 0x90);
  while( true ) {
    if ((piVar3 == (int *)0x0) || (*(int *)(piVar3[0xe] + 4) == 0)) {
      return piVar3;
    }
    cVar1 = (**(code **)(*piVar3 + 0x1c))(piVar3);
    if (cVar1 != '\0') {
      return piVar3;
    }
    cVar1 = (**(code **)(*piVar3 + 0x20))(piVar3);
    if (cVar1 != '\0') break;
    cVar1 = (**(code **)(*piVar3 + 0x14))(piVar3);
    if (cVar1 == '\0') {
      cVar1 = (**(code **)(*piVar3 + 0xc))(piVar3);
      if (cVar1 == '\0') {
        if (*(int *)(piVar3[0xe] + 4) == 0) {
          puVar2 = (undefined4 *)0x0;
        }
        else {
          puVar2 = *(undefined4 **)(piVar3[0xe] + 8);
        }
        piVar3 = (int *)*puVar2;
      }
      else {
        piVar3 = (int *)piVar3[0x26];
      }
    }
    else {
      piVar3 = (int *)piVar3[0x27];
    }
  }
  return piVar3;
}

