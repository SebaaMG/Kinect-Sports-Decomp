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
extern int fn_82CFF8D0();


void fn_82D594F0(int param_1,int *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 *puVar4;
  
  if ((*(uint *)(param_1 + 0x1e2c) & 0x80000000) == 0) {
    uVar1 = fn_82CFF8D0(*(undefined4 *)(param_1 + 0x1e24),*(uint *)(param_1 + 0x1e2c) << 3);
    (**(code **)(*param_2 + 0x14))
              (param_2,3,0xffffffff82138d5c,*(undefined4 *)(param_1 + 0x1e24),
               *(int *)(param_1 + 0x1e28) << 3,uVar1);
  }
  puVar4 = (undefined4 *)(param_1 + 0xc);
  lVar2 = 8;
  do {
    lVar3 = 8;
    do {
      (**(code **)(*param_2 + 0xc))(param_2,0xffffffff82138d48,*puVar4,0);
      lVar3 = lVar3 + -1;
      puVar4 = puVar4 + 1;
    } while (lVar3 != 0);
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return;
}

