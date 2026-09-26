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
extern int fn_82BF6B38();
extern int fn_82BF7630();
extern unsigned int iStack_50;


/* WARNING: Type propagation algorithm not settling */

undefined4 fn_82BEC9C8(int param_1,code *param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iStack_50;
  int aiStack_4c [19];
  
  if ((*(int *)(param_1 + 0x50) == 2) || (param_2 == (code *)0x0)) {
    uVar3 = 0;
  }
  else {
    lVar1 = -(ulonglong)(*(int *)(param_1 + 0x1c) != 0);
    aiStack_4c[0] = (int)lVar1;
    if (lVar1 != 0) {
      do {
        aiStack_4c[1] = 0;
        iStack_50 = 0;
        fn_82BF7630(param_1 + 0xc,aiStack_4c,aiStack_4c + 1,&iStack_50);
        if (iStack_50 != 0) {
          puVar4 = (undefined4 *)(iStack_50 + 0xc);
          if ((*(int *)(iStack_50 + 0xc) != 0) && (iVar2 = (*param_2)(param_3), iVar2 != 0)) {
            fn_82BF6B38(param_4,*puVar4);
          }
        }
      } while (aiStack_4c[0] != 0);
    }
    uVar3 = *(undefined4 *)(param_4 + 0x10);
  }
  return uVar3;
}

