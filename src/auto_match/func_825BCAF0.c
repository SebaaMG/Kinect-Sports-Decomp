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
extern int fn_8251FA58();
extern int fn_82522ED8();
extern int fn_82557888();
extern int fn_82A1F238();
extern int fn_82F68B74();


void fn_825BCAF0(longlong param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  piVar2 = (int *)fn_82F68B74(param_1 + 0x98);
  if (piVar2[1] != 0) {
    iVar3 = 0;
    if (0 < piVar2[1]) {
      iVar4 = 0;
      do {
        piVar5 = (int *)(iVar4 + *piVar2);
        if (piVar5[0x50] != 0) {
          if (piVar5[0x53] < 0) {
            (**(code **)(*(int *)*piVar5 + 0x54))();
          }
          else {
            piVar5[0x53] = -1;
          }
          piVar5[0x50] = 0;
        }
        if (piVar5[1] == 0) {
          (**(code **)(*(int *)*piVar5 + 8))();
        }
        puVar1 = (undefined4 *)piVar5[0x51];
        if (puVar1 != (undefined4 *)0x0) {
          (**(code **)*puVar1)(puVar1,1);
        }
        piVar5[0x51] = 0;
        if (piVar5[0x66] != 0) {
          fn_8251FA58();
          piVar5[0x66] = 0;
        }
        puVar1 = (undefined4 *)*piVar5;
        if (puVar1 != (undefined4 *)0x0) {
          if (piVar5[1] == 0) {
            (**(code **)*puVar1)(puVar1,1);
          }
          *piVar5 = 0;
        }
        fn_82557888(piVar5);
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + 0x1a0;
      } while (iVar3 < piVar2[1]);
    }
  }
  if (piVar2[0xb] != 0) {
    fn_82522ED8();
  }
  if (piVar2[0xc] != 0) {
    fn_82A1F238();
  }
  if (piVar2[0xd] != 0) {
    fn_82A1F238();
  }
  return;
}

