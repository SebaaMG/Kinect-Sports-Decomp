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


void fn_82A94CC0(int param_1,uint *param_2,undefined4 param_3,uint *param_4,uint *param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar2 = param_2[1];
  uVar6 = 0xffffffff;
  iVar1 = -(int)LZCOUNT(param_3);
  uVar5 = 0;
  if (uVar2 < param_2[3]) {
    do {
      if (*param_2 < param_2[2]) {
        uVar3 = *param_2;
        do {
          uVar4 = (uVar3 & 7) + (uVar2 & 6) * 4 << (iVar1 + 0x1fU & 0x3f);
          uVar4 = ((uVar3 >> 5) + (uVar2 >> 5) * (param_1 + 0x1fU >> 5) << (iVar1 + 0x26U & 0x3f)) +
                  (uVar4 & 0x7ffffff0) * 2 + (uVar4 & 0xf) +
                  ((uVar2 & 8) << (iVar1 + 0x22U & 0x3f)) + (uVar2 & 1) * 0x10;
          uVar4 = ((uVar4 & 0x7ffffe00) * 2 + (uVar4 & 0x1c0)) * 4 +
                  ((uVar3 & 0xfffffff8) + (uVar2 >> 2 & 2) * 8 & 0x18) * 8 + (uVar4 & 0x3f) +
                  (uVar2 & 0x10) * 0x80 >> (iVar1 + 0x1fU & 0x3f);
          if (uVar4 < uVar6) {
            uVar6 = uVar4;
          }
          if (uVar5 < uVar4) {
            uVar5 = uVar4;
          }
          uVar3 = uVar3 + 1;
        } while (uVar3 < param_2[2]);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < param_2[3]);
  }
  *param_4 = uVar6;
  *param_5 = uVar5;
  return;
}

