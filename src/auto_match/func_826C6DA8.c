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
extern int fn_8267C498();
extern unsigned int iStack_40;
extern unsigned int uStack_3c;


void fn_826C6DA8(int param_1,undefined8 param_2,ulonglong param_3,ulonglong param_4)

{
  int iVar1;
  uint uVar2;
  int iStack_40;
  uint uStack_3c;
  
  if (param_1 != 0) {
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  }
  if ((param_3 & 0xffffffff) <= (param_4 & 0xffffffff)) {
    do {
      (**(code **)(**(int **)(param_1 + 0x9c) + 0x2c))(&iStack_40,*(int **)(param_1 + 0x9c),param_3)
      ;
      uVar2 = 0;
      if (uStack_3c != 0) {
        iVar1 = 0;
        do {
          (**(code **)(**(int **)(iVar1 + iStack_40) + 0x18))
                    (*(int **)(iVar1 + iStack_40),param_2,param_3);
          uVar2 = uVar2 + 1;
          iVar1 = iVar1 + 4;
        } while (uVar2 < uStack_3c);
      }
      param_3 = param_3 + 1;
    } while ((param_3 & 0xffffffff) <= (param_4 & 0xffffffff));
  }
  if (param_1 != 0) {
    fn_8267C498(param_1);
  }
  return;
}

