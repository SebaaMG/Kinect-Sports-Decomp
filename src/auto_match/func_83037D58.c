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
extern int fn_82A1DDC0();
extern int fn_82FA5060();
extern int fn_82FA5190();
extern int fn_83037F70();
extern unsigned int lbl_831BC768;
extern unsigned int uRam831bc8dc;


undefined8 fn_83037D58(int *param_1,undefined8 param_2,ulonglong param_3)

{
  uint uVar1;
  ulonglong uVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  
  if (((ulonglong)uRam831bc8dc - (ulonglong)(uint)param_1[7] & 0xffffffff) < (param_3 & 0xffffffff))
  {
    if (*(char *)(param_1 + 8) != '\0') {
      return 0x34;
    }
    uVar4 = param_1[6] + 1;
    uVar1 = param_1[1] - *param_1 >> 3;
    uVar5 = -(uint)(uVar4 < uVar1) & uVar4;
    if (param_1[4] == uVar5) {
      if (((uint)param_1[3] <= uVar1) ||
         (uVar2 = fn_82FA5060(lbl_831BC768,(ulonglong)uRam831bc8dc,param_3,uVar4 - uVar1),
         (uVar2 & 0xffffffff) == 0)) {
        *(undefined1 *)(param_1 + 8) = 1;
        return 0x34;
      }
      puVar3 = (undefined4 *)fn_83037F70(param_1,uVar5);
      if (puVar3 == (undefined4 *)0x0) {
        *(undefined1 *)(param_1 + 8) = 1;
        fn_82FA5190(lbl_831BC768,uVar2);
        return 0x34;
      }
      *puVar3 = (int)uVar2;
      param_1[4] = param_1[4] + 1;
    }
    else {
      uVar2 = (ulonglong)*(uint *)(uVar5 * 8 + *param_1);
    }
    param_1[6] = uVar5;
    param_1[7] = (int)param_3;
    fn_82A1DDC0(uVar2,param_2,param_3);
  }
  else {
    fn_82A1DDC0((ulonglong)*(uint *)(param_1[6] * 8 + *param_1) + (ulonglong)(uint)param_1[7],
                      param_2);
    param_1[7] = (int)param_3 + param_1[7];
  }
  *(int *)(param_1[6] * 8 + *param_1 + 4) = param_1[7];
  return 1;
}

