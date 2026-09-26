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
extern int fn_822315A0();
extern int fn_82522ED8();
extern int fn_82529320();
extern int fn_82672C20();
extern int fn_82A1C0F0();
extern unsigned int lbl_831CEF4C;


void fn_82265538(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x104) == 0x3e5) {
    fn_82A1C0F0(param_1 + 0x104);
  }
  piVar1 = *(int **)(param_1 + 0x628);
  if (piVar1 != (int *)0x0) {
    if (*piVar1 != 0) {
      *(int *)(*piVar1 + 4) = piVar1[1];
    }
    if ((int *)piVar1[1] != (int *)0x0) {
      *(int *)piVar1[1] = *piVar1;
    }
    *piVar1 = 0;
    piVar1[1] = 0;
    fn_82522ED8();
    *(undefined4 *)(param_1 + 0x628) = 0;
  }
  puVar2 = *(undefined4 **)(param_1 + 0x520);
  if (puVar2 != (undefined4 *)0x0) {
    if (*(int *)(param_1 + 0x51c) != 0) {
      iVar3 = *(int *)(param_1 + 0x540);
      fn_82672C20(*puVar2,(&lbl_831CEF4C)[iVar3],0,0);
      puVar2[iVar3 * 0x8d + 10] = 0;
      puVar2[iVar3 * 0x8d + 0xb] = 0;
      *(undefined4 *)(*(int *)(param_1 + 0x540) * 0x234 + *(int *)(param_1 + 0x520) + 0x24) = 0;
    }
    *(undefined4 *)(param_1 + 0x520) = 0;
  }
  if (*(int *)(param_1 + 0xdc) != 0) {
    fn_82529320(*(int *)(param_1 + 0xdc),0);
    *(undefined4 *)(param_1 + 0xdc) = 0;
  }
  if (*(int *)(param_1 + 0xe4) != 0) {
    fn_82529320(*(int *)(param_1 + 0xe4),0);
    *(undefined4 *)(param_1 + 0xe4) = 0;
  }
  if (*(int *)(param_1 + 0xe0) != 0) {
    fn_82529320(*(int *)(param_1 + 0xe0),0);
    *(undefined4 *)(param_1 + 0xe0) = 0;
  }
  if (*(int *)(param_1 + 0x508) != 0) {
    fn_82522ED8();
    *(undefined4 *)(param_1 + 0x508) = 0;
  }
  if (*(int *)(param_1 + 0x528) != 0) {
    fn_822315A0();
  }
  return;
}

