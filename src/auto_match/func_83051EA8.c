extern int *piRam0000000c;
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


undefined8 fn_83051EA8(int param_1)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  int *piVar4;

  piVar4 = *(int **)(param_1 + 0x58);
  if (*(int **)(param_1 + 0x58) == (int *)0x0) {
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  else {
    do {
      piVar1 = (int *)piVar4[3];
      piVar2 = piVar1;
      if (piVar4 == *(int **)(param_1 + 0x58)) {
        *(int **)(param_1 + 0x58) = piVar1;
        piVar2 = piRam0000000c;
      }
      piRam0000000c = piVar2;
      cVar3 = (**(code **)(*piVar4 + 8))(piVar4);
      if (cVar3 == '\0') {
        if (*(int *)(param_1 + 0x58) == 0) {
          *(int **)(param_1 + 0x58) = piVar4;
          piVar4[3] = 0;
          return 0;
        }
        piVar4[3] = *(int *)(param_1 + 0x58);
        *(int **)(param_1 + 0x58) = piVar4;
        return 0;
      }
      piVar4 = piVar1;
    } while (piVar1 != (int *)0x0);
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  return 1;
}
