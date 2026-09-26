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
extern int fn_827B4BC8();
extern int fn_827B4F80();
extern int fn_827B4FF0();
extern int fn_827B51A8();
extern int fn_827B5240();
extern unsigned int iStack_6c;
extern unsigned int iStack_70;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;
extern unsigned int uStack_54;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;


void fn_827B5330(undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  int iStack_70;
  int iStack_6c;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  
  puVar3 = param_1 + 5;
  param_1[9] = 0;
  param_1[0xd] = 0;
  param_1[0x11] = 0;
  if (param_1[5] != 0) {
    fn_827B4BC8(puVar3,0,*puVar3,0xffffffff827b4a68);
    uVar2 = *puVar3 - 1;
    param_1[3] = *(undefined4 *)
                  (*(int *)((uVar2 >> 6 & 0x3fffffc) + param_1[8]) + (uVar2 & 0xff) * 0xc);
    param_1[4] = *(undefined4 *)
                  (*(int *)((uVar2 >> 6 & 0x3fffffc) + param_1[8]) + (uVar2 & 0xff) * 0xc + 4);
    param_1[2] = 0;
    do {
      uStack_58 = *param_1;
      uStack_54 = param_1[1];
      param_1[0x11] = 0;
      uStack_60 = 0;
      uStack_5c = 0;
      uStack_50 = 0xffffffff;
      uStack_4c = 0xffffffff;
      uStack_48 = 0xffffffff;
      uVar2 = param_1[2];
      fn_827B4FF0(param_1 + 0x11,&uStack_60);
      fn_827B5240(param_1,0,0);
      if (uVar2 < (uint)param_1[2]) {
        iVar1 = param_1[9];
        iStack_70 = iVar1;
        fn_827B51A8(param_1);
        iStack_6c = param_1[9] - iVar1;
        fn_827B4F80(param_1 + 0xd,&iStack_70);
      }
    } while ((uint)param_1[2] < *puVar3);
  }
  return;
}

