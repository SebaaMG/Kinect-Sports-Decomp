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
extern unsigned int lbl_82089384;


undefined8 fn_82A2C7D8(ushort *param_1)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  byte *pbVar4;
  
  uVar3 = (uint)*param_1;
  if ((uVar3 != 0) && (uVar3 < 0x29)) {
    pbVar4 = *(byte **)(param_1 + 2);
    pbVar2 = pbVar4 + uVar3;
    if ((*pbVar4 != 0x2e) || ((uVar3 != 1 && ((uVar3 != 2 || (pbVar4[1] != 0x2e)))))) {
      do {
        if (pbVar2 <= pbVar4) {
          return 1;
        }
        bVar1 = *pbVar4;
        pbVar4 = pbVar4 + 1;
      } while ((1 << (bVar1 & 0x1f) & *(uint *)(&lbl_82089384 + (bVar1 >> 3 & 0x1ffffffc))) == 0);
    }
  }
  return 0;
}

