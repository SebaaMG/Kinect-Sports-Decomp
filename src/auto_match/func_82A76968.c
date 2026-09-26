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
extern int fn_82A59718();
extern int fn_82A598F0();
extern int fn_82A761A0();
extern int fn_82A81840();
extern unsigned int iStack_28;
extern unsigned int uStack_24;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


undefined8 fn_82A76968(int param_1)

{
  ushort uVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  uint uStack_24;
  
  uVar2 = fn_82A81840();
  if (-1 < (int)uVar2) {
    iVar3 = fn_82A59718(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0x7c));
    iVar4 = fn_82A598F0(param_1 + 0x10,iVar3);
    if (iVar4 != 0) {
      fn_82A761A0(iVar3);
      *(int *)(param_1 + 0x78) = iVar3;
      uVar6 = (ulonglong)*(ushort *)(*(int *)(iVar3 + 0x2c) + 0xc);
      trapWord(6,uVar6,0);
      uVar5 = (**(code **)(**(int **)(param_1 + 8) + 0x30))
                        (*(int **)(param_1 + 8),*(uint *)(iVar3 + 0x34) / uVar6);
      *(undefined4 *)(param_1 + 0x80) = uVar5;
      iStack_28 = *(int *)(iVar3 + 0x2c);
      if (iStack_28 != 0) {
        uStack_30 = (**(code **)(**(int **)(param_1 + 0x84) + 0x1c))();
        uStack_2c = *(undefined4 *)(param_1 + 0x80);
        uVar1 = *(ushort *)(*(int *)(iVar3 + 0x2c) + 0xc);
        trapWord(6,(ulonglong)uVar1,0);
        uStack_24 = *(uint *)(iVar3 + 0x34) / (uint)uVar1;
        uVar2 = (**(code **)(**(int **)(param_1 + 8) + 0x20))
                          (*(int **)(param_1 + 8),1,&iStack_28,1,&uStack_30);
        return uVar2;
      }
    }
    uVar2 = 0xffffffff8007000e;
  }
  return uVar2;
}

