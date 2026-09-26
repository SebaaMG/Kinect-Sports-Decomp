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
extern int fn_83018588();
extern unsigned int lbl_832642E0;
extern unsigned int lbl_832642FC;


void fn_83034B08(int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  
  if (*(undefined4 **)(param_1 + 4) != (undefined4 *)0x0) {
    for (puVar1 = (undefined4 *)**(undefined4 **)(param_1 + 4); puVar1 != (undefined4 *)0x0;
        puVar1 = (undefined4 *)*puVar1) {
      uVar2 = puVar1[1];
      iVar4 = lbl_832642E0 + 4;
      RtlEnterCriticalSection(iVar4);
      for (piVar3 = *(int **)((uVar2 % 0xc1 + 7) * 4 + iVar4); piVar3 != (int *)0x0;
          piVar3 = (int *)piVar3[2]) {
        if (piVar3[3] == uVar2) {
          piVar3[1] = piVar3[1] + 1;
          RtlLeaveCriticalSection(iVar4);
          (**(code **)(*piVar3 + 0x60))(piVar3,param_1);
          (**(code **)(*piVar3 + 8))(piVar3);
          goto LAB_83034bd8;
        }
      }
      RtlLeaveCriticalSection(iVar4);
LAB_83034bd8:;}
  }
  fn_83018588(lbl_832642FC,param_1);
  return;
}

