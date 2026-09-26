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
extern int fn_82F63CA0();


undefined8 fn_82E67238(undefined8 param_1,uint *param_2,int param_3)

{
  uint uVar1;
  undefined8 uVar2;
  uint uVar3;
  
  if (((ulonglong)param_2[10] + (ulonglong)*param_2 & 0xffffffff) < (ulonglong)param_2[9]) {
    uVar2 = 0xffffffff80004005;
  }
  else {
    if (param_3 != 0) {
      uVar3 = param_2[0x12] + 7;
      fn_82F63CA0((ulonglong)*param_2,(ulonglong)param_2[3],
                   (((longlong)((int)uVar3 >> 3) + (ulonglong)((int)uVar3 < 0 && (uVar3 & 7) != 0))
                   - (ulonglong)param_2[3]) + (ulonglong)param_2[9]);
      uVar3 = param_2[4];
      if (uVar3 <= param_2[0x1e]) {
        fn_82F63CA0(param_2[1],uVar3,
                     ((longlong)((int)(param_2[0x1e] - uVar3) >> 2) + 1U & 0x3fffffff) << 2);
        fn_82F63CA0(param_2[2],param_2[5],
                     ((longlong)((int)(param_2[0x1f] - param_2[5]) >> 2) + 1U & 0x3fffffff) << 2);
      }
    }
    uVar3 = param_2[0xf];
    uVar2 = 0;
    uVar1 = param_2[0xb];
    trapWord(6,(ulonglong)uVar3,0);
    param_2[0x1d] = (param_2[0x1d] - (int)uVar1 / (int)uVar3) - uVar1;
    param_2[0x1e] = (param_2[0x1e] + uVar3 * -4) - 4;
    trapWord(5,(ulonglong)uVar3 &
               ~((((ulonglong)uVar1 & 0x7fffffff) << 1 | (ulonglong)(uVar1 >> 0x1f)) - 1),0xffff);
    param_2[0x1f] = (param_2[0x1f] + uVar3 * -4) - 4;
    param_2[9] = (param_2[9] - (int)uVar1 / (int)uVar3) - uVar1;
  }
  return uVar2;
}

