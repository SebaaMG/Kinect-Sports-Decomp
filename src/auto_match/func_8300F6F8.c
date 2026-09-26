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
extern int fn_82FF5198();
extern int fn_83037A88();
extern int fn_83037B38();
extern unsigned int lbl_83264304;


void fn_8300F6F8(int param_1)

{
  short sVar1;
  int *piVar2;
  bool bVar3;
  undefined2 *puVar4;
  
  RtlEnterCriticalSection(param_1 + 4);
  do {
    if (((*(int *)(param_1 + 0x30) != *(int *)(param_1 + 0x38)) ||
        (*(int *)(param_1 + 0x34) != *(int *)(param_1 + 0x3c))) ||
       (bVar3 = true, *(char *)(param_1 + 0x40) != '\0')) {
      bVar3 = false;
    }
    if (bVar3) {
      RtlLeaveCriticalSection(param_1 + 4);
      return;
    }
    puVar4 = (undefined2 *)fn_83037B38(param_1 + 0x20);
    sVar1 = puVar4[1];
    if (sVar1 == 1) {
      fn_82FF5198(lbl_83264304,*(undefined4 *)(puVar4 + 4));
      piVar2 = *(int **)(puVar4 + 0xe);
LAB_8300f79c:
      (**(code **)(*piVar2 + 8))();
    }
    else if ((sVar1 != 6) && (sVar1 == 0x1f)) {
      piVar2 = *(int **)(puVar4 + 2);
      goto LAB_8300f79c;
    }
    fn_83037A88(param_1 + 0x20,*puVar4);
  } while( true );
}

