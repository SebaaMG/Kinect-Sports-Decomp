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
extern int fn_82AC3548();
extern unsigned int stack0x00000010;
extern unsigned int uStack00000010;
extern unsigned int uStack_10;
extern unsigned int uStack_8;


uint fn_82AC4558(ulonglong param_1,int *param_2,uint *param_3)

{
  byte bVar1;
  byte bVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  ulonglong *puVar7;
  ulonglong uStack00000010;
  ulonglong uStack_10;
  ulonglong uStack_8;
  
  uStack00000010 = param_1;
  puVar7 = &uStack_10;
  pbVar6 = (byte *)&stack0x00000010;
  uStack_10 = param_1 & 0x7fff0000fffc;
  do {
    bVar1 = *(byte *)puVar7;
    bVar2 = *pbVar6;
    if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
    puVar7 = (ulonglong *)((int)puVar7 + 1);
    pbVar6 = pbVar6 + 1;
  } while (puVar7 != &uStack_8);
  if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0) {
    uVar4 = (uint)param_2[*param_2 * 4 + 3] >> 0xd & 7;
    if ((uVar4 < 4) && (uVar3 = param_1 >> 0x20 & 0x1fff, uVar3 < *param_3)) {
      iVar5 = fn_82AC3548(param_2,uVar3,(uint)param_2[*param_2 * 4 + 3] >> 0x10 & 7,uVar4 + 1,
                            param_2 + *param_2 * 4 + 4,0x21);
      return iVar5 >> 0x1f & 0x80004005;
    }
  }
  return 0x80004005;
}

