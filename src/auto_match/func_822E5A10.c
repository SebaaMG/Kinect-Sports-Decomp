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
extern float fRam831d14e8;
extern int fn_822E6008();
extern int fn_822E64E0();
extern int fn_822E7C78();


void fn_822E5A10(int param_1,undefined8 param_2)

{
  uint uVar1;
  bool bVar2;
  undefined4 uVar3;
  bool bVar4;
  
  uVar1 = *(uint *)(*(int *)(param_1 + 0x1bc) + 0x54);
  if ((uVar1 < 2) || ((5 < uVar1 && ((uVar1 < 8 || (uVar1 == 0x10)))))) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  bVar2 = *(int *)(*(int *)(param_1 + 0x1bc) + 0x178) == 2;
  if (((bVar4) && (*(int *)(param_1 + 0x20c) == 0)) && (*(int *)(param_1 + 0x210) == 0)) {
    if (bVar2) {
      uVar3 = fn_822E64E0((double)fRam831d14e8,param_1,param_2,0,0,bVar2,1);
      *(undefined4 *)(param_1 + 0x210) = uVar3;
      uVar3 = fn_822E64E0((double)fRam831d14e8,param_1);
      *(undefined4 *)(param_1 + 0x20c) = uVar3;
    }
    else if ((uVar1 == 3) && (*(int *)(param_1 + 0x278) != 0)) {
      if (*(int *)(param_1 + 0x214) == 0) {
        fn_822E6008(param_1,0);
        *(undefined4 *)(param_1 + 0x20c) = 0;
        uVar3 = fn_822E64E0((double)fRam831d14e8,param_1);
        *(undefined4 *)(param_1 + 0x210) = uVar3;
      }
      else {
        fn_822E6008(param_1,0);
        *(undefined4 *)(param_1 + 0x210) = 0;
        uVar3 = fn_822E64E0((double)fRam831d14e8,param_1);
        *(undefined4 *)(param_1 + 0x20c) = uVar3;
      }
      fn_822E7C78(param_1);
    }
  }
  return;
}

