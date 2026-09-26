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
extern int fn_82BE8D50();
extern int fn_82BECB18();
extern int fn_82BED560();
extern int fn_82BF7540();
extern int fn_82BF7590();
extern int fn_82BF7DC8();
extern unsigned int stack0x0000001c;
extern unsigned int uStack0000001c;


undefined8 fn_82BEDD30(int param_1,undefined4 param_2)

{
  undefined8 uVar1;
  int iVar3;
  ulonglong uVar2;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uStack0000001c;
  int aiStack_40 [16];
  
  if (*(int *)(param_1 + 0x50) == 2) goto LAB_82bedd50;
  aiStack_40[0] = 0;
  uStack0000001c = param_2;
  iVar3 = fn_82BF7540(param_1 + 0xc,&stack0x0000001c,aiStack_40);
  iVar4 = aiStack_40[0];
  if (iVar3 == 0) {
LAB_82bede1c:
    uVar1 = 1;
    *(undefined4 *)(param_1 + 0x48) = 0;
  }
  else {
    puVar5 = (undefined4 *)(aiStack_40[0] + 0x1c);
    if ((*(char **)(aiStack_40[0] + 0x1c) == (char *)0x0) ||
       (**(char **)(aiStack_40[0] + 0x1c) == '\0')) {
LAB_82beddf0:
      fn_82BE8D50(iVar4);
      iVar4 = fn_82BF7590(param_1 + 0xc,&stack0x0000001c);
      if ((iVar4 != 0) && (iVar4 = fn_82BED560(param_1), iVar4 != 0)) goto LAB_82bede1c;
    }
    else {
      uVar2 = thunk_FUN_82be5550(0x14);
      if ((uVar2 & 0xffffffff) == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = fn_82BF7DC8(uVar2,uStack0000001c,*(undefined4 *)(param_1 + 8),*puVar5);
      }
      if ((uVar2 & 0xffffffff) != 0) {
        iVar3 = fn_82BECB18(param_1,uVar2);
        if (iVar3 != 0) {
          fn_82BE8D50(uVar2);
          goto LAB_82beddf0;
        }
        fn_82BE8D50(uVar2);
      }
    }
LAB_82bedd50:
    uVar1 = 0;
  }
  return uVar1;
}

