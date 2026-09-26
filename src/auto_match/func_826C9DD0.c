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
extern int fn_826944C8();
extern int fn_826957D0();
extern int fn_82696D38();
extern int fn_82697700();
extern int fn_8269B410();
extern int fn_8269F500();
extern int fn_826C59F8();
extern unsigned int iStack_1c;


void fn_826C9DD0(int param_1)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  char cVar4;
  longlong lVar5;
  undefined4 *puStack_20;
  int iStack_1c;
  
  piVar1 = (int *)fn_826C59F8();
  if (piVar1 != (int *)0x0) {
    if (*(int *)(param_1 + 0x1c) < 1) {
      iVar2 = piVar1[0x20];
      if (iVar2 == 0) {
        iVar2 = fn_8269F500(piVar1);
      }
      fn_8269B410(piVar1 + 3,0xffffffff8200be74,**(undefined4 **)(iVar2 + 0xc));
    }
    else {
      pcVar3 = (char *)fn_826957D0(param_1,0);
      iStack_1c = -1;
      if (*pcVar3 == '\x05') {
        fn_82696D38(&puStack_20,pcVar3,*(undefined4 *)(param_1 + 0x18),0xffffffffffffffff,0);
        cVar4 = (**(code **)(*piVar1 + 0x11c))(piVar1,*puStack_20,&iStack_1c,1);
        if (cVar4 == '\0') {
          lVar5 = (ulonglong)(uint)puStack_20[2] - 1;
          puStack_20[2] = (int)lVar5;
          if (lVar5 != 0) {
            return;
          }
          fn_826944C8(puStack_20);
          return;
        }
        lVar5 = (ulonglong)(uint)puStack_20[2] - 1;
        puStack_20[2] = (int)lVar5;
        if (lVar5 == 0) {
          fn_826944C8(puStack_20);
        }
      }
      else {
        iStack_1c = fn_82697700(pcVar3,*(undefined4 *)(param_1 + 0x18));
        iStack_1c = iStack_1c + -1;
      }
      (**(code **)(*piVar1 + 0x120))(piVar1,iStack_1c);
      (**(code **)(*piVar1 + 0x124))(piVar1,0);
    }
  }
  return;
}

