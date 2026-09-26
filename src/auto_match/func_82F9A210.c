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
extern unsigned int fStack_30;
extern int fn_82F99590();
extern int fn_82F996C8();
extern unsigned int uStack_44;


void fn_82F9A210(int param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  double dVar4;
  undefined4 uStack_44;
  undefined1 auStack_40 [16];
  float fStack_30;
  
  puVar2 = *(undefined4 **)(param_1 + 4);
  puVar1 = &uStack_44;
  lVar3 = 6;
  do {
    puVar2 = puVar2 + 1;
    puVar1 = puVar1 + 1;
    *puVar1 = *puVar2;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  (**(code **)(param_1 + 8))(param_1,param_2,auStack_40);
  if (fStack_30 == *(float *)(param_1 + 0xc)) {
    fn_82F996C8(param_1,param_2);
  }
  else {
    dVar4 = (double)fn_82F99590();
    *(float *)(param_1 + 0xc) = (float)dVar4;
  }
  return;
}

