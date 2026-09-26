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
extern int fn_82FA5190();
extern int fn_82FEC150();
extern int fn_82FEC160();
extern int fn_83022528();
extern int fn_830252F0();
extern unsigned int lbl_831BC770;


undefined8 fn_83024470(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  longlong lVar4;
  int *piVar5;
  
  fn_83022528(param_1 + 0x80);
  piVar5 = (int *)(param_1 + 0x24);
  lVar4 = 4;
  do {
    piVar1 = (int *)*piVar5;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))(piVar1,0xffffffff831bc7fc);
      *piVar5 = 0;
    }
    uVar3 = lbl_831BC770;
    puVar2 = (undefined4 *)piVar5[1];
    if (puVar2 != (undefined4 *)0x0) {
      (**(code **)*puVar2)(puVar2,0);
      fn_82FA5190(uVar3,puVar2);
      piVar5[1] = 0;
    }
    if (piVar5[-1] != 0) {
      fn_830252F0(param_1 + 0x70);
      fn_82FEC150();
      (**(code **)(*(int *)piVar5[-1] + 0x10))((int *)piVar5[-1],0xffffffff831bc7fc);
      piVar5[-1] = 0;
      fn_82FEC160();
    }
    lVar4 = lVar4 + -1;
    piVar5 = piVar5 + 5;
  } while (lVar4 != 0);
  if (*(int *)(param_1 + 0x100) != 0) {
    fn_82FA5190(lbl_831BC770);
    *(undefined4 *)(param_1 + 0x100) = 0;
  }
  return 1;
}

