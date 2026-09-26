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
extern int fn_82381BC0();
extern int fn_8243DAE0();
extern int fn_82552AD8();
extern unsigned int iStack_44;
extern unsigned int iStack_48;
extern unsigned int stack0x0000001c;
extern unsigned int uStack0000001c;


void fn_8243D6E0(undefined8 param_1,int param_2,undefined4 param_3,undefined8 param_4)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  longlong lVar4;
  undefined4 uStack0000001c;
  int aiStack_50 [2];
  int iStack_48;
  int iStack_44;
  
  puVar2 = *(uint **)(param_2 + 4);
  uVar3 = 0;
  if ((int)(puVar2[1] - *puVar2) / 0x30 != 0) {
    lVar4 = 0;
    uStack0000001c = param_3;
    do {
      fn_8243DAE0(&iStack_48,(ulonglong)*puVar2 + lVar4 + 0x1c,&stack0x0000001c);
      iVar1 = iStack_44;
      aiStack_50[0] = iStack_48;
      while (aiStack_50[0] != iVar1) {
        if (*(int *)(*(int *)(aiStack_50[0] + 0x10) + 0x30) == 2) {
          fn_82552AD8(param_1,(ulonglong)*(uint *)(*(int *)(aiStack_50[0] + 0x10) + 0x3c) *
                                    0xc + (ulonglong)*(uint *)(*(int *)(param_2 + 4) + 0x14),param_4
                           );
        }
        fn_82381BC0(aiStack_50);
      }
      puVar2 = *(uint **)(param_2 + 4);
      uVar3 = uVar3 + 1;
      lVar4 = lVar4 + 0x30;
    } while (uVar3 < (uint)((int)(puVar2[1] - *puVar2) / 0x30));
  }
  return;
}

