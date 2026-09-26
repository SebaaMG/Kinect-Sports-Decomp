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
extern int fn_82F33C28();
extern int fn_82F33CC8();
extern int fn_82F33DD0();
extern int fn_82F33F20();
extern int fn_82F33FE0();
extern int fn_82F68CC0();


longlong fn_82F342B0(ushort *param_1,undefined4 *param_2)

{
  ushort uVar1;
  int iVar2;
  longlong lVar3;
  ushort *puVar4;
  ushort *apuStack_30 [12];
  
  apuStack_30[0] = (ushort *)0x0;
  if (param_2 == (undefined4 *)0x0) {
    return -0x7ff8ffa9;
  }
  *param_2 = 0;
  if (param_1 == (ushort *)0x0) {
    return 0;
  }
  uVar1 = param_1[1];
  if ((uVar1 & 0xe0) == 0) {
    lVar3 = fn_82F33C28(*param_1,apuStack_30);
  }
  else {
    if ((uVar1 & 0x20) != 0) {
      lVar3 = fn_82F33CC8(0x24,*param_1,apuStack_30);
      puVar4 = apuStack_30[0];
      if ((int)lVar3 < 0) {
        return lVar3;
      }
      iVar2 = *(int *)(param_1 + -2);
      *(int *)(apuStack_30[0] + -2) = iVar2;
      if (iVar2 != 0) {
        (**(code **)(**(int **)(apuStack_30[0] + -2) + 4))();
      }
      goto LAB_82f343ac;
    }
    if ((uVar1 & 0x40) != 0) {
      lVar3 = fn_82F33CC8(0xd,*param_1,apuStack_30);
      puVar4 = apuStack_30[0];
      if ((int)lVar3 < 0) {
        return lVar3;
      }
      fn_82F68CC0(apuStack_30[0] + -8,param_1 + -8,0x10);
      goto LAB_82f343ac;
    }
    puVar4 = (ushort *)0x0;
    if ((uVar1 & 0x80) == 0) goto LAB_82f343ac;
    lVar3 = fn_82F33CC8(*(uint *)(param_1 + -2) & 0xffff,*param_1,apuStack_30);
  }
  puVar4 = apuStack_30[0];
  if ((int)lVar3 < 0) {
    return lVar3;
  }
LAB_82f343ac:
  puVar4[4] = 0;
  puVar4[5] = 0;
  *puVar4 = *param_1;
  puVar4[1] = param_1[1] & 0xefe8;
  *(undefined4 *)(puVar4 + 2) = *(undefined4 *)(param_1 + 2);
  fn_82F68CC0(puVar4 + 8,param_1 + 8,(ulonglong)*param_1 << 3);
  lVar3 = fn_82F33DD0(puVar4);
  if ((-1 < lVar3) && (lVar3 = fn_82F33FE0(param_1,puVar4), -1 < lVar3)) {
    *param_2 = puVar4;
    return 0;
  }
  fn_82F33F20(puVar4,1);
  return lVar3;
}

