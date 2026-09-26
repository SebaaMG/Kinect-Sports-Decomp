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
extern int fn_8253F768();
extern int fn_8253F898();
extern int fn_8261D290();
extern int fn_82CE4118();
extern int fn_82CE5410();


void fn_8261D1B8(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  fn_8253F898();
  fn_8261D290(param_1);
  if (*(int *)(param_1 + 0xb74) != 0) {
    if (*(char *)(param_1 + 0xbe0) != '\0') {
      if (((ulonglong)*(uint *)(param_1 + 0x4c) != 0xfffffffffffffe10) &&
         (*(int *)(param_1 + 0x7c0) != 0)) {
        fn_8253F768(param_1);
        iVar1 = *(int *)(param_1 + 0x7c0);
        iVar3 = fn_82CE5410();
        iVar4 = 0;
        piVar2 = *(int **)(iVar3 + 0x10);
        if (0 < *(int *)(iVar1 + 0x7c)) {
          do {
            iVar4 = iVar4 + 1;
          } while (iVar4 < *(int *)(iVar1 + 0x7c));
        }
        *(undefined4 *)(iVar1 + 0x7c) = 0;
        if ((*(uint *)(iVar1 + 0x80) & 0x80000000) == 0) {
          (**(code **)(*piVar2 + 0x10))
                    (piVar2,*(undefined4 *)(iVar1 + 0x78),*(uint *)(iVar1 + 0x80) & 0x3fffffff,0x10)
          ;
        }
        *(undefined4 *)(iVar1 + 0x78) = 0;
        *(undefined4 *)(iVar1 + 0x80) = 0x80000000;
        fn_82CE4118(iVar1);
        *(undefined4 *)(param_1 + 0x7c0) = 0;
      }
      *(undefined1 *)(param_1 + 0xbe0) = 0;
    }
  }
  return;
}

