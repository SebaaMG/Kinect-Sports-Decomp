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
extern int fn_82230360();
extern int fn_8234B0C8();
extern int fn_827F3580();
extern int fn_827F5708();
extern unsigned int lbl_821CC160;


void fn_8234B020(int param_1)

{
  undefined4 *puVar1;
  double dVar2;
  
  dVar2 = (double)lbl_821CC160;
  if (*(int *)(param_1 + 0x24) != 0) {
    fn_827F5708(dVar2);
  }
  *(undefined4 *)(param_1 + 0x38) = 1;
  *(undefined4 *)(param_1 + 0x34) = 0;
  puVar1 = (undefined4 *)(param_1 + 4);
  fn_82230360(puVar1,0xffffffff821b1acc,7);
  if (*(int *)(param_1 + 0x20) != 0) {
    fn_827F3580(dVar2,dVar2);
    *(undefined4 *)(param_1 + 0x2c) = 0;
    if (0xf < *(uint *)(param_1 + 0x18)) {
      puVar1 = (undefined4 *)*puVar1;
    }
    fn_8234B0C8(dVar2,param_1,puVar1);
  }
  return;
}

