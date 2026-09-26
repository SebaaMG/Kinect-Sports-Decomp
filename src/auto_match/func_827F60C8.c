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
extern unsigned int *auStack_280;
extern unsigned int *auStack_290;
extern unsigned int *auStack_34;
extern int fn_827F9C90();
extern int fn_827FEAF8();
extern int fn_827FECF0();
extern int fn_827FF330();


void fn_827F60C8(int param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  longlong lVar3;
  undefined1 auStack_290 [16];
  undefined1 auStack_280 [588];
  undefined1 auStack_34 [52];
  
  fn_827F9C90(param_1 + 0x24);
  fn_827FF330(param_1 + 0x24);
  piVar1 = (int *)(param_1 + 0x124);
  if (*(int *)(param_1 + 0x124) != 0) {
    fn_827FECF0(piVar1,param_1 + 200);
    fn_827FEAF8(piVar1,auStack_280,auStack_290);
    lVar3 = 0x31;
    puVar2 = auStack_34;
    do {
      (**(code **)(**(int **)(param_1 + 0x20) + 4))
                (*(int **)(param_1 + 0x20),piVar1,puVar2,
                 ((ulonglong)*(uint *)(puVar2 + 4) & 0xfffffff) * 0x10 +
                 (ulonglong)*(uint *)(*piVar1 + 0x20));
      lVar3 = lVar3 + -1;
      puVar2 = puVar2 + -0xc;
    } while (-1 < lVar3);
  }
  return;
}

