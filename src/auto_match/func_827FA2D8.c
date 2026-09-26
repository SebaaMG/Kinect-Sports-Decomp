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
extern unsigned int lbl_821AAD20;


bool fn_827FA2D8(int param_1,uint param_2,undefined4 *param_3)

{
  bool bVar1;
  undefined4 uVar2;
  
  bVar1 = param_2 < *(ushort *)(param_1 + 0x30);
  uVar2 = lbl_821AAD20;
  if (bVar1) {
    uVar2 = *(undefined4 *)
             (((uint)*(ushort *)(param_1 + 0x32) * 0xc + (uint)*(ushort *)(param_1 + 0x2e) + param_2
              ) * 4 + *(int *)(param_1 + 0x84));
  }
  *param_3 = uVar2;
  return bVar1;
}

