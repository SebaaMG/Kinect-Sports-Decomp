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
extern int fn_82B8F208();


int fn_82AC64B8(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  while( true ) {
    piVar4 = *(int **)(param_1 + 8);
    if (piVar4 != (int *)0x0) {
      iVar3 = *piVar4;
      *(undefined4 *)(param_1 + 0xc) = 0;
      do {
        piVar4 = (int *)piVar4[1];
        *(int **)(param_1 + 8) = piVar4;
        if (piVar4 == (int *)0x0) {
          return iVar3;
        }
      } while (((*(uint *)(*piVar4 + 0x30) >> 0x16 & 1) != 0) ||
              ((*(uint *)(*piVar4 + 0x30) >> 0x14 & 1) == 0));
      return iVar3;
    }
    iVar3 = *(int *)(param_1 + 4);
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
    if (iVar3 == 0) break;
    iVar2 = *(int *)(iVar3 + 4);
    *(int *)(param_1 + 0xc) = iVar3;
    cVar1 = *(char *)(param_1 + 0x19);
    fn_82B8F208(param_1,*(undefined4 *)(iVar3 + 0xc));
    if (cVar1 == '\0') {
      return iVar2;
    }
  }
  return 0;
}

