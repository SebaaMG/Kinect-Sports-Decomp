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
extern int fn_82FB8288();
extern int fn_82FB9358();
extern int fn_82FB95B0();
extern int fn_8300CBD0();
extern int fn_8300CC40();
extern int fn_8300CCD0();
extern int fn_8300CD08();


void fn_82FB8558(int param_1,int param_2,ulonglong param_3,int *param_4,int param_5)

{
  ushort uVar1;
  char cVar3;
  undefined2 *puVar2;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  
  if (((*(ushort *)(param_1 + 0x28) & 0x8000) != 0) && (param_5 == *(int *)(param_2 + 0x20))) {
    fn_82FB8288(param_1,param_2,param_5);
  }
  if (*(char *)(param_2 + 0x25) == '\0') {
    cVar3 = fn_8300CC40(param_5,param_3);
    if (cVar3 == '\0') {
      fn_8300CBD0(param_5,param_3);
      *(short *)(param_5 + 0x16) = *(short *)(param_5 + 0x16) + -1;
    }
    if (*(short *)(param_2 + 0x28) == 0) {
      return;
    }
    puVar6 = (undefined4 *)(param_5 + 0x18);
    *(short *)(param_5 + 0x14) = *(short *)(param_5 + 0x14) + -1;
    puVar2 = (undefined2 *)fn_82FB95B0(puVar6);
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = (short)param_3;
      fn_8300CCD0(param_5,param_3);
      *(uint *)(param_5 + 0x10) =
           *(int *)(param_5 + 0x10) -
           (uint)*(ushort *)
                  (*(int *)(((uint)((param_3 & 0xffffffff) << 2) & 0x3fffc) + *param_4) + 0xe);
      uVar5 = (param_4[1] - *param_4 >> 2) + 0xffffU & 0xffff;
      uVar4 = (uint)*(ushort *)(param_2 + 0x28);
      if (uVar5 <= *(ushort *)(param_2 + 0x28)) {
        uVar4 = uVar5;
      }
      if ((uint)(*(int *)(param_5 + 0x1c) - (int)*puVar6 >> 1) <= uVar4) {
        return;
      }
      uVar1 = *(ushort *)*puVar6;
      fn_8300CD08(param_5,uVar1);
      uVar1 = *(ushort *)(*(int *)((uint)uVar1 * 4 + *param_4) + 0xe);
      *(short *)(param_5 + 0x14) = *(short *)(param_5 + 0x14) + 1;
      *(uint *)(param_5 + 0x10) = (uint)uVar1 + *(int *)(param_5 + 0x10);
      fn_82FB9358(puVar6,0);
      return;
    }
  }
  else {
    uVar5 = (uint)*(ushort *)(param_2 + 0x28);
    if (uVar5 == 0) {
      uVar5 = 1;
    }
    uVar1 = *(ushort *)(*(int *)(((uint)((param_3 & 0xffffffff) << 2) & 0x3fffc) + *param_4) + 0xe);
    *(short *)(param_5 + 0x14) = *(short *)(param_5 + 0x14) + -1;
    *(short *)(param_5 + 0x16) = *(short *)(param_5 + 0x16) + -1;
    *(uint *)(param_5 + 0x10) = *(int *)(param_5 + 0x10) - (uint)uVar1;
    fn_8300CBD0(param_5,param_3);
    puVar6 = (undefined4 *)(param_5 + 0x18);
    puVar2 = (undefined2 *)fn_82FB95B0(puVar6);
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = (short)param_3;
      fn_8300CCD0(param_5,param_3);
      uVar4 = (param_4[1] - *param_4 >> 2) + 0xffffU & 0xffff;
      if (uVar5 < uVar4) {
        uVar4 = uVar5;
      }
      if ((uint)(*(int *)(param_5 + 0x1c) - (int)*puVar6 >> 1) <= uVar4) {
        return;
      }
      uVar1 = *(ushort *)*puVar6;
      fn_82FB9358(puVar6,0);
      fn_8300CD08(param_5,uVar1);
      cVar3 = fn_8300CC40(param_5,uVar1);
      if (cVar3 != '\0') {
        return;
      }
      uVar1 = *(ushort *)(*(int *)((uint)uVar1 * 4 + *param_4) + 0xe);
      *(short *)(param_5 + 0x14) = *(short *)(param_5 + 0x14) + 1;
      *(uint *)(param_5 + 0x10) = (uint)uVar1 + *(int *)(param_5 + 0x10);
      return;
    }
  }
  *(undefined2 *)(param_5 + 0x16) = 0;
  return;
}

