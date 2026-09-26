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
extern unsigned int *auStack_50;
extern int fn_82F63BA0();
extern int fn_82F68240();
extern int fn_82F704C8();
extern int fn_82F81918();
extern unsigned int lbl_82005710;
extern unsigned int lbl_8216AA90;
extern unsigned int lbl_831BBCA8;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double fn_82F6B140(byte *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  uint *puVar3;
  undefined *puVar4;
  byte *pbVar5;
  double dVar6;
  undefined1 auStack_50 [80];
  
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = param_1;
  }
  puVar4 = lbl_831BBCA8;
  pbVar5 = param_1;
  if (param_1 == (byte *)0x0) {
    puVar1 = (undefined4 *)fn_82F68240();
    *puVar1 = 0x16;
    fn_82F63BA0();
    dVar6 = lbl_82005710;
  }
  else {
    while( true ) {
      if (*(int *)(puVar4 + 0xac) < 2) {
        uVar2 = *(ushort *)((uint)*pbVar5 * 2 + *(int *)(puVar4 + 200)) & 8;
      }
      else {
        uVar2 = fn_82F704C8(*pbVar5,8,0xffffffff831bbca8);
        puVar4 = lbl_831BBCA8;
      }
      if (uVar2 == 0) break;
      pbVar5 = pbVar5 + 1;
    }
    puVar3 = (uint *)fn_82F81918(auStack_50,pbVar5,0xffffffff831bbca8);
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = pbVar5 + puVar3[1];
    }
    dVar6 = lbl_82005710;
    uVar2 = *puVar3;
    if ((uVar2 & 0x240) == 0) {
      if ((uVar2 & 0x81) == 0) {
        if (((uVar2 & 0x100) == 0) || (*(double *)(puVar3 + 4) != lbl_82005710)) {
          return *(double *)(puVar3 + 4);
        }
      }
      else {
        dVar6 = lbl_8216AA90;
        if (*pbVar5 == 0x2d) {
          dVar6 = -lbl_8216AA90;
        }
      }
      puVar1 = (undefined4 *)fn_82F68240();
      *puVar1 = 0x22;
    }
    else if (param_2 != (undefined4 *)0x0) {
      *param_2 = param_1;
    }
  }
  return dVar6;
}

