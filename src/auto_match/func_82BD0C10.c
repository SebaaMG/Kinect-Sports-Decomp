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
extern int fn_82B7BD28();
extern int fn_82BA03B8();
extern int fn_82BA0FD8();
extern int fn_82BC0088();
extern int fn_82BD0A18();
extern unsigned int lbl_83223EC4;


undefined4 * fn_82BD0C10(undefined4 *param_1,undefined4 param_2,ulonglong param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  longlong lVar4;
  undefined4 *puVar5;
  
  param_1[3] = param_2;
  param_1[2] = param_4;
  param_1[4] = (int)param_3;
  *param_1 = 0;
  if ((int)param_3 != 0) {
    lbl_83223EC4 = fn_82B7BD28(*(undefined4 *)(param_4 + 0x5b0),(param_3 & 0x3fffffff) << 2);
    uVar2 = *(undefined4 *)(param_1[2] + 0x5b0);
    puVar1 = (undefined4 *)fn_82B7BD28(uVar2,0x14);
    puVar5 = puVar1 + 1;
    *puVar1 = uVar2;
    if (puVar5 == (undefined4 *)0x0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      fn_82BA03B8(puVar5,*(undefined4 *)(param_1[2] + 0x5b0));
    }
    lVar4 = 0;
    param_1[1] = puVar5;
    if (0 < (int)param_1[4]) {
      do {
        uVar2 = *(undefined4 *)(param_1[2] + 0x5b0);
        puVar1 = (undefined4 *)fn_82B7BD28(uVar2,0x18);
        *puVar1 = uVar2;
        if (puVar1 + 1 == (undefined4 *)0x0) {
          uVar2 = 0;
        }
        else {
          uVar2 = fn_82BD0A18(puVar1 + 1,lVar4,0,param_1[2]);
        }
        puVar1 = (undefined4 *)fn_82BC0088(param_1[1],*(undefined4 *)(param_1[1] + 4));
        lVar4 = lVar4 + 1;
        *puVar1 = uVar2;
      } while ((int)lVar4 < (int)param_1[4]);
    }
    uVar3 = (param_1[4] + -1) * param_1[4];
    uVar2 = fn_82BA0FD8((longlong)((int)uVar3 >> 1) +
                              (ulonglong)((int)uVar3 < 0 && (uVar3 & 1) != 0),
                              *(undefined4 *)(param_1[2] + 0x5b0));
    *param_1 = uVar2;
  }
  return param_1;
}

