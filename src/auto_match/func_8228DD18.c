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
extern int fn_822315A0();
extern int fn_82279C58();
extern int fn_82279CA0();
extern int fn_822848B8();
extern int fn_824BF8A8();
extern int fn_82672C20();
extern unsigned int iStack_34;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


void fn_8228DD18(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 auStack_38 [4];
  int iStack_34;
  
  *(undefined4 *)(param_1 + 400) = 0;
  fn_82279CA0(param_1,1);
  if (*(int *)(param_1 + 0x144) != 0) {
    fn_822848B8();
    *(undefined4 *)(param_1 + 0x144) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x9c);
  if (iVar1 != 0) {
    piVar4 = *(int **)(iVar1 + 0xc);
    piVar2 = *(int **)(iVar1 + 0x10);
    if (piVar4 != piVar2) {
      do {
        uStack_40 = 3;
        uStack_3c = *(undefined4 *)(*piVar4 + 0x14);
        fn_824BF8A8(iVar1 + 0x1c,&uStack_40);
        piVar4 = piVar4 + 1;
      } while (piVar4 != piVar2);
    }
  }
  puVar3 = (undefined4 *)fn_82279C58(auStack_38,param_1);
  fn_82672C20(*puVar3,0xffffffff821a994c,0,0);
  if (iStack_34 != 0) {
    fn_822315A0();
  }
  *(undefined4 *)(param_1 + 0x194) = 0;
  return;
}

