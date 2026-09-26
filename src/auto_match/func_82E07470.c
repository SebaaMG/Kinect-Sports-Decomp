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
extern int fn_82CFC050();
extern int fn_82E06C88();
extern int fn_82E07080();
extern int fn_82E07698();


void fn_82E07470(int param_1,int param_2,char param_3)

{
  char cVar1;
  uint uVar3;
  ulonglong uVar2;
  
  cVar1 = fn_82E07698(param_1 + 0x5c,param_2 + 0x5c);
  if (param_3 != '\0') {
    fn_82E07080(param_1,*(undefined4 *)(param_2 + 0x44),param_1 + 0x5c);
  }
  if (cVar1 == '\0') {
    uVar2 = 0;
    if (*(int *)(param_2 + 0x44) != 0) {
      do {
        fn_82E06C88(param_1,param_2,uVar2,uVar2);
        uVar2 = uVar2 + 1;
      } while ((uVar2 & 0xffffffff) < (ulonglong)*(uint *)(param_2 + 0x44));
    }
  }
  else {
    uVar3 = *(uint *)(param_2 + 0x44);
    if (*(uint *)(param_1 + 0x44) <= *(uint *)(param_2 + 0x44)) {
      uVar3 = *(uint *)(param_1 + 0x44);
    }
    if (*(int *)(param_1 + 0x58) != 0) {
      fn_82CFC050(*(undefined4 *)(param_1 + 0x38),*(undefined4 *)(param_2 + 0x38),
                   (longlong)*(int *)(param_1 + 0x58) * (longlong)(int)uVar3);
    }
    if (*(int *)(param_1 + 0x54) != 0) {
      fn_82CFC050(*(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_2 + 0x2c),
                   (longlong)*(int *)(param_1 + 0x54) * (longlong)(int)uVar3);
    }
    if (*(int *)(param_1 + 0x50) != 0) {
      fn_82CFC050(*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_2 + 0x20),
                   (longlong)*(int *)(param_1 + 0x50) * (longlong)(int)uVar3);
    }
    if (*(int *)(param_1 + 0x4c) != 0) {
      fn_82CFC050(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_2 + 0x14),
                   (longlong)*(int *)(param_1 + 0x4c) * (longlong)(int)uVar3);
    }
    if (*(int *)(param_1 + 0x48) != 0) {
      fn_82CFC050(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_2 + 8),
                   (longlong)*(int *)(param_1 + 0x48) * (longlong)(int)uVar3);
    }
  }
  return;
}

