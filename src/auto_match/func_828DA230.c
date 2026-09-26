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
extern unsigned int *auStack_28;
extern int fn_82381BC0();
extern int fn_828D9A58();
extern int fn_828D9E68();


void fn_828DA230(longlong param_1,int param_2)

{
  undefined8 uVar1;
  int aiStack_30 [2];
  undefined1 auStack_28 [16];
  
  aiStack_30[0] = **(int **)(param_2 + 0x210);
  if ((int *)aiStack_30[0] != *(int **)(param_2 + 0x210)) {
    do {
      uVar1 = fn_828D9A58(auStack_28,*(undefined4 *)(aiStack_30[0] + 0x10));
      fn_828D9E68(param_1 + 0x84,uVar1);
      fn_82381BC0(aiStack_30);
    } while (aiStack_30[0] != *(int *)(param_2 + 0x210));
  }
  return;
}

