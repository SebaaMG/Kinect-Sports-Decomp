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
extern unsigned int uStack_10;
extern unsigned int uStack_c;


undefined8 fn_82CE3730(int *param_1,int param_2,longlong param_3)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  uint uStack_10;
  uint uStack_c;
  
  if ((uint)(param_1[2] - param_1[3]) < (uint)((int)param_3 << 3)) {
    return 0xffffffff8007007a;
  }
  if ((int)param_3 != 0) {
    puVar1 = (ulonglong *)(param_1[3] + *param_1 + -8);
    param_2 = param_2 + -8;
    do {
      if (param_1[4] == 0) {
        uVar2 = *(ulonglong *)(param_2 + 8);
      }
      else {
        uVar2 = *(ulonglong *)(param_2 + 8);
        uStack_c = (uint)uVar2;
        uStack_10 = (uint)(uVar2 >> 0x20);
        uVar2 = ((uVar2 & 0xff) << 0x18 |
                (uVar2 & 0xff00) << 8 |
                (ulonglong)(uStack_c >> 8) & 0xff00 | (ulonglong)(uStack_c >> 0x18)) << 0x20 |
                ((ulonglong)uStack_10 & 0xff) << 0x18 |
                ((ulonglong)uStack_10 & 0xff00) << 8 |
                (ulonglong)(uStack_10 >> 8) & 0xff00 | (ulonglong)(uStack_10 >> 0x18);
      }
      param_2 = param_2 + 8;
      puVar1 = puVar1 + 1;
      *puVar1 = uVar2;
      param_1[3] = param_1[3] + 8;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return 0;
}

