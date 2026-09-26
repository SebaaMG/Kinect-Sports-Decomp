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
extern int fn_826338A0();


void fn_826340D8(char param_1,char param_2,undefined8 param_3,undefined8 param_4,uint *param_5,
                  int *param_6)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  uint auStack_20 [2];
  
  if ((param_1 == '\0') && (param_2 == '\0')) {
    iVar4 = fn_826338A0(param_5,auStack_20);
    if (iVar4 != 0) {
      uVar2 = *param_5;
      uVar5 = 0;
      lVar6 = 4;
      do {
        if ((1 << (uVar5 & 0x3f) & auStack_20[0]) != 0) {
          bVar1 = *(byte *)(((uVar2 & 0x3f) + 2) * 4 + uVar5 + (int)param_6);
          if (bVar1 != 0xff) {
            iVar4 = *param_6;
            iVar3 = (bVar1 + 0x24) * 2;
            *(short *)(iVar3 + (int)param_6) = *(short *)(iVar3 + (int)param_6) + 1;
            auStack_20[0] = auStack_20[0] & ~(*(uint *)((uint)bVar1 * 4 + iVar4) >> 0xc & 0xf);
          }
        }
        uVar5 = uVar5 + 1;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
    }
  }
  return;
}

