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
extern int fn_82A1EFC0();
extern V16 vectorSplatImmediateSignedWord128();
extern void *memcpy(void *, const void *, unsigned int);


void fn_829DD9F0(int param_1)

{
  int in_r0;
  longlong lVar1;
  int iVar2;
  undefined1 auVar3 [16];{ V16 _vt0 = vectorSplatImmediateSignedWord128(0); memcpy(auVar3, &_vt0, 16); }
  iVar2 = param_1 + 0x1c;
  *(undefined4 *)(param_1 + 0x10) = 0;
  lVar1 = 8;
  *(undefined4 *)(param_1 + 0x14) = 0;
  memcpy((void *)((const void *)(in_r0 + param_1 & 0xfffffff0)), auVar3, 16);
  do {
    *(undefined4 *)(iVar2 + 600) = 0;
    *(undefined4 *)(iVar2 + -4) = 0;
    fn_82A1EFC0(iVar2,0,600);
    lVar1 = lVar1 + -1;
    iVar2 = iVar2 + 0x260;
  } while (lVar1 != 0);
  return;
}
