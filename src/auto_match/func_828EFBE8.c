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
extern unsigned int *auStack_58;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_b0;
extern int fn_828A0C20();
extern int fn_828EEAA8();
extern int fn_828EFB68();
extern int fn_82F68CC0();
extern unsigned int uStack_60;
extern unsigned int uStack_a4;


longlong fn_828EFBE8(int param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  ulonglong uVar2;
  char cVar4;
  uint *puVar3;
  undefined4 *puVar5;
  longlong lVar6;
  undefined1 auStack_b0 [12];
  undefined4 uStack_a4;
  undefined1 auStack_a0 [64];
  undefined8 uStack_60;
  undefined1 auStack_58 [88];
  
  uVar2 = fn_828EEAA8();
  if (((uVar2 & 0xffffffff) == (ulonglong)*(uint *)(param_1 + 4)) ||
     (cVar4 = fn_828A0C20(param_2,uVar2 + 0xc), cVar4 != '\0')) {
    lVar6 = 0xd;
    puVar1 = &uStack_a4;
    do {
      puVar5 = puVar1;
      puVar1 = puVar5 + 1;
      *puVar1 = 0;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    *(undefined1 *)(puVar5 + 2) = 0;
    uStack_60 = *param_2;
    fn_82F68CC0(auStack_58,auStack_a0,0x35);
    puVar3 = (uint *)fn_828EFB68(auStack_b0,param_1,uVar2,&uStack_60);
    uVar2 = (ulonglong)*puVar3;
  }
  return uVar2 + 0x14;
}

