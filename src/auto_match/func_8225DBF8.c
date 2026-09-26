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
extern unsigned int *auStack_60;
extern int fn_82359C18();
extern int fn_82F63108();
extern unsigned int stack0x00000000;


void fn_8225DBF8(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined1 *puVar4;
  undefined4 *puVar5;
  int aiStack_80 [8];
  undefined4 auStack_60 [8];
  undefined1 auStack_40 [64];
  
  if (*(int *)(param_2 + 0x10) == 0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar4 = &stack0x00000000 + -0x60;
    if (*(int *)(param_2 + 0x10) != param_2) {
      puVar4 = (undefined1 *)0x0;
    }
    puVar2 = (undefined4 *)
             (**(code **)**(undefined4 **)(param_2 + 0x10))(*(undefined4 **)(param_2 + 0x10),puVar4)
    ;
  }
  puVar1 = *(undefined4 **)(param_1 + 0x14);
  puVar5 = *(undefined4 **)(param_1 + 0x10);
  if (puVar2 == (undefined4 *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    puVar4 = &stack0x00000000 + -0x80;
    if (puVar2 != (undefined4 *)(&stack0x00000000 + -0x60)) {
      puVar4 = (undefined1 *)0x0;
    }
    piVar3 = (int *)(**(code **)*puVar2)(puVar2,puVar4);
  }
  while( true ) {
    if (puVar5 == puVar1) {
      if ((piVar3 != (int *)0x0) && (piVar3 == (int *)(&stack0x00000000 + -0x80))) {
        (**(code **)*piVar3)(piVar3,&stack0x00000000 + -0x40);
      }
      fn_82359C18(&stack0x00000000 + -0x80);
      fn_82359C18(&stack0x00000000 + -0x60);
      fn_82359C18(&stack0x00000000 + -0x40);
      fn_82359C18(param_2);
      return;
    }
    if (piVar3 == (int *)0x0) break;
    (**(code **)(*piVar3 + 4))(piVar3,*puVar5);
    puVar5 = puVar5 + 1;
  }
                    /* WARNING: Subroutine does not return */
  fn_82F63108();
}

