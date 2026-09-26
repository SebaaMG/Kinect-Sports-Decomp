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
extern int fn_827C7150();
extern int fn_827C72A8();
extern int fn_827C72F8();


void fn_827C7348(int param_1)

{
  int iVar1;
  ulonglong uVar2;
  
  if (*(int *)(param_1 + 0x38) != 0) {
    iVar1 = *(int *)(param_1 + 0x38) >> 1;
    uVar2 = 0;
    if (iVar1 != 0) {
      do {
        iVar1 = iVar1 >> 1;
        uVar2 = uVar2 + 1;
      } while (iVar1 != 0);
      if (0xe < (int)uVar2) {
        *(undefined4 *)(**(int **)(param_1 + 0x20) + 0x14) = 0x28;
        (**(code **)**(undefined4 **)(param_1 + 0x20))();
      }
    }
    fn_827C72A8(param_1,*(undefined4 *)(param_1 + 0x34),(uVar2 & 0xfffffff) << 4);
    if ((int)uVar2 != 0) {
      fn_827C7150(param_1,*(undefined4 *)(param_1 + 0x38),uVar2);
    }
    *(undefined4 *)(param_1 + 0x38) = 0;
    fn_827C72F8(param_1,*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x3c));
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  return;
}

