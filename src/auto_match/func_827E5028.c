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
extern int fn_827E4428();


undefined8 fn_827E5028(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar3 = (**(code **)(*param_1 + 0x1c))();
  piVar1 = (int *)**(int **)(iVar3 + 4);
  iVar3 = (**(code **)(*param_1 + 0x1c))(param_1);
  piVar2 = *(int **)(iVar3 + 4);
  if (piVar1 != piVar2) {
    do {
      iVar3 = fn_827E4428(*(undefined4 *)(piVar1[2] + 0x24));
      if (iVar3 == param_1[1]) {
        iVar4 = iVar4 + 1;
      }
      piVar1 = (int *)*piVar1;
    } while (piVar1 != piVar2);
    if (iVar4 == 1) {
      return 0;
    }
  }
  return 0x3e5;
}

