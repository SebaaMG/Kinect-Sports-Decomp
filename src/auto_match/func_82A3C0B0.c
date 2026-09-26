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
extern int fn_82A3AAB8();
extern int fn_82A3C038();


void fn_82A3C0B0(int *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined1 *puVar2;
  longlong lVar3;
  uint *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  fn_82A3AAB8(param_1,(longlong)*(char *)(param_1 + 6) + -0x10,0);
  puVar4 = (uint *)(param_1 + 0xc);
  lVar3 = 3;
  do {
    lVar6 = 4;
    uVar5 = (ulonglong)*puVar4;
    do {
      *(char *)param_1[0x216] = (char)uVar5;
      param_1[0x216] = param_1[0x216] + 1;
      lVar6 = lVar6 + -1;
      uVar5 = uVar5 >> 8;
    } while (lVar6 != 0);
    lVar3 = lVar3 + -1;
    puVar4 = puVar4 + 1;
  } while (lVar3 != 0);
  while (param_3 != 0) {
    param_3 = param_3 + -1;
    puVar2 = (undefined1 *)(*param_1 + param_2);
    param_2 = param_2 + 1;
    *(undefined1 *)param_1[0x216] = *puVar2;
    iVar1 = param_1[0x218];
    param_1[0x216] = param_1[0x216] + 1;
    param_1[0x218] = iVar1 + 1;
    if (iVar1 + 1 == 0x8000) {
      fn_82A3C038(param_1);
      *(undefined1 *)((int)param_1 + 0x871) = 0;
    }
  }
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 6) = 0x20;
  return;
}

