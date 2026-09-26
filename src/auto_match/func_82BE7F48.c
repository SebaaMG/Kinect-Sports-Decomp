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
extern int fn_82F6B030();
extern unsigned int lbl_82006848;
extern unsigned int lbl_83175240;
extern unsigned int lbl_83175244;


undefined8 fn_82BE7F48(int param_1)

{
  ushort uVar1;
  undefined4 uVar2;
  double dVar3;
  
  dVar3 = (double)fn_82F6B030(*(longlong *)(param_1 + 0x38) - *(longlong *)(param_1 + 0x40));
  if (*(int *)(param_1 + 0x9c) == 3) {
    uVar1 = *(ushort *)(param_1 + 0x28);
    uVar2 = lbl_83175244;
  }
  else {
    if (*(int *)(param_1 + 0x9c) != 4) {
      return 0x327;
    }
    uVar1 = *(ushort *)(param_1 + 0x2a);
    uVar2 = lbl_83175240;
  }
  if (uVar1 == 0) {
    *(undefined4 *)(param_1 + 0x2c) = uVar2;
  }
  else {
    *(int *)(param_1 + 0x2c) =
         (int)((float)(longlong)(int)((uint)uVar1 << 10) * (float)dVar3 * lbl_82006848);
  }
  return 0;
}

