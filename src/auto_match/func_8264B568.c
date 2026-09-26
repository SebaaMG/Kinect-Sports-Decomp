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
extern int fn_82644040();
extern int fn_8264D6C0();


void fn_8264B568(int param_1)

{
  undefined4 *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  longlong lVar6;
  
  puVar1 = *(undefined4 **)(param_1 + 0x35b0);
  uVar2 = fn_82644040(param_1,0x22,0x80);
  puVar5 = (undefined4 *)uVar2;
  if ((*(byte *)(param_1 + 0x2abd) & 0x20) == 0) {
    *(undefined4 **)(param_1 + 0x35b0) = puVar5;
    *puVar5 = 0;
    lVar6 = (((uVar2 & 0xffffffff) >> 0x14) + 0x200 & 0x1000) + (uVar2 & 0x1fffffff);
    lVar3 = lVar6 + -0x40000000;
    uVar4 = (undefined4)lVar3;
    if (puVar1 == (undefined4 *)0x0) {
      *(undefined4 *)(*(int *)(param_1 + 0x35a0) + 0x74) = uVar4;
    }
    else {
      *puVar1 = uVar4;
      puVar1[1] = (*(int *)(param_1 + 0x35b4) - (int)puVar1) + -8 >> 3;
    }
    fn_8264D6C0(lVar3,lVar6 + -0x3fffff78,0);
  }
  else {
    puVar5 = *(undefined4 **)(param_1 + 0x4230);
  }
  *(undefined4 **)(param_1 + 0x35b4) = puVar5 + 2;
  *(undefined4 **)(param_1 + 0x35b8) = puVar5 + 0x22;
  return;
}

