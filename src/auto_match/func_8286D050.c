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
extern unsigned int *auStack_20;
extern int fn_8286D418();


undefined8 fn_8286D050(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined1 auStack_20 [8];
  
  if (*(int *)(param_1 + 0x1c) != 0) {
    puVar2 = (undefined4 *)(param_1 + 0x18);
    do {
      piVar1 = *(int **)(*(int *)*puVar2 + 8);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x14))(piVar1,1);
      }
      fn_8286D418(auStack_20,puVar2,*(undefined4 *)*puVar2);
    } while (*(int *)(param_1 + 0x1c) != 0);
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  return 0x20310000;
}

