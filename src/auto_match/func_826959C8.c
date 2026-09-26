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
extern int fn_8267BE38();
extern int fn_826824B0();
extern int fn_826944C8();
extern int fn_8269A608();


void fn_826959C8(char *param_1)

{
  char cVar1;
  uint *puVar2;
  uint uVar3;
  longlong lVar4;
  int *piVar5;
  
  cVar1 = *param_1;
  if (cVar1 == '\x05') {
LAB_82695ac0:
    lVar4 = (ulonglong)*(uint *)(*(int *)(param_1 + 4) + 8) - 1;
    *(int *)(*(int *)(param_1 + 4) + 8) = (int)lVar4;
    if (lVar4 != 0) {
      return;
    }
    fn_826944C8();
    return;
  }
  if (cVar1 != '\x06') {
    if (cVar1 == '\a') {
      puVar2 = *(uint **)(param_1 + 4);
      if (puVar2 == (uint *)0x0) {
        return;
      }
      uVar3 = *puVar2;
      *puVar2 = (uint)((ulonglong)uVar3 - 1);
      if ((longlong)((ulonglong)uVar3 - 1) < 1) {
        fn_8269A608(puVar2);
        fn_8267BE38(puVar2);
      }
      goto LAB_82695ab4;
    }
    if (cVar1 == '\b') {
LAB_82695a1c:
      piVar5 = (int *)(param_1 + 4);
      if (*piVar5 == 0) {
        return;
      }
      if (((param_1[0xc] & 2U) == 0) && (*piVar5 != 0)) {
        fn_826824B0();
      }
      *piVar5 = 0;
      if (((param_1[0xc] & 1U) == 0) && (*(int *)(param_1 + 8) != 0)) {
        fn_826824B0();
      }
      param_1[8] = '\0';
      param_1[9] = '\0';
      param_1[10] = '\0';
      param_1[0xb] = '\0';
      return;
    }
    if (cVar1 != '\t') {
      if (cVar1 == '\v') goto LAB_82695ac0;
      if (cVar1 != '\f') {
        return;
      }
      goto LAB_82695a1c;
    }
  }
  if (*(int *)(param_1 + 4) == 0) {
    return;
  }
  fn_826824B0();
LAB_82695ab4:
  param_1[4] = '\0';
  param_1[5] = '\0';
  param_1[6] = '\0';
  param_1[7] = '\0';
  return;
}

