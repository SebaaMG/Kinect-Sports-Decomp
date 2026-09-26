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
extern unsigned int *auStack_90;
extern int fn_8267C498();
extern int fn_82681BF8();
extern int fn_826BD928();
extern int fn_826D2B68();


uint fn_8269B0E8(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  uint uVar2;
  undefined4 auStack_90 [4];
  int aiStack_80 [32];
  
  lVar1 = fn_826BD928((ulonglong)*(uint *)(param_1 + 0x20) + 0x68);
  if (((lVar1 != 0) && (-1 < (int)param_3)) && ((int)param_3 < 0x7efffffe)) {
    auStack_90[0] = *(undefined4 *)(param_1 + 0x10);
    fn_82681BF8((double)*(float *)(param_1 + 0x1c),aiStack_80,auStack_90,param_3,1,
                    param_1 + 0x24,1,param_1 + 0x44);
    uVar2 = fn_826D2B68(lVar1,aiStack_80,param_2,0,param_4,0xffffffffffffffff,1,0);
    if (uVar2 != 0) {
      uVar2 = -(uint)((*(byte *)(uVar2 + 0x66) & 0x80) != 0) & uVar2;
      if (aiStack_80[0] == 0) {
        return uVar2;
      }
      fn_8267C498();
      return uVar2;
    }
    if (aiStack_80[0] != 0) {
      fn_8267C498();
    }
  }
  return 0;
}

