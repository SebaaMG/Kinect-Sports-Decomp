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
extern int fn_825A24C0();
extern int fn_8265CA20();
extern int fn_82CE4118();


undefined4 * fn_825A1F38(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  iVar1 = param_1[0xd6];
  if (iVar1 != 0) {
    piVar2 = *(int **)(*(int *)(iVar1 + 0x14) + 8);
    for (piVar3 = *(int **)(*(int *)(iVar1 + 0x14) + 4); piVar3 < piVar2; piVar3 = piVar3 + 1) {
      if (*(short *)(*piVar3 + 6) == 1) {
        (**(code **)(*(int *)*piVar3 + 0x10))();
      }
    }
    for (piVar3 = *(int **)(*(int *)(iVar1 + 0x14) + 4); piVar3 < piVar2; piVar3 = piVar3 + 1) {
      if (*(short *)(*piVar3 + 6) == 1) {
        fn_82CE4118();
        fn_825A24C0(*(undefined4 *)(iVar1 + 0x14),piVar3);
        piVar3 = piVar3 + -1;
      }
    }
    fn_8251FA58(param_1[0xd6]);
    param_1[0xd6] = 0;
  }
  fn_82522ED8(*param_1);
  fn_8265CA20(param_1);
  return param_1;
}

