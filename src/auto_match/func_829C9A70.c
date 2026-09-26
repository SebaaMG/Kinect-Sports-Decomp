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
extern unsigned int iStack_48;
extern unsigned int iStack_4c;
extern unsigned int iStack_50;
extern unsigned int iStack_54;
extern unsigned int iStack_58;
extern unsigned int iStack_5c;
extern unsigned int iStack_60;
extern unsigned int iStack_64;
extern unsigned int iStack_68;
extern unsigned int iStack_6c;
extern unsigned int iStack_70;
extern unsigned int iStack_74;
extern unsigned int iStack_78;
extern unsigned int iStack_7c;
extern unsigned int lbl_8315C3E8;
extern unsigned int uStack_80;
extern unsigned int uStack_88;


undefined8 fn_829C9A70(int *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uStack_88;
  undefined4 uStack_80;
  int iStack_7c;
  int iStack_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  
  if (param_1 == (int *)0x0) {
    uVar2 = 0xffffffff80070057;
  }
  else {
    lVar4 = 7;
    puVar1 = &uStack_88;
    do {
      puVar3 = puVar1;
      puVar1 = puVar3 + 1;
      *puVar1 = 0;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    *(undefined4 *)(puVar3 + 2) = 0;
    uStack_80 = 0x19;
    uVar2 = (*(code *)lbl_8315C3E8)(&uStack_80);
    if (-1 < (int)uVar2) {
      *param_1 = iStack_7c * 0x32;
      param_1[3] = iStack_70 * 0x32;
      param_1[4] = iStack_6c * 0x32;
      param_1[5] = iStack_68 * 0x32;
      param_1[1] = iStack_78 * 0x32;
      param_1[2] = iStack_74 * 0x32;
      param_1[6] = iStack_64 * 0x32;
      param_1[7] = iStack_60 * 0x32;
      param_1[8] = iStack_5c * 0x32;
      param_1[9] = iStack_58 * 0x32;
      param_1[10] = iStack_54 * 0x32;
      param_1[0xb] = iStack_50 * 0x32;
      param_1[0xc] = iStack_4c * 0x32;
      param_1[0xd] = iStack_48 * 0x32;
    }
  }
  return uVar2;
}

