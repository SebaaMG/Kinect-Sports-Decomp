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
extern int fn_82AC3438();
extern int fn_82F68CC0();


undefined8
fn_82AC3548(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             ulonglong param_5,int param_6)

{
  byte bVar1;
  undefined8 uVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  byte abStack_40 [64];
  
  if ((param_5 & 0xffffffff) != 0) {
    fn_82F68CC0(abStack_40,param_5,9);
    iVar5 = 0;
    pbVar3 = abStack_40;
    do {
      bVar1 = *pbVar3;
      if (0x22 < bVar1) {
        return 0xffffffff80004005;
      }
      if (bVar1 == 0) {
        return 0xffffffff80004005;
      }
      if (bVar1 == 0x22) {
        if (-1 < iVar5) {
          iVar4 = iVar5 + 1;
          do {
            abStack_40[iVar5 + 1] = abStack_40[iVar5];
            iVar4 = iVar4 + -1;
            iVar5 = iVar5 + -1;
          } while (iVar4 != 0);
        }
        if (param_6 == 0) {
          return 0xffffffff80004005;
        }
        if (param_6 == 0x22) {
          return 0xffffffff80004005;
        }
        if (0x22 < param_6) {
          return 0xffffffff80004005;
        }
        abStack_40[0] = (byte)param_6;
        uVar2 = fn_82AC3438(param_1,param_2,param_3,param_4,abStack_40);
        return uVar2;
      }
      iVar5 = iVar5 + 1;
      pbVar3 = pbVar3 + 1;
    } while (iVar5 < 8);
  }
  return 0xffffffff80004005;
}

