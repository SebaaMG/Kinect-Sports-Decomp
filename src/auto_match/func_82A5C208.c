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
extern int fn_82A5C130();
extern int fn_82A5C188();


undefined8 fn_82A5C208(int param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  code *pcVar3;
  
  uVar1 = *(uint *)(param_2 + 8);
  if (uVar1 == 0) {
    fn_82A5C130();
  }
  else if (uVar1 == 1) {
    fn_82A5C188();
  }
  else {
    piVar2 = *(int **)(param_1 + 4);
    if (uVar1 < 3) {
      (**(code **)(*piVar2 + 0x18))
                (piVar2,*(undefined4 *)(param_2 + 0x10),param_2 + 0x18,
                 *(undefined4 *)(param_2 + 0x14));
    }
    else {
      if (uVar1 == 3) {
        pcVar3 = *(code **)(*piVar2 + 0x20);
      }
      else {
        pcVar3 = *(code **)(*piVar2 + 0x24);
      }
      (*pcVar3)(piVar2,*(undefined4 *)(param_2 + 0x10));
    }
  }
  return 0;
}

