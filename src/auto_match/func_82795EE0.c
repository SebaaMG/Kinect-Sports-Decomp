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
extern unsigned int *auStack_38;
extern unsigned int *auStack_40;
extern int fn_8267C4F0();
extern int fn_8278E7B0();
extern int fn_8278FD18();
extern int fn_82790678();
extern int fn_82792F70();
extern int fn_82794EE8();
extern unsigned int iStack_30;


void fn_82795EE0(int param_1,undefined8 param_2,ulonglong param_3)

{
  char cVar4;
  undefined2 *puVar3;
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong uVar5;
  undefined4 auStack_40 [2];
  undefined1 auStack_38 [8];
  int iStack_30;
  
  cVar4 = fn_8278FD18();
  if (cVar4 == '\0') {
    uVar5 = (ulonglong)*(uint *)(param_1 + 4);
    if ((uVar5 != 0) && (cVar4 = fn_8278FD18(param_1), cVar4 != '\0')) {
      uVar5 = uVar5 - 1;
    }
    puVar3 = (undefined2 *)fn_82792F70(param_1,param_2,uVar5,1);
    if (((puVar3 != (undefined2 *)0x0) && (*puVar3 = 0, *(int *)(param_1 + 0x14) == 0)) &&
       ((param_3 & 0xffffffff) != 0)) {
      uVar1 = fn_8278E7B0(param_2,param_3);
      auStack_40[0] = (undefined4)uVar1;
      uVar2 = fn_82790678(auStack_38,uVar5,1,auStack_40);
      fn_82794EE8(param_1 + 0x10,uVar2);
      if (iStack_30 != 0) {
        fn_8267C4F0();
      }
      if ((uVar1 & 0xffffffff) != 0) {
        fn_8267C4F0(uVar1);
      }
    }
  }
  return;
}

