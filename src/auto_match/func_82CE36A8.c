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


undefined8 fn_82CE36A8(int *param_1,int param_2,longlong param_3)

{
  uint *puVar1;
  uint uVar2;
  
  if ((uint)(param_1[2] - param_1[3]) < (uint)((int)param_3 << 2)) {
    return 0xffffffff8007007a;
  }
  if ((int)param_3 != 0) {
    puVar1 = (uint *)(param_1[3] + *param_1 + -4);
    param_2 = param_2 + -4;
    do {
      if (param_1[4] == 0) {
        uVar2 = *(uint *)(param_2 + 4);
      }
      else {
        uVar2 = *(uint *)(param_2 + 4);
        uVar2 = uVar2 << 0x18 | (uVar2 & 0xff00) << 8 | uVar2 >> 8 & 0xff00 | uVar2 >> 0x18;
      }
      param_2 = param_2 + 4;
      puVar1 = puVar1 + 1;
      *puVar1 = uVar2;
      param_1[3] = param_1[3] + 4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return 0;
}

