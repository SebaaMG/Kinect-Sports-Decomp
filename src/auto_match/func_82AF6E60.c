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
extern unsigned int *auStack_40;
extern int fn_82AF4BA8();
extern int fn_82AF6CC8();


void fn_82AF6E60(undefined8 param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  ulonglong uVar4;
  uint uVar5;
  int *piVar6;
  ulonglong uVar7;
  undefined1 auStack_40 [64];
  
  uVar7 = 0;
  uVar5 = 0;
  piVar6 = (int *)(param_2 + 0x2c);
  while( true ) {
    if ((*(uint *)(param_2 + 8) >> 0x13 & 7) <= uVar5) break;
    uVar1 = ((uint *)*piVar6)[3];
    uVar2 = *(uint *)(uVar1 + 8) >> 7 & 0x7f;
    if ((uVar2 == 0x7d) || (bVar3 = false, uVar2 == 0x7c)) {
      bVar3 = true;
    }
    if (bVar3) {
      uVar2 = *(uint *)*piVar6;
      uVar4 = fn_82AF4BA8(param_1,uVar1,uVar2 >> 0x19 & 7,uVar2 >> 5 & 0xff,uVar2 & 0x1f,
                            auStack_40);
      uVar7 = uVar4 | uVar7;
    }
    uVar5 = uVar5 + 1;
    piVar6 = piVar6 + 1;
  }
  if ((uVar7 & 0xffffffff) != 0) {
    fn_82AF6CC8(param_1,param_2,uVar7);
  }
  return;
}

