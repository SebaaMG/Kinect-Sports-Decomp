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
extern int fn_82230360();
extern int fn_82F6DCE0();
extern int fn_82F8DBA0();
extern unsigned int uStack_2d;


longlong fn_82E1C150(int param_1)

{
  char cVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  char *pcVar5;
  char acStack_130 [259];
  undefined1 uStack_2d;
  
  if ((*(int *)(param_1 + 4) == 0) || (*(int *)(param_1 + 0x4c) == 0)) {
    lVar2 = -0x7ff8ffa9;
  }
  else {
    if (*(char *)(param_1 + 8) == '\x01') {
      puVar4 = (undefined4 *)(param_1 + 0xc);
      *(undefined4 *)(param_1 + 0x1c) = 0;
      if (0xf < *(uint *)(param_1 + 0x20)) {
        puVar4 = (undefined4 *)*puVar4;
      }
      *(undefined1 *)puVar4 = 0;
      *(undefined1 *)(param_1 + 8) = 0;
    }
    puVar4 = (undefined4 *)(param_1 + 0x3c);
    if (0xf < *(uint *)(param_1 + 0x50)) {
      puVar4 = (undefined4 *)*puVar4;
    }
    lVar2 = fn_82F8DBA0(puVar4,*(undefined4 *)(param_1 + 4),0,param_1 + 0x58);
    if (-1 < lVar2) {
      uVar3 = (**(code **)(**(int **)(param_1 + 0x5c) + 0xc))();
      *(undefined4 *)(param_1 + 0x2c) = uVar3;
      *(undefined2 *)(param_1 + 0x28) = 2;
      *(undefined2 *)(param_1 + 0x2a) = *(undefined2 *)(param_1 + 0x38);
      fn_82F6DCE0(acStack_130,0x103,0xffffffff820eb130,*(undefined1 *)(param_1 + 0x2c),
                        *(undefined1 *)(param_1 + 0x2d),*(undefined1 *)(param_1 + 0x2e),
                        *(undefined1 *)(param_1 + 0x2f));
      uStack_2d = 0;
      pcVar5 = acStack_130;
      do {
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      fn_82230360(param_1 + 0xc,acStack_130,pcVar5 + (-1 - (int)acStack_130));
      *(undefined1 *)(param_1 + 8) = 1;
    }
  }
  return lVar2;
}

