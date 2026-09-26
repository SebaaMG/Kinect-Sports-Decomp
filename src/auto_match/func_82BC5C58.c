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


int * fn_82BC5C58(int *param_1)

{
  char cVar1;
  int *piVar2;
  
  piVar2 = (int *)param_1[0x25];
  while ((((piVar2 != (int *)0x0 && (param_1 = piVar2, *(int *)(piVar2[0xe] + 4) != 0)) &&
          (cVar1 = (**(code **)(*piVar2 + 0x1c))(piVar2), cVar1 == '\0')) &&
         (cVar1 = (**(code **)(*piVar2 + 0x20))(piVar2), cVar1 == '\0'))) {
    cVar1 = (**(code **)(*piVar2 + 0x14))(piVar2);
    if (cVar1 == '\0') {
      cVar1 = (**(code **)(*piVar2 + 0xc))(piVar2);
      if (cVar1 == '\0') {
        if (*(int *)(piVar2[0xe] + 4) == 0) {
          piVar2 = (int *)0x0;
        }
        else {
          piVar2 = *(int **)(piVar2[0xe] + 8);
        }
        piVar2 = (int *)*piVar2;
        param_1 = piVar2;
      }
      else {
        piVar2 = (int *)piVar2[0x26];
        param_1 = piVar2;
      }
    }
    else {
      piVar2 = (int *)piVar2[0x27];
      param_1 = piVar2;
    }
  }
  return param_1;
}

