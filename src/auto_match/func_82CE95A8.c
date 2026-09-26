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
extern int fn_82598DF0();
extern int fn_82CE5410();
extern int fn_82CE97B8();
extern int fn_82CFBAD0();


void fn_82CE95A8(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  iVar3 = *(int *)(param_1 + 0x1c);
  if (iVar3 != 0) {
    fn_82CE97B8(iVar3);
    iVar1 = fn_82CE5410();
    (**(code **)(**(int **)(iVar1 + 0x10) + 8))(*(int **)(iVar1 + 0x10),iVar3,0x160);
  }
  if (*(char *)(param_1 + 0x74) != '\0') {
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 0x88)) {
      piVar4 = (int *)(param_1 + 0x78);
      do {
        iVar1 = *piVar4;
        if (iVar1 != 0) {
          fn_82CFBAD0(iVar1);
          iVar2 = fn_82CE5410();
          (**(code **)(**(int **)(iVar2 + 0x10) + 8))(*(int **)(iVar2 + 0x10),iVar1,4);
        }
        iVar3 = iVar3 + 1;
        piVar4 = piVar4 + 1;
      } while (iVar3 < *(int *)(param_1 + 0x88));
    }
  }
  iVar3 = fn_82CE5410();
  piVar4 = *(int **)(iVar3 + 0x10);
  *(undefined4 *)(param_1 + 0x18c) = 0;
  if ((*(uint *)(param_1 + 400) & 0x80000000) == 0) {
    (**(code **)(*piVar4 + 0x10))
              (piVar4,*(undefined4 *)(param_1 + 0x188),*(uint *)(param_1 + 400) & 0x3fffffff,0xc);
  }
  *(undefined4 *)(param_1 + 0x188) = 0;
  *(undefined4 *)(param_1 + 400) = 0x80000000;
  fn_82598DF0(param_1 + 0x5c);
  return;
}

